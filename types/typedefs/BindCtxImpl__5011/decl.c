struct BindCtxImpl
{
IBindCtx_0 IBindCtx_iface;
LONG ref;
BindCtxObject_0 *bindCtxTable;
DWORD bindCtxTableLastIndex;
DWORD bindCtxTableSize;
BIND_OPTS3 options;
};
