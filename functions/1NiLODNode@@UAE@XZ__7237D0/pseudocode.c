void __thiscall NiLODNode::~NiLODNode(NiLODNode *this)
{
  int v2; // esi
  unsigned int v3; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &NiLODNode::`vftable'; /*0x7237f9*/
  v2 = *((_DWORD *)this + 0x3F); /*0x7237ff*/
  if ( v2 ) /*0x72380f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x723815*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x72382b*/
  }
  v3 = *((_DWORD *)this + 0x3C); /*0x723833*/
  *((_DWORD *)this + 0x3B) = &NiTArray<unsigned int>::`vftable'; /*0x72383c*/
  FormHeapFree(v3); /*0x723846*/
  NiBSPNode::~NiBSPNode(this); /*0x723850*/
}
