unsigned int __stdcall sub_9A2BD0(int a1, int a2, int a3, int a4, float a5, char a6)
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
        v10 = 1.0 / unk_BAAA80; /*0x9a2d80*/
        unk_BAAA60 = unk_BAAA70[0] * v10; /*0x9a2d94*/
        unk_BAAA64 = unk_BAAA74[0] * v10; /*0x9a2da2*/
        unk_BAAA68 = unk_BAAA78[0] * v10; /*0x9a2db0*/
        unk_BAAA6C = v10 * unk_BAAA7C; /*0x9a2dbc*/
        result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(
                   a1,
                   a2,
                   &unk_BAAA60,
                   0) != 0
               ? 0
               : 0x80000050;
        break; /*0x9a2dda*/
      case 7:
      case 0xA:
        unk_BAAA60 = unk_BAAA70[0] / unk_BAAA80; /*0x9a2df0*/
        unk_BAAA64 = unk_BAAA74[0] / unk_BAAA84; /*0x9a2e02*/
        unk_BAAA68 = unk_BAAA78[0] / unk_BAAA88; /*0x9a2e14*/
        unk_BAAA6C = unk_BAAA7C / unk_BAAA8C; /*0x9a2e26*/
        v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &unk_BAAA60, 0); /*0x9a2e2c*/
        return v7 != 0 ? 0 : 0x80000050;
      default:
        return 1;
    }
    return result; /*0x9a2dda*/
  }
  if ( a3 != 9 ) /*0x9a2be3*/
  {
    if ( a3 != 0xA ) /*0x9a2be8*/
      return 1; /*0x9a2bf6*/
    goto LABEL_13; /*0x9a2be8*/
  }
  if ( a4 < 3 || a4 > 4 ) /*0x9a2c05*/
    return 1; /*0x9a2c05*/
  v9 = 1.0 / unk_BAAA80; /*0x9a2c26*/
  v8[0] = unk_BAA9E0[0] * v9; /*0x9a2c3a*/
  v8[1] = unk_BAA9E4 * v9; /*0x9a2c46*/
  v8[2] = unk_BAA9E8 * v9; /*0x9a2c52*/
  v8[3] = unk_BAA9EC * v9; /*0x9a2c5e*/
  v8[4] = unk_BAA9F0 * v9; /*0x9a2c6a*/
  v8[5] = unk_BAA9F4 * v9; /*0x9a2c76*/
  v8[6] = unk_BAA9F8 * v9; /*0x9a2c82*/
  v8[7] = unk_BAA9FC * v9; /*0x9a2c8e*/
  v8[8] = unk_BAAA00 * v9; /*0x9a2c9a*/
  v8[9] = unk_BAAA04 * v9; /*0x9a2ca6*/
  v8[0xA] = unk_BAAA08 * v9; /*0x9a2cb2*/
  v8[0xB] = unk_BAAA0C * v9; /*0x9a2cbe*/
  v8[0xC] = unk_BAAA10 * v9; /*0x9a2cca*/
  v8[0xD] = unk_BAAA14 * v9; /*0x9a2cd6*/
  v8[0xE] = unk_BAAA18 * v9; /*0x9a2ce2*/
  v8[0xF] = v9 * unk_BAAA1C; /*0x9a2cec*/
  qmemcpy(&unk_BAA950, v8, 0x40u); /*0x9a2cf0*/
  if ( LOBYTE(a5) ) /*0x9a2cf4*/
    D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950); /*0x9a2d02*/
  if ( a6 ) /*0x9a2d0c*/
    D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950); /*0x9a2d18*/
  v7 = (*(int (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, &unk_BAA950, 0); /*0x9a2d32*/
  return v7 != 0 ? 0 : 0x80000050;
}
