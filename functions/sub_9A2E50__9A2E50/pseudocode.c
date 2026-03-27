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
      switch ( a4 )
      {
        case 3:
        case 4:
          v8 = flt_BAAA70[0] + flt_BAAA80;
          flt_BAAA60 = v8;
          v9 = flt_BAAA74[0] + flt_BAAA84;
          flt_BAAA64 = v9;
          v10 = flt_BAAA78[0] + flt_BAAA88;
          flt_BAAA68 = v10;
          v11 = flt_BAAA7C + flt_BAAA8C;
          flt_BAAA6C = v11;
          goto LABEL_4;
        case 7:
        case 0xA:
          flt_BAAA60 = flt_BAAA70[0] + flt_BAAA80;
          flt_BAAA64 = flt_BAAA84 + flt_BAAA70[0];
          flt_BAAA68 = flt_BAAA88 + flt_BAAA70[0];
          v7 = flt_BAAA70[0] + flt_BAAA8C;
          goto LABEL_6;
        default:
          goto LABEL_10;
      }
    case 7:
    case 0xA:
      switch ( a4 )
      {
        case 3:
        case 4:
          flt_BAAA60 = flt_BAAA70[0] + flt_BAAA80;
          flt_BAAA64 = flt_BAAA74[0] + flt_BAAA80;
          flt_BAAA68 = flt_BAAA78[0] + flt_BAAA80;
          v7 = flt_BAAA80 + flt_BAAA7C;
LABEL_6:
          flt_BAAA6C = v7;
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(
                     a1,
                     a2,
                     &flt_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break;
        case 7:
        case 0xA:
          flt_BAAA60 = flt_BAAA70[0] + flt_BAAA80;
          flt_BAAA64 = flt_BAAA74[0] + flt_BAAA84;
          flt_BAAA68 = flt_BAAA78[0] + flt_BAAA88;
          flt_BAAA6C = flt_BAAA7C + flt_BAAA8C;
LABEL_4:
          result = (*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))(
                     a1,
                     a2,
                     &flt_BAAA60,
                     0) != 0
                 ? 0
                 : 0x80000050;
          break;
        default:
          goto LABEL_10;
      }
      break;
    default:
LABEL_10:
      result = 1;
      break;
  }
  return result;
}
