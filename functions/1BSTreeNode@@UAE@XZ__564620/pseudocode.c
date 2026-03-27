void __thiscall BSTreeNode::~BSTreeNode(BSTreeNode *this)
{
  int *v2; // eax
  unsigned int v3; // edi
  int *v4; // eax
  unsigned int v5; // edi
  int v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  int v8; // edi

  *(_DWORD *)this = &BSTreeNode::`vftable';
  v2 = *((int **)this + 0x38);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 4u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v3);
    *((_DWORD *)this + 0x38) = 0;
  }
  v4 = *((int **)this + 0x39);
  if ( v4 )
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFF);
    _LN21(v4, 4u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v5);
    *((_DWORD *)this + 0x39) = 0;
  }
  v6 = *((_DWORD *)this + 0x3A);
  v7 = InterlockedDecrement;
  if ( v6 )
  {
    if ( !v7((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v8 = *((_DWORD *)this + 0x37);
  if ( v8 )
  {
    if ( !v7((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  NiBSPNode::~NiBSPNode(this);
}
