// MoonSugarEffect decode: BSShaderAccumulator immediate geometry bucket allocator. Creates/links a paired NiGeometry list + BSShaderProperty::RenderPass list group under accumulator +0x19 and returns the group for appending.
_DWORD *__usercall sub_7ABC40@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx

  if ( a1[0x1D] ) /*0x7abc46*/
    return (_DWORD *)a1[0x1D]; /*0x7abcf9*/
  v4 = (_DWORD *)FormHeapAlloc(0x2Cu); /*0x7abc53*/
  if ( v4 ) /*0x7abc5d*/
  {
    *v4 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7abc5f*/
    v4[1] = 0; /*0x7abc65*/
    v4[2] = 0; /*0x7abc68*/
    v4[3] = 0; /*0x7abc6b*/
    v4[5] = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7abc6e*/
    v4[6] = 0; /*0x7abc75*/
    v4[7] = 0; /*0x7abc78*/
    v4[8] = 0; /*0x7abc7b*/
    v5 = v4; /*0x7abc7e*/
  }
  else
  {
    v5 = 0; /*0x7abc82*/
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v5); /*0x7abc86*/
  v5[3] = v5[1]; /*0x7abc93*/
  v5[1] = 0; /*0x7abc96*/
  v5[2] = 0; /*0x7abc99*/
  v5[4] = 0; /*0x7abc9c*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)(v5 + 5)); /*0x7abc9f*/
  v5[8] = v5[6]; /*0x7abca7*/
  v5[6] = 0; /*0x7abcaa*/
  v5[7] = 0; /*0x7abcad*/
  v5[9] = 0; /*0x7abcb0*/
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int, int))(a1[0x19] + 4))(a1 + 0x19, a2, a3); /*0x7abcbe*/
  v6[2] = v5; /*0x7abcc0*/
  *v6 = 0; /*0x7abcc3*/
  v6[1] = a1[0x1B]; /*0x7abcc8*/
  v7 = (_DWORD *)a1[0x1B]; /*0x7abccb*/
  if ( v7 ) /*0x7abcd0*/
  {
    *v7 = v6; /*0x7abcd2*/
    ++a1[0x1C]; /*0x7abcd4*/
  }
  else
  {
    ++a1[0x1C]; /*0x7abce5*/
    a1[0x1A] = v6; /*0x7abce9*/
  }
  a1[0x1B] = v6; /*0x7abcd8*/
  a1[0x1D] = v5; /*0x7abcdc*/
  return v5; /*0x7abce2*/
}
