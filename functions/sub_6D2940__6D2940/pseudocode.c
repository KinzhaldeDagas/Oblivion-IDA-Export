int __thiscall sub_6D2940(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 4); /*0x6d2940*/
  if ( v4 ) /*0x6d2945*/
  {
    *a2 = *(_DWORD *)(v4 + 8); /*0x6d294e*/
    *a3 = *(_DWORD *)(v4 + 0x10); /*0x6d2957*/
    *a4 = *(_BYTE *)(v4 + 0x14); /*0x6d2960*/
    return *(_DWORD *)(v4 + 0xC); /*0x6d2962*/
  }
  else
  {
    *a2 = 0; /*0x6d2974*/
    *a3 = 0; /*0x6d297a*/
    *a4 = 0; /*0x6d2980*/
    return 0; /*0x6d2983*/
  }
}
