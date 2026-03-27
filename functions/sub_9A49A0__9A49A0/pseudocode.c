unsigned int __stdcall sub_9A49A0(int a1)
{
  int v1; // esi
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  char *v6; // [esp-Ch] [ebp-14h]
  int v7; // [esp+4h] [ebp-4h] BYREF

  v1 = a1;
  v6 = *(char **)(a1 + 0xC);
  v7 = 4;
  if ( !sub_9A47E0(v6, (unsigned __int8 **)&a1, (int)&v7) )
    return 0x80000040;
  *(_DWORD *)(v1 + 0x14) = *(_DWORD *)(v1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)byte_B4294C[sub_9A48B0(a1, v7)];
  if ( !v4 )
    return 0x80000040;
  if ( v4 < 0x45 )
  {
    switch ( v4 )
    {
      case 0x21u:
      case 0x23u:
        *(_DWORD *)(v1 + 0x20) = 3 * *(unsigned __int16 *)(v1 + 0x1A);
        break;
      case 0x22u:
      case 0x24u:
        *(_DWORD *)(v1 + 0x20) = 4 * *(unsigned __int16 *)(v1 + 0x1A);
        break;
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
        *(_DWORD *)(v1 + 0x20) = 4;
        break;
      default:
        *(_DWORD *)(v1 + 0x20) = v3;
        break;
    }
  }
  *(_DWORD *)(v1 + 0x10) = v4;
  v5 = v4 - 0x50;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      *(_DWORD *)(v1 + 0x28) = 0x10;
      *(_DWORD *)(v1 + 0x2C) = 0x10;
      *(_BYTE *)(v1 + 0x34) = 0;
      *(_DWORD *)(v1 + 0x30) = &unk_B329D4;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)(v1 + 0x34) = 0;
    *(_DWORD *)(v1 + 0x28) = 0x10;
    *(_DWORD *)(v1 + 0x2C) = 0x10;
    *(_DWORD *)(v1 + 0x30) = &unk_B329C4;
    return 0;
  }
}
