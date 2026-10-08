struct RPC_DISPATCH_TABLE
{
unsigned int DispatchTableCount;
RPC_DISPATCH_FUNCTION *DispatchTable __offset(OFF64|AUTO);
LONG_PTR Reserved;
};
