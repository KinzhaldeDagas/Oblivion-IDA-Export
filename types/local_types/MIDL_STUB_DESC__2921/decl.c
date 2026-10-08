struct _MIDL_STUB_DESC
{
void *RpcInterfaceInformation;
void *(*pfnAllocate)(SIZE_T);
void (*pfnFree)(void *);
$BFB2EB47150D3B1257AE7D071061C238 IMPLICIT_HANDLE_INFO;
const NDR_RUNDOWN *apfnNdrRundownRoutines;
const GENERIC_BINDING_ROUTINE_PAIR *aGenericBindingRoutinePairs;
const EXPR_EVAL *apfnExprEval;
const XMIT_ROUTINE_QUINTUPLE *aXmitQuintuple;
const unsigned __int8 *pFormatTypes;
int fCheckBounds;
ULONG Version;
MALLOC_FREE_STRUCT *pMallocFreeStruct;
LONG MIDLVersion;
const COMM_FAULT_OFFSETS *CommFaultOffsets;
const USER_MARSHAL_ROUTINE_QUADRUPLE *aUserMarshalQuadruple;
const NDR_NOTIFY_ROUTINE *NotifyRoutineTable;
ULONG_PTR mFlags;
ULONG_PTR Reserved3;
ULONG_PTR Reserved4;
ULONG_PTR Reserved5;
};
