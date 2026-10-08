char *__stdcall sub_71B300(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int i; // esi
  _DWORD *v6; // ecx
  NiObject *v7; // eax
  NiObject *v8; // eax
  char *v10; // eax

  if ( sub_70E260((_DWORD *)(a1 + 8), a2) ) /*0x71b330*/
    return 0; /*0x71b43a*/
  if ( !a3 ) /*0x71b343*/
    goto LABEL_18; /*0x71b343*/
  if ( a3 == a1 ) /*0x71b34b*/
    return (char *)a3; /*0x71b414*/
  if ( !sub_71AD40((_DWORD *)(a3 + 8), a2) /*0x71b388*/
    || **(_DWORD **)(a3 + 0x54) != **(_DWORD **)(a1 + 0x54)
    || **(_DWORD **)(a3 + 0x58) != **(_DWORD **)(a1 + 0x58)
    || (v4 = *(_DWORD *)(a3 + 0x60), v4 > *(_DWORD *)(a1 + 0x60)) )
  {
LABEL_18:
    v10 = (char *)FormHeapAlloc(0x70u); /*0x71b418*/
    if ( v10 ) /*0x71b42e*/
      return sub_70E3D0(v10, a1); /*0x71b438*/
    return 0; /*0x71b42e*/
  }
  for ( i = 0; i < v4; ++i ) /*0x71b392*/
    memcpy( /*0x71b3b2*/
      (void *)(*(_DWORD *)(a3 + 0x50) + *(_DWORD *)(*(_DWORD *)(a3 + 0x5C) + 4 * i)),
      (const void *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * i) + *(_DWORD *)(a1 + 0x50)),
      *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * i + 4) - *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * i));
  if ( !*(_DWORD *)(a1 + 0x4C) ) /*0x71b3c6*/
    return (char *)a3; /*0x71b3c6*/
  v6 = *(_DWORD **)(a3 + 0x4C); /*0x71b3c8*/
  if ( v6 ) /*0x71b3cd*/
  {
    sub_732480(v6, *(_DWORD *)(a1 + 0x4C)); /*0x71b40d*/
    return (char *)a3; /*0x71b40d*/
  }
  v7 = (NiObject *)FormHeapAlloc(0x24u); /*0x71b3d1*/
  if ( v7 ) /*0x71b3e7*/
    v8 = sub_732690(v7, *(_DWORD *)(a1 + 0x4C)); /*0x71b3ef*/
  else
    v8 = 0; /*0x71b3f6*/
  sub_71B140((_DWORD *)a3, (int)v8); /*0x71b403*/
  return (char *)a3; /*0x71b43c*/
}
