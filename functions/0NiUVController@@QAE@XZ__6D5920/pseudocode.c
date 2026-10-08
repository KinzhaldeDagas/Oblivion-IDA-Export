NiUVController *__thiscall NiUVController::NiUVController(NiUVController *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  int v5; // edi

  v3 = (NiTimeController *)FormHeapAlloc(0x58u); /*0x6d5948*/
  v4 = (int)v3; /*0x6d594d*/
  if ( v3 ) /*0x6d595e*/
  {
    NiTimeController::NiTimeController(v3); /*0x6d5962*/
    *(_DWORD *)v4 = &NiUVController::`vftable'; /*0x6d5967*/
    *(_DWORD *)(v4 + 0x50) = 0; /*0x6d596d*/
    *(_WORD *)(v4 + 0x4C) = 0; /*0x6d5970*/
    *(_DWORD *)(v4 + 0x3C) = 0; /*0x6d5974*/
    *(_DWORD *)(v4 + 0x44) = 0; /*0x6d5977*/
    *(_DWORD *)(v4 + 0x40) = 0; /*0x6d597a*/
    *(_DWORD *)(v4 + 0x48) = 0; /*0x6d597d*/
    *(_BYTE *)(v4 + 0x54) = 0; /*0x6d5980*/
  }
  else
  {
    v4 = 0; /*0x6d5985*/
  }
  NiTimeController_CopyMembers((float *)this, v4, a2); /*0x6d5997*/
  *(_DWORD *)(v4 + 0x3C) = *((_DWORD *)this + 0xF); /*0x6d599f*/
  *(_DWORD *)(v4 + 0x44) = *((_DWORD *)this + 0x11); /*0x6d59a5*/
  *(_DWORD *)(v4 + 0x40) = *((_DWORD *)this + 0x10); /*0x6d59ab*/
  *(_DWORD *)(v4 + 0x48) = *((_DWORD *)this + 0x12); /*0x6d59b1*/
  *(_WORD *)(v4 + 0x4C) = *((_WORD *)this + 0x26); /*0x6d59b8*/
  v5 = *((_DWORD *)this + 0x14); /*0x6d59bc*/
  if ( v5 ) /*0x6d59c1*/
    sub_6D5810((_DWORD *)v4, v5); /*0x6d59c6*/
  return (NiUVController *)v4; /*0x6d59cd*/
}
