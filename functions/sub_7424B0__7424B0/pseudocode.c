signed int __usercall sub_7424B0@<eax>(int a1@<eax>, int a2@<ebx>)
{
  int v2; // esi
  int v4; // eax
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // edi
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx

  v2 = *(_DWORD *)(a2 + 0x1C); /*0x7424b2*/
  if ( !*(_DWORD *)(v2 + 0x2C) ) /*0x7424b7*/
  {
    v4 = (*(int (__cdecl **)(_DWORD, int, int))(a2 + 0x20))(*(_DWORD *)(a2 + 0x28), 1 << *(_DWORD *)(v2 + 0x1C), 1); /*0x7424d3*/
    *(_DWORD *)(v2 + 0x2C) = v4; /*0x7424da*/
    if ( !v4 ) /*0x7424dd*/
      return 1; /*0x7424e1*/
  }
  if ( !*(_DWORD *)(v2 + 0x20) ) /*0x7424e8*/
  {
    v6 = *(_DWORD *)(v2 + 0x1C); /*0x7424ed*/
    *(_DWORD *)(v2 + 0x28) = 0; /*0x7424f7*/
    *(_DWORD *)(v2 + 0x24) = 0; /*0x7424fa*/
    *(_DWORD *)(v2 + 0x20) = 1 << v6; /*0x7424fd*/
  }
  v7 = a1 - *(_DWORD *)(a2 + 0x10); /*0x742500*/
  v8 = *(_DWORD *)(v2 + 0x20); /*0x742503*/
  if ( v7 < v8 ) /*0x742508*/
  {
    v10 = v8 - *(_DWORD *)(v2 + 0x28); /*0x74252f*/
    if ( v10 > v7 ) /*0x742533*/
      v10 = v7; /*0x742535*/
    memcpy((void *)(*(_DWORD *)(v2 + 0x28) + *(_DWORD *)(v2 + 0x2C)), (const void *)(*(_DWORD *)(a2 + 0xC) - v7), v10); /*0x742545*/
    v11 = v7 - v10; /*0x74254d*/
    if ( v11 ) /*0x74254f*/
    {
      memcpy(*(void **)(v2 + 0x2C), (const void *)(*(_DWORD *)(a2 + 0xC) - v11), v11); /*0x74255c*/
      v12 = *(_DWORD *)(v2 + 0x20); /*0x742561*/
      *(_DWORD *)(v2 + 0x28) = v11; /*0x742567*/
      *(_DWORD *)(v2 + 0x24) = v12; /*0x74256b*/
      return 0; /*0x74256f*/
    }
    else
    {
      *(_DWORD *)(v2 + 0x28) += v10; /*0x742573*/
      v13 = *(_DWORD *)(v2 + 0x20); /*0x742579*/
      if ( *(_DWORD *)(v2 + 0x28) == v13 ) /*0x74257e*/
        *(_DWORD *)(v2 + 0x28) = 0; /*0x742580*/
      v14 = *(_DWORD *)(v2 + 0x24); /*0x742587*/
      if ( v14 < v13 ) /*0x74258c*/
        *(_DWORD *)(v2 + 0x24) = v10 + v14; /*0x742590*/
      return 0; /*0x742595*/
    }
  }
  else
  {
    memcpy(*(void **)(v2 + 0x2C), (const void *)(*(_DWORD *)(a2 + 0xC) - v8), *(_DWORD *)(v2 + 0x20)); /*0x742515*/
    v9 = *(_DWORD *)(v2 + 0x20); /*0x74251a*/
    *(_DWORD *)(v2 + 0x28) = 0; /*0x742521*/
    *(_DWORD *)(v2 + 0x24) = v9; /*0x742524*/
    return 0; /*0x742528*/
  }
}
