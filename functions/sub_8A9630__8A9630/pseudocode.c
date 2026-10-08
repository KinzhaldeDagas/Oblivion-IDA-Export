void __cdecl sub_8A9630(int a1, int a2, int a3, int a4, float *a5, int a6, int a7, _OWORD *a8, float *a9)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  long double v14; // st6
  int v15; // eax
  int v16; // [esp+0h] [ebp-18h]
  int v17; // [esp+4h] [ebp-14h]
  int v18; // [esp+8h] [ebp-10h]
  float v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+10h] [ebp-8h]
  float v21; // [esp+14h] [ebp-4h]

  switch ( a1 ) /*0x8a964a*/
  {
    case 1: /*0x8a964a*/
      v19 = a5[5]; /*0x8a96f2*/
      v20 = *(_DWORD *)a5; /*0x8a9702*/
      v14 = fabs(*a5 - v19); /*0x8a9728*/
      v21 = v14; /*0x8a972a*/
      v10 = *(_DWORD *)unk_BA7D98; /*0x8a9749*/
      if ( (a5[0xA] + v19 + *a5) * kFaceEarNormalMatchRadius <= fabs(v19 - a5[0xA]) + fabs(*a5 - a5[0xA]) + v14 ) /*0x8a974b*/
        goto LABEL_4; /*0x8a974b*/
      v9 = (*(int (__stdcall **)(int, int, int, int, int, float, int, float))(v10 + 0x10))( /*0x8a9756*/
             0xF0,
             0x2B,
             v16,
             v17,
             v18,
             COERCE_FLOAT(LODWORD(v19)),
             v20,
             COERCE_FLOAT(LODWORD(v21)));
LABEL_9:
      *(_WORD *)(v9 + 4) = 0xF0; /*0x8a9759*/
      sub_8A95F0((float *)v9, a8, a9); /*0x8a976b*/
      break; /*0x8a9770*/
    case 2: /*0x8a964a*/
      v9 = (*(int (__stdcall **)(int, int, int, int, int, float, int, float))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8a965b*/
             0xF0,
             0x2B,
             v16,
             v17,
             v18,
             COERCE_FLOAT(LODWORD(v19)),
             v20,
             COERCE_FLOAT(LODWORD(v21)));
      goto LABEL_9; /*0x8a965b*/
    case 3: /*0x8a964a*/
      v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xF0, 0x2B); /*0x8a969d*/
      *(_WORD *)(v12 + 4) = 0xF0; /*0x8a96ac*/
      sub_8A9610((float *)v12, a8, a9); /*0x8a96b2*/
      break; /*0x8a96b7*/
    case 4: /*0x8a964a*/
      v10 = *(_DWORD *)unk_BA7D98; /*0x8a9666*/
LABEL_4:
      v11 = (*(int (__stdcall **)(int, int, int, int, int, float, int, float))(v10 + 0x10))( /*0x8a966a*/
              0x100,
              0x2B,
              v16,
              v17,
              v18,
              COERCE_FLOAT(LODWORD(v19)),
              v20,
              COERCE_FLOAT(LODWORD(v21)));
      *(_WORD *)(v11 + 4) = 0x100; /*0x8a967e*/
      sub_8EAD40((float *)v11, a8, a9); /*0x8a9684*/
      break; /*0x8a9689*/
    case 5: /*0x8a964a*/
      v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x100, 0x2B); /*0x8a96cb*/
      *(_WORD *)(v13 + 4) = 0x100; /*0x8a96da*/
      sub_8EA750((float *)v13, a8, a9); /*0x8a96e0*/
      break; /*0x8a96e5*/
    case 6: /*0x8a964a*/
      v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x100, 0x2B); /*0x8a9781*/
      *(_WORD *)(v15 + 4) = 0x100; /*0x8a9790*/
      sub_8EA140((float *)v15, a8, a9); /*0x8a9796*/
      break; /*0x8a979b*/
    default:
      JUMPOUT(0x8A979D); /*0x8a979d*/
  }
  JUMPOUT(0x8A97C6); /*0x8a97c6*/
}
