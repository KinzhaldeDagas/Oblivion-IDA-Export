void __thiscall sub_7C3850(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // esi
  unsigned int *v4; // ebp
  NiTPointerList__BSImageSpaceShader *v5; // ebp
  int v6; // esi
  int v7; // edi

  v2 = *(this + 0xC); /*0x7c387b*/
  if ( v2 ) /*0x7c3888*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7c388e*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c38a4*/
    *(this + 0xC) = 0; /*0x7c38a6*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0xD)); /*0x7c38b2*/
  v3 = (_DWORD *)*(this + 9); /*0x7c38b7*/
  while ( v3 ) /*0x7c38bc*/
  {
    v4 = (unsigned int *)v3[2]; /*0x7c38c0*/
    v3 = (_DWORD *)*v3; /*0x7c38c8*/
    if ( v4 ) /*0x7c38ca*/
    {
      sub_812D60(v4); /*0x7c38ce*/
      FormHeapFree((unsigned int)v4); /*0x7c38d4*/
    }
  }
  v5 = (NiTPointerList__BSImageSpaceShader *)(this + 8); /*0x7c38e0*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 8)); /*0x7c38e5*/
  v6 = *(this + 0xC); /*0x7c38ea*/
  if ( v6 ) /*0x7c38ef*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7c38f5*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c390b*/
    *(this + 0xC) = 0; /*0x7c390d*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0xD)); /*0x7c3916*/
  NiTList<long>::~NiTList<long>((NiTPointerList__BSImageSpaceShader *)(this + 0xD)); /*0x7c3922*/
  v7 = *(this + 0xC); /*0x7c3927*/
  if ( v7 ) /*0x7c3931*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7c3937*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c394d*/
  }
  NiTPointerList<TallGrassGroup *>::~NiTPointerList<TallGrassGroup *>(v5); /*0x7c3959*/
}
