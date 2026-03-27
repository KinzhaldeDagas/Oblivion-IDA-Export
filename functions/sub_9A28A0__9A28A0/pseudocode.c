unsigned int __stdcall sub_9A28A0(int a1, int a2, int a3, int a4, char a5, char a6)
{
  unsigned int result; // eax
  char v7; // al
  float v8[16]; // [esp+0h] [ebp-40h] BYREF

  if ( a3 == 7 )
  {
LABEL_18:
    switch ( a4 )
    {
      case 3:
      case 4:
        flt_BAAA60 = flt_BAAA70[0] * flt_BAAA80;
        flt_BAAA64 = flt_BAAA74[0] * flt_BAAA80;
        flt_BAAA68 = flt_BAAA78[0] * flt_BAAA80;
        flt_BAAA6C = flt_BAAA80 * flt_BAAA7C;
        v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &flt_BAAA60, 0);
        goto LABEL_11;
      case 7:
      case 0xA:
        flt_BAAA60 = flt_BAAA70[0] * flt_BAAA80;
        flt_BAAA64 = flt_BAAA84 * flt_BAAA74[0];
        flt_BAAA68 = flt_BAAA88 * flt_BAAA78[0];
        flt_BAAA6C = flt_BAAA8C * flt_BAAA7C;
        break;
      case 9:
        D3DXVec4Transform_0(&flt_BAAA60, flt_BAAA70, &unk_BAAA20);
        break;
      default:
        return 1;
    }
    return (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &flt_BAAA60, 0) != 0
         ? 0
         : 0x80000050;
  }
  if ( a3 != 9 )
  {
    if ( a3 != 0xA )
      return 1;
    goto LABEL_18;
  }
  switch ( a4 )
  {
    case 3:
    case 4:
      v8[0] = flt_BAA9E0[0] * flt_BAAA80;
      v8[1] = flt_BAA9E4 * flt_BAAA80;
      v8[2] = flt_BAA9E8 * flt_BAAA80;
      v8[3] = flt_BAA9EC * flt_BAAA80;
      v8[4] = flt_BAA9F0 * flt_BAAA80;
      v8[5] = flt_BAA9F4 * flt_BAAA80;
      v8[6] = flt_BAA9F8 * flt_BAAA80;
      v8[7] = flt_BAA9FC * flt_BAAA80;
      v8[8] = flt_BAAA00 * flt_BAAA80;
      v8[9] = flt_BAAA04 * flt_BAAA80;
      v8[0xA] = flt_BAAA08 * flt_BAAA80;
      v8[0xB] = flt_BAAA0C * flt_BAAA80;
      v8[0xC] = flt_BAAA10 * flt_BAAA80;
      v8[0xD] = flt_BAAA14 * flt_BAAA80;
      v8[0xE] = flt_BAAA18 * flt_BAAA80;
      v8[0xF] = flt_BAAA80 * flt_BAAA1C;
      qmemcpy(&unk_BAA950, v8, 0x40u);
      if ( a5 )
        D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950);
      if ( a6 )
        D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950);
      return (*(unsigned __int8 (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x30))(
               a1,
               a2,
               &unk_BAA950,
               0) != 0
           ? 0
           : 0x80000050;
    case 7:
    case 0xA:
      D3DXVec4Transform_0(&flt_BAAA60, &flt_BAAA80, flt_BAA9E0);
      v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &flt_BAAA60, 0);
      goto LABEL_11;
    case 9:
      D3DXMatrixMultiply_0((int)&unk_BAA950, (int)flt_BAA9E0, (int)&unk_BAAA20);
      if ( a5 )
        D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950);
      if ( a6 )
        D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950);
      v7 = (*(int (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &unk_BAA950, 0);
LABEL_11:
      result = v7 != 0 ? 0 : 0x80000050;
      break;
    default:
      return 1;
  }
  return result;
}
