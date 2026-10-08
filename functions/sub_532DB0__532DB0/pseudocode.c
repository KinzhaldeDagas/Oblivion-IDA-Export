int __thiscall sub_532DB0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  if ( this && (v1 = *(this + 2)) != 0 ) /*0x532db9*/
    v2 = *(_DWORD *)(v1 + 0xC); /*0x532dbb*/
  else
    v2 = 0; /*0x532dc0*/
  if ( v2 ) /*0x532dc4*/
    return *(_DWORD *)(v2 + 8); /*0x532dc6*/
  else
    return 0; /*0x532dca*/
}
