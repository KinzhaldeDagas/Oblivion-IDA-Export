unsigned int __stdcall sub_9A4E30(int a1, int a2, int a3, int a4, float a5, char a6)
{
  unsigned int result; // eax
  char v7; // al
  float v8[16]; // [esp+0h] [ebp-40h] BYREF
  float v9; // [esp+50h] [ebp+10h]
  float v10; // [esp+54h] [ebp+14h]

  if ( a3 == 7 )
  {
LABEL_13:
    switch ( a4 )
    {
      case 3:
      case 4:
        v10 = 1.0 / flt_BAAA80;
        flt_BAAA60 = flt_BAAA70[0] * v10;
        flt_BAAA64 = flt_BAAA74[0] * v10;
        flt_BAAA68 = flt_BAAA78[0] * v10;
        flt_BAAA6C = v10 * flt_BAAA7C;
        result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(
                   a1,
                   a2,
                   &flt_BAAA60,
                   0) != 0
               ? 0
               : 0x80000050;
        break;
      case 7:
      case 0xA:
        flt_BAAA60 = flt_BAAA70[0] / flt_BAAA80;
        flt_BAAA64 = flt_BAAA74[0] / flt_BAAA84;
        flt_BAAA68 = flt_BAAA78[0] / flt_BAAA88;
        flt_BAAA6C = flt_BAAA7C / flt_BAAA8C;
        v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &flt_BAAA60, 0);
        return v7 != 0 ? 0 : 0x80000050;
      default:
        return 1;
    }
    return result;
  }
  if ( a3 != 9 )
  {
    if ( a3 != 0xA )
      return 1;
    goto LABEL_13;
  }
  if ( a4 < 3 || a4 > 4 )
    return 1;
  v9 = 1.0 / flt_BAAA80;
  v8[0] = flt_BAA9E0[0] * v9;
  v8[1] = flt_BAA9E4 * v9;
  v8[2] = flt_BAA9E8 * v9;
  v8[3] = flt_BAA9EC * v9;
  v8[4] = flt_BAA9F0 * v9;
  v8[5] = flt_BAA9F4 * v9;
  v8[6] = flt_BAA9F8 * v9;
  v8[7] = flt_BAA9FC * v9;
  v8[8] = flt_BAAA00 * v9;
  v8[9] = flt_BAAA04 * v9;
  v8[0xA] = flt_BAAA08 * v9;
  v8[0xB] = flt_BAAA0C * v9;
  v8[0xC] = flt_BAAA10 * v9;
  v8[0xD] = flt_BAAA14 * v9;
  v8[0xE] = flt_BAAA18 * v9;
  v8[0xF] = v9 * flt_BAAA1C;
  qmemcpy(&unk_BAA950, v8, 0x40u);
  if ( LOBYTE(a5) )
    D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950);
  if ( a6 )
    D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950);
  v7 = (*(int (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &unk_BAA950, 0);
  return v7 != 0 ? 0 : 0x80000050;
}
