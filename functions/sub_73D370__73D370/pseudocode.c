NiLight *__thiscall sub_73D370(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  NiLight *v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x128u); /*0x73d39a*/
  v4 = 0; /*0x73d3a6*/
  if ( v3 ) /*0x73d3ae*/
    v4 = sub_73D160(v3); /*0x73d3b7*/
  sub_73D210(this, (int)v4, a2); /*0x73d3c9*/
  return v4; /*0x73d3d0*/
}
