void __thiscall sub_899990(int *this, int a2, int a3)
{
  _DWORD **v3; // esi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // edi
  int v9; // ecx

  v3 = (_DWORD **)(a3 + 0xB8); /*0x899997*/
  v5 = *(_DWORD *)(a3 + 0xBC); /*0x89999f*/
  v6 = 0; /*0x8999a2*/
  if ( v5 <= 0 ) /*0x8999a7*/
    goto LABEL_5; /*0x8999a7*/
  v7 = *v3; /*0x8999a9*/
  while ( *v7 ) /*0x8999b3*/
  {
    ++v6; /*0x8999b5*/
    ++v7; /*0x8999b6*/
    if ( v6 >= v5 ) /*0x8999bb*/
      goto LABEL_5; /*0x8999bb*/
  }
  if ( v6 < 0 ) /*0x899a14*/
  {
LABEL_5:
    if ( *(_DWORD *)(a3 + 0xBC) == (*(_DWORD *)(a3 + 0xC0) & 0x3FFFFFFF) ) /*0x8999cb*/
      sub_8A6EE0((const void **)(a3 + 0xB8), 4); /*0x8999d0*/
    v8 = a2; /*0x8999dd*/
    *(_DWORD *)(*(_DWORD *)(a3 + 0xB8) + 4 * (*(_DWORD *)(a3 + 0xBC))++) = a2; /*0x8999e1*/
  }
  else
  {
    v8 = a2; /*0x899a18*/
    (*v3)[v6] = a2; /*0x899a1c*/
  }
  v9 = *(_DWORD *)(v8 + 0xC); /*0x8999e7*/
  if ( *(_WORD *)(v9 + 0x20) != 0xFFFF || *(_BYTE *)(a3 + 0x91) ) /*0x8999f2*/
  {
    if ( *(_DWORD *)(a3 + 0x54) != v9 && !*(_BYTE *)(a3 + 0x91) ) /*0x899a26*/
      sub_8CD320(this, a3, **(_DWORD **)(v9 + 0x34)); /*0x899a38*/
  }
  else
  {
    sub_8DDC90(v9, v8); /*0x8999fd*/
    sub_8DE080(*(const void ***)(a3 + 0x54), v8); /*0x899a06*/
  }
}
