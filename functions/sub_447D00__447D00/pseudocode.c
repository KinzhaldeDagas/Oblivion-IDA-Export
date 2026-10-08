void __thiscall sub_447D00(_BYTE *this)
{
  char v2; // bl
  int v3; // ecx
  _DWORD *v4; // eax

  v2 = *(this + 0xCD4); /*0x447d04*/
  *(this + 0xCD4) = 1; /*0x447d0a*/
  while ( *((_DWORD *)this + 0x22F) || *((_DWORD *)this + 0x22E) ) /*0x447d21*/
  {
    v3 = *((_DWORD *)this + 0x22E); /*0x447d23*/
    if ( v3 ) /*0x447d2b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1); /*0x447d34*/
    v4 = *((_DWORD **)this + 0x22F); /*0x447d36*/
    if ( v4 ) /*0x447d3e*/
    {
      *((_DWORD *)this + 0x22F) = v4[1]; /*0x447d43*/
      *((_DWORD *)this + 0x22E) = *v4; /*0x447d4c*/
      FormHeapFree((unsigned int)v4); /*0x447d52*/
    }
    else
    {
      *((_DWORD *)this + 0x22E) = 0; /*0x447d5c*/
    }
  }
  *(this + 0xCD4) = v2; /*0x447d68*/
}
