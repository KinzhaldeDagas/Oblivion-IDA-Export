unsigned int __stdcall sub_9A50B0(int a1, int a2, int a3, int a4, int a5, int a6)
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
      switch ( a4 ) /*0x9a50e8*/
      {
        case 3: /*0x9a50e8*/
        case 4: /*0x9a50e8*/
          v8 = unk_BAAA70[0] + unk_BAAA80; /*0x9a50fb*/
          unk_BAAA60 = v8; /*0x9a5107*/
          v9 = unk_BAAA74[0] + unk_BAAA84; /*0x9a5113*/
          unk_BAAA64 = v9; /*0x9a5121*/
          v10 = unk_BAAA78[0] + unk_BAAA88; /*0x9a512c*/
          unk_BAAA68 = v10; /*0x9a513a*/
          v11 = unk_BAAA7C + unk_BAAA8C; /*0x9a5146*/
          unk_BAAA6C = v11; /*0x9a514e*/
          goto LABEL_4; /*0x9a514e*/
        case 7: /*0x9a50e8*/
        case 0xA: /*0x9a50e8*/
          unk_BAAA60 = unk_BAAA70[0] + unk_BAAA80; /*0x9a518d*/
          unk_BAAA64 = unk_BAAA84 + unk_BAAA70[0]; /*0x9a519b*/
          unk_BAAA68 = unk_BAAA88 + unk_BAAA70[0]; /*0x9a51a9*/
          v7 = unk_BAAA70[0] + unk_BAAA8C; /*0x9a51af*/
          goto LABEL_6; /*0x9a51af*/
        default:
          goto LABEL_10;
      }
    case 7:
    case 0xA:
      switch ( a4 )
      {
        case 3:
        case 4:
          unk_BAAA60 = unk_BAAA70[0] + unk_BAAA80; /*0x9a5216*/
          unk_BAAA64 = unk_BAAA74[0] + unk_BAAA80; /*0x9a5224*/
          unk_BAAA68 = unk_BAAA78[0] + unk_BAAA80; /*0x9a5232*/
          v7 = unk_BAAA80 + unk_BAAA7C; /*0x9a5238*/
LABEL_6:
          unk_BAAA6C = v7; /*0x9a51b5*/
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a51e3*/
        case 7:
        case 0xA:
          unk_BAAA60 = unk_BAAA70[0] + unk_BAAA80; /*0x9a524f*/
          unk_BAAA64 = unk_BAAA74[0] + unk_BAAA84; /*0x9a5261*/
          unk_BAAA68 = unk_BAAA78[0] + unk_BAAA88; /*0x9a5273*/
          unk_BAAA6C = unk_BAAA7C + unk_BAAA8C; /*0x9a5285*/
LABEL_4:
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a517c*/
        default:
          goto LABEL_10;
      }
      break; /*0x9a517c*/
    default:
LABEL_10:
      result = 1; /*0x9a5290*/
      break; /*0x9a5290*/
  }
  return result; /*0x9a5179*/
}
