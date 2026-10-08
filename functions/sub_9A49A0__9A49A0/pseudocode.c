unsigned int __stdcall sub_9A49A0(int a1)
{
  int v1; // esi
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  char *v6; // [esp-Ch] [ebp-14h]
  int v7; // [esp+4h] [ebp-4h] BYREF

  v1 = a1; /*0x9a49a2*/
  v6 = *(char **)(a1 + 0xC); /*0x9a49b3*/
  v7 = 4; /*0x9a49b4*/
  if ( !sub_9A47E0(v6, (unsigned __int8 **)&a1, (int)&v7) ) /*0x9a49bc*/
    return 0x80000040; /*0x9a49c8*/
  *(_DWORD *)(v1 + 0x14) = *(_DWORD *)(v1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)unk_B4294C[sub_9A48B0(a1, v7)]; /*0x9a49fb*/
  if ( !v4 ) /*0x9a49fe*/
    return 0x80000040; /*0x9a4ab2*/
  if ( v4 < 0x45 ) /*0x9a4a07*/
  {
    switch ( v4 ) /*0x9a4a11*/
    {
      case 0x21u: /*0x9a4a11*/
      case 0x23u: /*0x9a4a11*/
        *(_DWORD *)(v1 + 0x20) = 3 * *(unsigned __int16 *)(v1 + 0x1A); /*0x9a4a67*/
        break;
      case 0x22u: /*0x9a4a11*/
      case 0x24u: /*0x9a4a11*/
        *(_DWORD *)(v1 + 0x20) = 4 * *(unsigned __int16 *)(v1 + 0x1A); /*0x9a4a5b*/
        break;
      case 0x19u: /*0x9a4a11*/
      case 0x1Au: /*0x9a4a11*/
      case 0x1Bu: /*0x9a4a11*/
      case 0x1Cu: /*0x9a4a11*/
      case 0x1Du: /*0x9a4a11*/
      case 0x1Eu: /*0x9a4a11*/
      case 0x1Fu: /*0x9a4a11*/
      case 0x20u: /*0x9a4a11*/
        *(_DWORD *)(v1 + 0x20) = 4; /*0x9a4a4a*/
        break;
      default:
        *(_DWORD *)(v1 + 0x20) = v3; /*0x9a4a45*/
        break;
    }
  }
  *(_DWORD *)(v1 + 0x10) = v4; /*0x9a4a6a*/
  v5 = v4 - 0x50; /*0x9a4a6d*/
  if ( v5 ) /*0x9a4a70*/
  {
    if ( v5 == 1 ) /*0x9a4a75*/
    {
      *(_DWORD *)(v1 + 0x28) = 0x10; /*0x9a4a7c*/
      *(_DWORD *)(v1 + 0x2C) = 0x10; /*0x9a4a7f*/
      *(_BYTE *)(v1 + 0x34) = 0; /*0x9a4a82*/
      *(_DWORD *)(v1 + 0x30) = &unk_B329D4; /*0x9a4a85*/
    }
    return 0; /*0x9a4a8d*/
  }
  else
  {
    *(_BYTE *)(v1 + 0x34) = 0; /*0x9a4a99*/
    *(_DWORD *)(v1 + 0x28) = 0x10; /*0x9a4a9c*/
    *(_DWORD *)(v1 + 0x2C) = 0x10; /*0x9a4a9f*/
    *(_DWORD *)(v1 + 0x30) = &unk_B329C4; /*0x9a4aa3*/
    return 0; /*0x9a4aaa*/
  }
}
