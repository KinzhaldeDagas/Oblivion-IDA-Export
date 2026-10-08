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
        v10 = 1.0 / unk_BAAA80; /*0x9a4fe0*/
        unk_BAAA60 = unk_BAAA70[0] * v10; /*0x9a4ff4*/
        unk_BAAA64 = unk_BAAA74[0] * v10; /*0x9a5002*/
        unk_BAAA68 = unk_BAAA78[0] * v10; /*0x9a5010*/
        unk_BAAA6C = v10 * unk_BAAA7C; /*0x9a501c*/
        result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(
                   a1,
                   a2,
                   &unk_BAAA60,
                   0) != 0
               ? 0
               : 0x80000050;
        break; /*0x9a503a*/
      case 7:
      case 0xA:
        unk_BAAA60 = unk_BAAA70[0] / unk_BAAA80; /*0x9a5050*/
        unk_BAAA64 = unk_BAAA74[0] / unk_BAAA84; /*0x9a5062*/
        unk_BAAA68 = unk_BAAA78[0] / unk_BAAA88; /*0x9a5074*/
        unk_BAAA6C = unk_BAAA7C / unk_BAAA8C; /*0x9a5086*/
        v7 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &unk_BAAA60, 0); /*0x9a508c*/
        return v7 != 0 ? 0 : 0x80000050;
      default:
        return 1;
    }
    return result; /*0x9a503a*/
  }
  if ( a3 != 9 ) /*0x9a4e43*/
  {
    if ( a3 != 0xA ) /*0x9a4e48*/
      return 1; /*0x9a4e56*/
    goto LABEL_13; /*0x9a4e48*/
  }
  if ( a4 < 3 || a4 > 4 ) /*0x9a4e65*/
    return 1; /*0x9a4e65*/
  v9 = 1.0 / unk_BAAA80; /*0x9a4e86*/
  v8[0] = unk_BAA9E0[0] * v9; /*0x9a4e9a*/
  v8[1] = unk_BAA9E4 * v9; /*0x9a4ea6*/
  v8[2] = unk_BAA9E8 * v9; /*0x9a4eb2*/
  v8[3] = unk_BAA9EC * v9; /*0x9a4ebe*/
  v8[4] = unk_BAA9F0 * v9; /*0x9a4eca*/
  v8[5] = unk_BAA9F4 * v9; /*0x9a4ed6*/
  v8[6] = unk_BAA9F8 * v9; /*0x9a4ee2*/
  v8[7] = unk_BAA9FC * v9; /*0x9a4eee*/
  v8[8] = unk_BAAA00 * v9; /*0x9a4efa*/
  v8[9] = unk_BAAA04 * v9; /*0x9a4f06*/
  v8[0xA] = unk_BAAA08 * v9; /*0x9a4f12*/
  v8[0xB] = unk_BAAA0C * v9; /*0x9a4f1e*/
  v8[0xC] = unk_BAAA10 * v9; /*0x9a4f2a*/
  v8[0xD] = unk_BAAA14 * v9; /*0x9a4f36*/
  v8[0xE] = unk_BAAA18 * v9; /*0x9a4f42*/
  v8[0xF] = v9 * unk_BAAA1C; /*0x9a4f4c*/
  qmemcpy(&unk_BAA950, v8, 0x40u); /*0x9a4f50*/
  if ( LOBYTE(a5) ) /*0x9a4f54*/
    D3DXMatrixInverse_0((int)&unk_BAA950, 0, (int)&unk_BAA950); /*0x9a4f62*/
  if ( a6 ) /*0x9a4f6c*/
    D3DXMatrixTranspose_0((int)&unk_BAA950, (int)&unk_BAA950); /*0x9a4f78*/
  v7 = (*(int (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, &unk_BAA950, 0); /*0x9a4f92*/
  return v7 != 0 ? 0 : 0x80000050;
}
