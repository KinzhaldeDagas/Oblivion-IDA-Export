char __thiscall sub_71AD40(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edi
  _BYTE *v6; // edx
  _DWORD *i; // eax

  if ( *(_DWORD *)(a2 + 4) != *(this + 1) ) /*0x71ad4b*/
    return 0; /*0x71ad4b*/
  if ( *(_BYTE *)a2 != *(_BYTE *)this ) /*0x71ad51*/
    return 0; /*0x71ad51*/
  if ( *(_DWORD *)(a2 + 8) != *(this + 2) ) /*0x71ad59*/
    return 0; /*0x71ad59*/
  if ( *(_BYTE *)(a2 + 1) != *((_BYTE *)this + 1) ) /*0x71ad61*/
    return 0; /*0x71ad61*/
  v2 = *(_DWORD *)(a2 + 0xC); /*0x71ad63*/
  v3 = *(this + 3); /*0x71ad66*/
  if ( v2 != v3 && v3 != 0xFFFFFFFF && v2 != 0xFFFFFFFF ) /*0x71ad75*/
    return 0; /*0x71ad77*/
  v5 = 0; /*0x71ad7e*/
  v6 = (_BYTE *)(a2 + 0x1C); /*0x71ad80*/
  for ( i = this + 5; /*0x71ad83*/
        *(_DWORD *)((char *)i + a2 - (_DWORD)this) == *i
     && *((_DWORD *)v6 + 0xFFFFFFFF) == i[1]
     && *v6 == *((_BYTE *)i + 8)
     && v6[1] == *((_BYTE *)i + 9);
        i += 3 )
  {
    ++v5; /*0x71ada6*/
    v6 += 0xC; /*0x71ada9*/
    if ( v5 >= 4 ) /*0x71adb2*/
      return 1; /*0x71adb8*/
  }
  return 0; /*0x71ad79*/
}
