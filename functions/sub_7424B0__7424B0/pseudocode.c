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
  size_t v15; // [esp-4h] [ebp-10h]
  size_t v16; // [esp-4h] [ebp-10h]

  v2 = *(_DWORD *)(a2 + 0x1C);
  if ( !*(_DWORD *)(v2 + 0x2C) )
  {
    v4 = (*(int (__cdecl **)(_DWORD, int, int))(a2 + 0x20))(*(_DWORD *)(a2 + 0x28), 1 << *(_DWORD *)(v2 + 0x1C), 1);
    *(_DWORD *)(v2 + 0x2C) = v4;
    if ( !v4 )
      return 1;
  }
  if ( !*(_DWORD *)(v2 + 0x20) )
  {
    v6 = *(_DWORD *)(v2 + 0x1C);
    *(_DWORD *)(v2 + 0x28) = 0;
    *(_DWORD *)(v2 + 0x24) = 0;
    *(_DWORD *)(v2 + 0x20) = 1 << v6;
  }
  v7 = a1 - *(_DWORD *)(a2 + 0x10);
  v8 = *(_DWORD *)(v2 + 0x20);
  if ( v7 < v8 )
  {
    v10 = v8 - *(_DWORD *)(v2 + 0x28);
    if ( v10 > v7 )
      v10 = v7;
    LODWORD(v15) = v10;
    memcpy((void *)(*(_DWORD *)(v2 + 0x28) + *(_DWORD *)(v2 + 0x2C)), (const void *)(*(_DWORD *)(a2 + 0xC) - v7), v15);
    v11 = v7 - v10;
    if ( v11 )
    {
      LODWORD(v16) = v11;
      memcpy(*(void **)(v2 + 0x2C), (const void *)(*(_DWORD *)(a2 + 0xC) - v11), v16);
      v12 = *(_DWORD *)(v2 + 0x20);
      *(_DWORD *)(v2 + 0x28) = v11;
      *(_DWORD *)(v2 + 0x24) = v12;
      return 0;
    }
    else
    {
      *(_DWORD *)(v2 + 0x28) += v10;
      v13 = *(_DWORD *)(v2 + 0x20);
      if ( *(_DWORD *)(v2 + 0x28) == v13 )
        *(_DWORD *)(v2 + 0x28) = 0;
      v14 = *(_DWORD *)(v2 + 0x24);
      if ( v14 < v13 )
        *(_DWORD *)(v2 + 0x24) = v10 + v14;
      return 0;
    }
  }
  else
  {
    LODWORD(v15) = *(_DWORD *)(v2 + 0x20);
    memcpy(*(void **)(v2 + 0x2C), (const void *)(*(_DWORD *)(a2 + 0xC) - v8), v15);
    v9 = *(_DWORD *)(v2 + 0x20);
    *(_DWORD *)(v2 + 0x28) = 0;
    *(_DWORD *)(v2 + 0x24) = v9;
    return 0;
  }
}
