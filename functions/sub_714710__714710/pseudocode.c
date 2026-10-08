int sub_714710()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // eax
  int result; // eax
  unsigned int v4; // [esp-8h] [ebp-28h]

  v0 = (_DWORD *)FormHeapAlloc(0x14u); /*0x714737*/
  v1 = (int)v0; /*0x71473c*/
  if ( v0 ) /*0x71474d*/
  {
    v0[1] = 0x3B; /*0x714756*/
    *v0 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiObject * (__cdecl *)(void)>::`vftable'; /*0x714763*/
    v0[3] = 0; /*0x714769*/
    v2 = FormHeapAlloc(0xECu); /*0x714771*/
    v4 = 4 * *(_DWORD *)(v1 + 4); /*0x71477d*/
    *(_DWORD *)(v1 + 8) = v2; /*0x714780*/
    _memset(v2, 0, v4); /*0x714783*/
    *(_BYTE *)(v1 + 0x10) = 0; /*0x71478b*/
    *(_DWORD *)v1 = &NiTStringPointerMap<NiObject * (__cdecl *)(void)>::`vftable'; /*0x71478e*/
  }
  else
  {
    v1 = 0; /*0x714796*/
  }
  unk_B3FB80 = v1; /*0x7147a2*/
  result = FormHeapAlloc(0x10u); /*0x7147a8*/
  if ( result ) /*0x7147b2*/
  {
    *(_DWORD *)result = &NiTArray<void (__cdecl *)(NiStream &,NiObject *)>::`vftable'; /*0x7147b4*/
    *(_WORD *)(result + 8) = 0; /*0x7147ba*/
    *(_WORD *)(result + 0xE) = 3; /*0x7147be*/
    *(_WORD *)(result + 0xA) = 0; /*0x7147c4*/
    *(_WORD *)(result + 0xC) = 0; /*0x7147c8*/
    *(_DWORD *)(result + 4) = 0; /*0x7147cc*/
    unk_B3FB84 = result; /*0x7147cf*/
  }
  else
  {
    unk_B3FB84 = 0; /*0x7147e6*/
  }
  return result; /*0x7147d4*/
}
