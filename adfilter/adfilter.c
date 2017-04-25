#include <wdm.h>
#include "adfilter.h"

void adfOnUnload(PDRIVER_OBJECT _driver);

NTSTATUS adfDefaultDisp(PDEVICE_OBJECT _device, PIRP _irp);


/*
 *	driver entry
 *		this is the driver entry point
 */
NTSTATUS
DriverEntry(
PDRIVER_OBJECT	_driver,
PUNICODE_STRING _path)
{
	adfFuncIn();

	// registry unload function, so the driver can be unload dynamic
	_driver->DriverUnload = adfOnUnload;

	// registry default dispatch function
	for (int i = 0; i < IRP_MJ_MAXIMUM_FUNCTION; i++)
		_driver->MajorFunction[i] = adfDefaultDisp;

	

	adfFuncOut();
	// just return success
	return STATUS_SUCCESS;

}



void adfOnUnload(PDRIVER_OBJECT _driver)
{
	adfFuncIn();


	adfFuncOut();
}

NTSTATUS adfDefaultDisp(PDEVICE_OBJECT _device, PIRP _irp)
{
	NTSTATUS status = STATUS_SUCCESS;


	return status;
}