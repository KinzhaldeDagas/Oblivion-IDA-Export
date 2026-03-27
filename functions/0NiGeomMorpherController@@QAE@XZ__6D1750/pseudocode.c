NiGeomMorpherController *__thiscall NiGeomMorpherController::NiGeomMorpherController(
        NiGeomMorpherController *this,
        int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x5Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6D04E0(v3);
    *(_DWORD *)v4 = &NiGeomMorpherController::`vftable';
    *(_DWORD *)(v4 + 0x40) = &NiTArray<float>::`vftable';
    *(_WORD *)(v4 + 0x48) = 0;
    *(_WORD *)(v4 + 0x4E) = 1;
    *(_WORD *)(v4 + 0x4A) = 0;
    *(_WORD *)(v4 + 0x4C) = 0;
    *(_DWORD *)(v4 + 0x44) = 0;
    *(_DWORD *)(v4 + 0x50) = 0;
    *(_DWORD *)(v4 + 0x54) = 0;
    *(_WORD *)(v4 + 0x3C) = 0;
    *(_BYTE *)(v4 + 0x58) = 0;
    *(_BYTE *)(v4 + 0x59) = 0;
    *(_BYTE *)(v4 + 0x5A) = 0;
    *(_BYTE *)(v4 + 0x5B) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6D1480((float *)this, v4, a2);
  return (NiGeomMorpherController *)v4;
}
