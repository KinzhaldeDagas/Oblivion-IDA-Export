void __thiscall NiLODNode::~NiLODNode(NiLODNode *this)
{
  int v2; // esi
  unsigned int v3; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &NiLODNode::`vftable';
  v2 = *((_DWORD *)this + 0x3F);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 0x3C);
  *((_DWORD *)this + 0x3B) = &NiTArray<unsigned int>::`vftable';
  FormHeapFree(v3);
  NiBSPNode::~NiBSPNode(this);
}
