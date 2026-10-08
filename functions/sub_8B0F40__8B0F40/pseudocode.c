signed int __thiscall sub_8B0F40(int *this, unsigned int a2, _DWORD *a3)
{
  signed int v3; // edx
  int v4; // esi
  signed int v5; // eax
  int v6; // ecx

  v3 = *(this + 2); /*0x8b0f40*/
  v4 = *this; /*0x8b0f44*/
  v5 = v3 & (0x9E3779B1 * (a2 >> 4)); /*0x8b0f56*/
  v6 = *(_DWORD *)(*this + 4 * v5); /*0x8b0f58*/
  if ( v6 ) /*0x8b0f5d*/
  {
    while ( v6 != a2 ) /*0x8b0f62*/
    {
      v5 = v3 & (v5 + 1); /*0x8b0f65*/
      v6 = *(_DWORD *)(v4 + 4 * v5); /*0x8b0f67*/
      if ( !v6 ) /*0x8b0f6c*/
        goto LABEL_4; /*0x8b0f6c*/
    }
  }
  else
  {
LABEL_4:
    v5 = v3 + 1; /*0x8b0f6e*/
  }
  if ( v5 > v3 ) /*0x8b0f73*/
    return 1; /*0x8b0f89*/
  *a3 = *(_DWORD *)(v4 + 4 * (v5 + v3) + 4); /*0x8b0f80*/
  return 0; /*0x8b0f7f*/
}
