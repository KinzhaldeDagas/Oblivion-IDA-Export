void __thiscall sub_7B3940(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // esi
  unsigned int *v4; // ebp
  NiTPointerList__BSImageSpaceShader *v5; // esi
  int v6; // edi

  v2 = *(this + 7); /*0x7b396b*/
  if ( v2 ) /*0x7b3978*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7b397e*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7b3994*/
    *(this + 7) = 0; /*0x7b3996*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 8)); /*0x7b39a2*/
  v3 = (_DWORD *)*(this + 4); /*0x7b39a7*/
  while ( v3 ) /*0x7b39ac*/
  {
    v4 = (unsigned int *)v3[2]; /*0x7b39b0*/
    v3 = (_DWORD *)*v3; /*0x7b39b8*/
    if ( v4 ) /*0x7b39ba*/
    {
      sub_803210(v4); /*0x7b39be*/
      FormHeapFree((unsigned int)v4); /*0x7b39c4*/
    }
  }
  v5 = (NiTPointerList__BSImageSpaceShader *)(this + 3); /*0x7b39d0*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 3)); /*0x7b39d5*/
  NiTList<unsigned int>::~NiTList<unsigned int>((NiTPointerList__BSImageSpaceShader *)(this + 8)); /*0x7b39e1*/
  v6 = *(this + 7); /*0x7b39e6*/
  if ( v6 ) /*0x7b39f0*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7b39f6*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7b3a0c*/
  }
  NiTPointerList<DistantLODGroup *>::~NiTPointerList<DistantLODGroup *>(v5); /*0x7b3a18*/
}
