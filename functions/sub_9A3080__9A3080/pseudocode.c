unsigned int __stdcall sub_9A3080(int a1, int a2, int a3, int a4, int a5, int a6)
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
      switch ( a4 ) /*0x9a30b8*/
      {
        case 3: /*0x9a30b8*/
        case 4: /*0x9a30b8*/
          v8 = unk_BAAA70[0] - unk_BAAA80; /*0x9a30cb*/
          unk_BAAA60 = v8; /*0x9a30d7*/
          v9 = unk_BAAA74[0] - unk_BAAA84; /*0x9a30e3*/
          unk_BAAA64 = v9; /*0x9a30f1*/
          v10 = unk_BAAA78[0] - unk_BAAA88; /*0x9a30fc*/
          unk_BAAA68 = v10; /*0x9a310a*/
          v11 = unk_BAAA7C - unk_BAAA8C; /*0x9a3116*/
          unk_BAAA6C = v11; /*0x9a311e*/
          goto LABEL_4; /*0x9a311e*/
        case 7: /*0x9a30b8*/
        case 0xA: /*0x9a30b8*/
          unk_BAAA60 = unk_BAAA70[0] - unk_BAAA80; /*0x9a315d*/
          unk_BAAA64 = unk_BAAA70[0] - unk_BAAA84; /*0x9a316b*/
          unk_BAAA68 = unk_BAAA70[0] - unk_BAAA88; /*0x9a3179*/
          v7 = unk_BAAA70[0] - unk_BAAA8C; /*0x9a317f*/
          goto LABEL_6; /*0x9a317f*/
        default:
          goto LABEL_10;
      }
    case 7:
    case 0xA:
      switch ( a4 )
      {
        case 3:
        case 4:
          unk_BAAA60 = unk_BAAA70[0] - unk_BAAA80; /*0x9a31e6*/
          unk_BAAA64 = unk_BAAA74[0] - unk_BAAA80; /*0x9a31f4*/
          unk_BAAA68 = unk_BAAA78[0] - unk_BAAA80; /*0x9a3202*/
          v7 = unk_BAAA7C - unk_BAAA80; /*0x9a3208*/
LABEL_6:
          unk_BAAA6C = v7; /*0x9a3185*/
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a31b3*/
        case 7:
        case 0xA:
          unk_BAAA60 = unk_BAAA70[0] - unk_BAAA80; /*0x9a321f*/
          unk_BAAA64 = unk_BAAA74[0] - unk_BAAA84; /*0x9a3231*/
          unk_BAAA68 = unk_BAAA78[0] - unk_BAAA88; /*0x9a3243*/
          unk_BAAA6C = unk_BAAA7C - unk_BAAA8C; /*0x9a3255*/
LABEL_4:
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(
                     a1,
                     a2,
                     &unk_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break; /*0x9a314c*/
        default:
          goto LABEL_10;
      }
      break; /*0x9a314c*/
    default:
LABEL_10:
      result = 1; /*0x9a3260*/
      break; /*0x9a3260*/
  }
  return result; /*0x9a3149*/
}
