unsigned int __stdcall sub_9A2E50(int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int result; // eax
  double v7; // st7
  float v8; // [esp+0h] [ebp-10h]
  float v9; // [esp+4h] [ebp-Ch]
  float v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+Ch] [ebp-4h]

  switch ( a3 )
  {
    case 3:
    case 4:
      switch ( a4 ) /*0x9a2e88*/
      {
        case 3: /*0x9a2e88*/
        case 4: /*0x9a2e88*/
          v8 = unk_BAAA70[0] + unk_BAAA80; /*0x9a2e9b*/
          unk_BAAA60 = v8; /*0x9a2ea7*/
          v9 = unk_BAAA74[0] + unk_BAAA84; /*0x9a2eb3*/
          unk_BAAA64 = v9; /*0x9a2ec1*/
          v10 = unk_BAAA78[0] + unk_BAAA88; /*0x9a2ecc*/
          unk_BAAA68 = v10; /*0x9a2eda*/
          v11 = unk_BAAA7C + unk_BAAA8C; /*0x9a2ee6*/
          unk_BAAA6C = v11; /*0x9a2eee*/
          goto LABEL_4; /*0x9a2eee*/
        case 7: /*0x9a2e88*/
        case 0xA: /*0x9a2e88*/
          unk_BAAA60 = unk_BAAA70[0] + unk_BAAA80; /*0x9a2f2d*/
          unk_BAAA64 = unk_BAAA84 + unk_BAAA70[0]; /*0x9a2f3b*/
          unk_BAAA68 = unk_BAAA88 + unk_BAAA70[0]; /*0x9a2f49*/
          v7 = unk_BAAA70[0] + unk_BAAA8C; /*0x9a2f4f*/
          goto LABEL_6; /*0x9a2f4f*/
        default:
          goto LABEL_10;
      }
    case 7:
    case 0xA:
      switch ( a4 )
      {
        case 3:
        case 4:
          unk_BAAA60 = unk_BAAA70[0] + unk_BAAA80; /*0x9a2fb6*/
          unk_BAAA64 = unk_BAAA74[0] + unk_BAAA80; /*0x9a2fc4*/
          unk_BAAA68 = unk_BAAA78[0] + unk_BAAA80; /*0x9a2fd2*/
          v7 = unk_BAAA80 + unk_BAAA7C; /*0x9a2fd8*/
LABEL_6:
          unk_BAAA6C = v7; /*0x9a2f55*/
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a2f83*/
        case 7:
        case 0xA:
          unk_BAAA60 = unk_BAAA70[0] + unk_BAAA80; /*0x9a2fef*/
          unk_BAAA64 = unk_BAAA74[0] + unk_BAAA84; /*0x9a3001*/
          unk_BAAA68 = unk_BAAA78[0] + unk_BAAA88; /*0x9a3013*/
          unk_BAAA6C = unk_BAAA7C + unk_BAAA8C; /*0x9a3025*/
LABEL_4:
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a2f1c*/
        default:
          goto LABEL_10;
      }
      break; /*0x9a2f1c*/
    default:
LABEL_10:
      result = 1; /*0x9a3030*/
      break; /*0x9a3030*/
  }
  return result; /*0x9a2f19*/
}
