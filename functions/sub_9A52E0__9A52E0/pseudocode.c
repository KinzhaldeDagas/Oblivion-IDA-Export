unsigned int __stdcall sub_9A52E0(int a1, int a2, int a3, int a4, int a5, int a6)
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
      switch ( a4 ) /*0x9a5318*/
      {
        case 3: /*0x9a5318*/
        case 4: /*0x9a5318*/
          v8 = unk_BAAA70[0] - unk_BAAA80; /*0x9a532b*/
          unk_BAAA60 = v8; /*0x9a5337*/
          v9 = unk_BAAA74[0] - unk_BAAA84; /*0x9a5343*/
          unk_BAAA64 = v9; /*0x9a5351*/
          v10 = unk_BAAA78[0] - unk_BAAA88; /*0x9a535c*/
          unk_BAAA68 = v10; /*0x9a536a*/
          v11 = unk_BAAA7C - unk_BAAA8C; /*0x9a5376*/
          unk_BAAA6C = v11; /*0x9a537e*/
          goto LABEL_4; /*0x9a537e*/
        case 7: /*0x9a5318*/
        case 0xA: /*0x9a5318*/
          unk_BAAA60 = unk_BAAA70[0] - unk_BAAA80; /*0x9a53bd*/
          unk_BAAA64 = unk_BAAA70[0] - unk_BAAA84; /*0x9a53cb*/
          unk_BAAA68 = unk_BAAA70[0] - unk_BAAA88; /*0x9a53d9*/
          v7 = unk_BAAA70[0] - unk_BAAA8C; /*0x9a53df*/
          goto LABEL_6; /*0x9a53df*/
        default:
          goto LABEL_10;
      }
    case 7:
    case 0xA:
      switch ( a4 )
      {
        case 3:
        case 4:
          unk_BAAA60 = unk_BAAA70[0] - unk_BAAA80; /*0x9a5446*/
          unk_BAAA64 = unk_BAAA74[0] - unk_BAAA80; /*0x9a5454*/
          unk_BAAA68 = unk_BAAA78[0] - unk_BAAA80; /*0x9a5462*/
          v7 = unk_BAAA7C - unk_BAAA80; /*0x9a5468*/
LABEL_6:
          unk_BAAA6C = v7; /*0x9a53e5*/
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a5413*/
        case 7:
        case 0xA:
          unk_BAAA60 = unk_BAAA70[0] - unk_BAAA80; /*0x9a547f*/
          unk_BAAA64 = unk_BAAA74[0] - unk_BAAA84; /*0x9a5491*/
          unk_BAAA68 = unk_BAAA78[0] - unk_BAAA88; /*0x9a54a3*/
          unk_BAAA6C = unk_BAAA7C - unk_BAAA8C; /*0x9a54b5*/
LABEL_4:
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a53ac*/
        default:
          goto LABEL_10;
      }
      break; /*0x9a53ac*/
    default:
LABEL_10:
      result = 1; /*0x9a54c0*/
      break; /*0x9a54c0*/
  }
  return result; /*0x9a53a9*/
}
