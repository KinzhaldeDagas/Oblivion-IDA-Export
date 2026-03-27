unsigned int __stdcall sub_9A26F0(int a1)
{
  char *v1; // eax
  int v2; // ecx
  char *v3; // eax

  v1 = sub_9A2640(*(char **)(a1 + 0xC));
  if ( !v1 )
    return 0x80000040;
  *(_DWORD *)(a1 + 0x10) = v1;
  if ( (unsigned int)(v1 + 0xFFFFFFFF) > 0xB )
    v2 = 0;
  else
    v2 = 7;
  v3 = v1 + 0xFFFFFFFF;
  *(_DWORD *)(a1 + 0x14) = *(_DWORD *)(a1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)byte_B4294C[v2];
  if ( v3 )
  {
    if ( v3 == (char *)1 )
    {
      *(_DWORD *)(a1 + 0x28) = 0x10;
      *(_DWORD *)(a1 + 0x2C) = 0x10;
      *(_BYTE *)(a1 + 0x34) = 0;
      *(_DWORD *)(a1 + 0x30) = &unk_B329D4;
    }
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 0x28) = 0x10;
    *(_DWORD *)(a1 + 0x2C) = 0x10;
    *(_BYTE *)(a1 + 0x34) = 0;
    *(_DWORD *)(a1 + 0x30) = &unk_B329C4;
    return 0;
  }
}
