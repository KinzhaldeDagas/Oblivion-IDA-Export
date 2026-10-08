char __thiscall sub_70E260(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edi
  _BYTE *v6; // edx
  _DWORD *i; // eax

  if ( *(_DWORD *)(a2 + 4) != *(this + 1) ) /*0x70e26b*/
    return 1; /*0x70e26b*/
  if ( *(_BYTE *)a2 != *(_BYTE *)this ) /*0x70e271*/
    return 1; /*0x70e271*/
  if ( *(_DWORD *)(a2 + 8) != *(this + 2) ) /*0x70e279*/
    return 1; /*0x70e279*/
  if ( *(_BYTE *)(a2 + 1) != *((_BYTE *)this + 1) ) /*0x70e281*/
    return 1; /*0x70e281*/
  v2 = *(_DWORD *)(a2 + 0xC); /*0x70e283*/
  v3 = *(this + 3); /*0x70e286*/
  if ( v2 != v3 && v3 != 0xFFFFFFFF && v2 != 0xFFFFFFFF ) /*0x70e295*/
    return 1; /*0x70e297*/
  v5 = 0; /*0x70e29e*/
  v6 = (_BYTE *)(a2 + 0x1C); /*0x70e2a0*/
  for ( i = this + 5; /*0x70e2a3*/
        *(_DWORD *)((char *)i + a2 - (_DWORD)this) == *i
     && *((_DWORD *)v6 + 0xFFFFFFFF) == i[1]
     && *v6 == *((_BYTE *)i + 8)
     && v6[1] == *((_BYTE *)i + 9);
        i += 3 )
  {
    ++v5; /*0x70e2c6*/
    v6 += 0xC; /*0x70e2c9*/
    if ( v5 >= 4 ) /*0x70e2d2*/
      return 0; /*0x70e2d8*/
  }
  return 1; /*0x70e299*/
}
