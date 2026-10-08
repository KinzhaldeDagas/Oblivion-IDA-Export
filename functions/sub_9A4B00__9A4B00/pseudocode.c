unsigned int __stdcall sub_9A4B00(int a1, int a2, int a3, int a4, char a5, char a6)
{
  unsigned int result; // eax
  char v7; // al
  float v8[16]; // [esp+0h] [ebp-40h] BYREF

  if ( a3 == 7 )
  {
LABEL_18:
    switch ( a4 ) /*0x9a4d0e*/
    {
      case 3: /*0x9a4d0e*/
      case 4: /*0x9a4d0e*/
        unk_BAAA60 = unk_BAAA70[0] * unk_BAAA80; /*0x9a4d6d*/
        unk_BAAA64 = unk_BAAA74[0] * unk_BAAA80; /*0x9a4d7b*/
        unk_BAAA68 = unk_BAAA78[0] * unk_BAAA80; /*0x9a4d89*/
        unk_BAAA6C = unk_BAAA80 * unk_BAAA7C; /*0x9a4d95*/
        v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &unk_BAAA60, 0); /*0x9a4d9b*/
        goto LABEL_11; /*0x9a4d9b*/
      case 7: /*0x9a4d0e*/
      case 0xA: /*0x9a4d0e*/
        unk_BAAA60 = unk_BAAA70[0] * unk_BAAA80; /*0x9a4dac*/
        unk_BAAA64 = unk_BAAA84 * unk_BAAA74[0]; /*0x9a4dbe*/
        unk_BAAA68 = unk_BAAA88 * unk_BAAA78[0]; /*0x9a4dd0*/
        unk_BAAA6C = unk_BAAA8C * unk_BAAA7C; /*0x9a4de2*/
        break; /*0x9a4de8*/
      case 9: /*0x9a4d0e*/
        D3DXVec4Transform_0((int)&unk_BAAA60, (int)unk_BAAA70, (int)&unk_BAAA20); /*0x9a4d24*/
        break; /*0x9a4d24*/
      default:
        return 1;
    }
    return (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &unk_BAAA60, 0) != 0
         ? 0
         : 0x80000050;
  }
  if ( a3 != 9 ) /*0x9a4b13*/
  {
    if ( a3 != 0xA ) /*0x9a4b18*/
      return 1; /*0x9a4b26*/
    goto LABEL_18; /*0x9a4b18*/
  }
  switch ( a4 )
  {
    case 3:
    case 4:
      v8[0] = unk_BAA9E0[0] * unk_BAAA80; /*0x9a4bd0*/
      v8[1] = unk_BAA9E4 * unk_BAAA80; /*0x9a4bdc*/
      v8[2] = unk_BAA9E8 * unk_BAAA80; /*0x9a4be8*/
      v8[3] = unk_BAA9EC * unk_BAAA80; /*0x9a4bf4*/
      v8[4] = unk_BAA9F0 * unk_BAAA80; /*0x9a4c00*/
      v8[5] = unk_BAA9F4 * unk_BAAA80; /*0x9a4c0c*/
      v8[6] = unk_BAA9F8 * unk_BAAA80; /*0x9a4c18*/
      v8[7] = unk_BAA9FC * unk_BAAA80; /*0x9a4c24*/
      v8[8] = unk_BAAA00 * unk_BAAA80; /*0x9a4c30*/
      v8[9] = unk_BAAA04 * unk_BAAA80; /*0x9a4c3c*/
      v8[0xA] = unk_BAAA08 * unk_BAAA80; /*0x9a4c48*/
      v8[0xB] = unk_BAAA0C * unk_BAAA80; /*0x9a4c54*/
      v8[0xC] = unk_BAAA10 * unk_BAAA80; /*0x9a4c60*/
      v8[0xD] = unk_BAAA14 * unk_BAAA80; /*0x9a4c6c*/
      v8[0xE] = unk_BAAA18 * unk_BAAA80; /*0x9a4c78*/
      v8[0xF] = unk_BAAA80 * unk_BAAA1C; /*0x9a4c82*/
      qmemcpy(&unk_BAA950, v8, 0x40u); /*0x9a4c86*/
      if ( a5 ) /*0x9a4c8a*/
        D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950); /*0x9a4c98*/
      if ( a6 ) /*0x9a4ca2*/
        D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950); /*0x9a4cae*/
      return (*(unsigned __int8 (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x28))(
               a1,
               a2,
               &unk_BAA950,
               0) != 0
           ? 0
           : 0x80000050;
    case 7:
    case 0xA:
      D3DXVec4Transform_0((int)&unk_BAAA60, (int)&unk_BAAA80, (int)unk_BAA9E0); /*0x9a4ced*/
      v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &unk_BAAA60, 0); /*0x9a4cf9*/
      goto LABEL_11; /*0x9a4cf9*/
    case 9:
      D3DXMatrixMultiply_0((int)&unk_BAA950, (int)unk_BAA9E0, (int)&unk_BAAA20); /*0x9a4b4b*/
      if ( a5 ) /*0x9a4b55*/
        D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950); /*0x9a4b63*/
      if ( a6 ) /*0x9a4b6d*/
        D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950); /*0x9a4b79*/
      v7 = (*(int (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &unk_BAA950, 0); /*0x9a4b93*/
LABEL_11:
      result = v7 != 0 ? 0 : 0x80000050;
      break; /*0x9a4ba6*/
    default:
      return 1;
  }
  return result; /*0x9a4b23*/
}
