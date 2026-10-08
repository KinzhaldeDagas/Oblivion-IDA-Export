struct PARAM_ATTRIBUTES
{
unsigned __int16 MustSize : 1;
unsigned __int16 MustFree : 1;
unsigned __int16 IsPipe : 1;
unsigned __int16 IsIn : 1;
unsigned __int16 IsOut : 1;
unsigned __int16 IsReturn : 1;
unsigned __int16 IsBasetype : 1;
unsigned __int16 IsByValue : 1;
unsigned __int16 IsSimpleRef : 1;
unsigned __int16 IsDontCallFreeInst : 1;
unsigned __int16 SaveForAsyncFinish : 1;
unsigned __int16 Unused : 2;
unsigned __int16 ServerAllocSize : 3;
};
