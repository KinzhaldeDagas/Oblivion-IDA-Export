NiGeomMorpherController *__thiscall NiGeomMorpherController::NiGeomMorpherController(
        NiGeomMorpherController *this,
        int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x5Cu); /*0x6d1778*/
  v4 = (int)v3; /*0x6d177d*/
  if ( v3 ) /*0x6d178e*/
  {
    NiInterpController_Construct(v3); /*0x6d1792*/
    *(_DWORD *)v4 = &NiGeomMorpherController::`vftable'; /*0x6d1797*/
    *(_DWORD *)(v4 + 0x40) = &NiTArray<float>::`vftable'; /*0x6d179d*/
    *(_WORD *)(v4 + 0x48) = 0; /*0x6d17a4*/
    *(_WORD *)(v4 + 0x4E) = 1; /*0x6d17a8*/
    *(_WORD *)(v4 + 0x4A) = 0; /*0x6d17ae*/
    *(_WORD *)(v4 + 0x4C) = 0; /*0x6d17b2*/
    *(_DWORD *)(v4 + 0x44) = 0; /*0x6d17b6*/
    *(_DWORD *)(v4 + 0x50) = 0; /*0x6d17b9*/
    *(_DWORD *)(v4 + 0x54) = 0; /*0x6d17bc*/
    *(_WORD *)(v4 + 0x3C) = 0; /*0x6d17bf*/
    *(_BYTE *)(v4 + 0x58) = 0; /*0x6d17c3*/
    *(_BYTE *)(v4 + 0x59) = 0; /*0x6d17c6*/
    *(_BYTE *)(v4 + 0x5A) = 0; /*0x6d17c9*/
    *(_BYTE *)(v4 + 0x5B) = 0; /*0x6d17cc*/
  }
  else
  {
    v4 = 0; /*0x6d17d1*/
  }
  sub_6D1480((float *)this, v4, a2); /*0x6d17e3*/
  return (NiGeomMorpherController *)v4; /*0x6d17ea*/
}
