#define adfPrint(msg)			KdPrint((msg))
#define adfPrintl(msg)			KdPrint((msg ## "\n"))
#define adfPrintl1(msg,param)	KdPrint((msg ## "\n",param))

#define adfFuncIn()				adfPrintl("--> Adfilter :" ## __FUNCTION__)
#define adfFuncOut()			adfPrintl("<-- Adfilter :" ## __FUNCTION__)
