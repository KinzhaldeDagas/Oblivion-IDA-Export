unsigned int __stdcall sub_9A28A0(int a1, int a2, int a3, int a4, char a5, char a6)
{
  unsigned int result; // eax
  char v7; // al
  float v8[16]; // [esp+0h] [ebp-40h] BYREF

  if ( a3 == 7 )
  {
LABEL_18:
    switch ( a4 ) /*0x9a2aae*/
    {
      case 3: /*0x9a2aae*/
      case 4: /*0x9a2aae*/
        unk_BAAA60 = unk_BAAA70[0] * unk_BAAA80; /*0x9a2b0d*/
        unk_BAAA64 = unk_BAAA74[0] * unk_BAAA80; /*0x9a2b1b*/
        unk_BAAA68 = unk_BAAA78[0] * unk_BAAA80; /*0x9a2b29*/
        unk_BAAA6C = unk_BAAA80 * unk_BAAA7C; /*0x9a2b35*/
        v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &unk_BAAA60, 0); /*0x9a2b3b*/
        goto LABEL_11; /*0x9a2b3b*/
      case 7: /*0x9a2aae*/
      case 0xA: /*0x9a2aae*/
        unk_BAAA60 = unk_BAAA70[0] * unk_BAAA80; /*0x9a2b4c*/
        unk_BAAA64 = unk_BAAA84 * unk_BAAA74[0]; /*0x9a2b5e*/
        unk_BAAA68 = unk_BAAA88 * unk_BAAA78[0]; /*0x9a2b70*/
        unk_BAAA6C = unk_BAAA8C * unk_BAAA7C; /*0x9a2b82*/
        break; /*0x9a2b88*/
      case 9: /*0x9a2aae*/
        D3DXVec4Transform_0((int)&unk_BAAA60, (int)unk_BAAA70, (int)&unk_BAAA20); /*0x9a2ac4*/
        break; /*0x9a2ac4*/
      default:
        return 1;
    }
    return (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &unk_BAAA60, 0) != 0
         ? 0
         : 0x80000050;
  }
  if ( a3 != 9 ) /*0x9a28b3*/
  {
    if ( a3 != 0xA ) /*0x9a28b8*/
      return 1; /*0x9a28c6*/
    goto LABEL_18; /*0x9a28b8*/
  }
  switch ( a4 )
  {
    case 3:
    case 4:
      v8[0] = unk_BAA9E0[0] * unk_BAAA80; /*0x9a2970*/
      v8[1] = unk_BAA9E4 * unk_BAAA80; /*0x9a297c*/
      v8[2] = unk_BAA9E8 * unk_BAAA80; /*0x9a2988*/
      v8[3] = unk_BAA9EC * unk_BAAA80; /*0x9a2994*/
      v8[4] = unk_BAA9F0 * unk_BAAA80; /*0x9a29a0*/
      v8[5] = unk_BAA9F4 * unk_BAAA80; /*0x9a29ac*/
      v8[6] = unk_BAA9F8 * unk_BAAA80; /*0x9a29b8*/
      v8[7] = unk_BAA9FC * unk_BAAA80; /*0x9a29c4*/
      v8[8] = unk_BAAA00 * unk_BAAA80; /*0x9a29d0*/
      v8[9] = unk_BAAA04 * unk_BAAA80; /*0x9a29dc*/
      v8[0xA] = unk_BAAA08 * unk_BAAA80; /*0x9a29e8*/
      v8[0xB] = unk_BAAA0C * unk_BAAA80; /*0x9a29f4*/
      v8[0xC] = unk_BAAA10 * unk_BAAA80; /*0x9a2a00*/
      v8[0xD] = unk_BAAA14 * unk_BAAA80; /*0x9a2a0c*/
      v8[0xE] = unk_BAAA18 * unk_BAAA80; /*0x9a2a18*/
      v8[0xF] = unk_BAAA80 * unk_BAAA1C; /*0x9a2a22*/
      qmemcpy(&unk_BAA950, v8, 0x40u); /*0x9a2a26*/
      if ( a5 ) /*0x9a2a2a*/
        D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950); /*0x9a2a38*/
      if ( a6 ) /*0x9a2a42*/
        D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950); /*0x9a2a4e*/
      return (*(unsigned __int8 (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x30))(
               a1,
               a2,
               &unk_BAA950,
               0) != 0
           ? 0
           : 0x80000050;
    case 7:
    case 0xA:
      D3DXVec4Transform_0((int)&unk_BAAA60, (int)&unk_BAAA80, (int)unk_BAA9E0); /*0x9a2a8d*/
      v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &unk_BAAA60, 0); /*0x9a2a99*/
      goto LABEL_11; /*0x9a2a99*/
    case 9:
      D3DXMatrixMultiply_0((int)&unk_BAA950, (int)unk_BAA9E0, (int)&unk_BAAA20); /*0x9a28eb*/
      if ( a5 ) /*0x9a28f5*/
        D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950); /*0x9a2903*/
      if ( a6 ) /*0x9a290d*/
        D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950); /*0x9a2919*/
      v7 = (*(int (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &unk_BAA950, 0); /*0x9a2933*/
LABEL_11:
      result = v7 != 0 ? 0 : 0x80000050;
      break; /*0x9a2946*/
    default:
      return 1;
  }
  return result; /*0x9a28c3*/
}
