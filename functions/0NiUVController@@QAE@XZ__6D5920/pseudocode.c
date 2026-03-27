NiUVController *__thiscall NiUVController::NiUVController(NiUVController *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  int v5; // edi

  v3 = (NiTimeController *)FormHeapAlloc(0x58u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    *(_DWORD *)v4 = &NiUVController::`vftable';
    *(_DWORD *)(v4 + 0x50) = 0;
    *(_WORD *)(v4 + 0x4C) = 0;
    *(_DWORD *)(v4 + 0x3C) = 0;
    *(_DWORD *)(v4 + 0x44) = 0;
    *(_DWORD *)(v4 + 0x40) = 0;
    *(_DWORD *)(v4 + 0x48) = 0;
    *(_BYTE *)(v4 + 0x54) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_715D80((float *)this, v4, a2);
  *(_DWORD *)(v4 + 0x3C) = *((_DWORD *)this + 0xF);
  *(_DWORD *)(v4 + 0x44) = *((_DWORD *)this + 0x11);
  *(_DWORD *)(v4 + 0x40) = *((_DWORD *)this + 0x10);
  *(_DWORD *)(v4 + 0x48) = *((_DWORD *)this + 0x12);
  *(_WORD *)(v4 + 0x4C) = *((_WORD *)this + 0x26);
  v5 = *((_DWORD *)this + 0x14);
  if ( v5 )
    sub_6D5810((_DWORD *)v4, v5);
  return (NiUVController *)v4;
}
