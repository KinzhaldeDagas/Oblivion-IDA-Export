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

  switch ( a1 )
  {
    case 1:
      v19 = a5[5];
      v20 = *(_DWORD *)a5;
      v14 = fabs(*a5 - v19);
      v21 = v14;
      v10 = *(_DWORD *)dword_BA7D98;
      if ( (a5[0xA] + v19 + *a5) * flt_A2FAAC <= fabs(v19 - a5[0xA]) + fabs(*a5 - a5[0xA]) + v14 )
        goto LABEL_4;
      v9 = (*(int (__stdcall **)(int, int, int, int, int, float, int, float))(v10 + 0x10))(
             0xF0,
             0x2B,
             v16,
             v17,
             v18,
             COERCE_FLOAT(LODWORD(v19)),
             v20,
             COERCE_FLOAT(LODWORD(v21)));
LABEL_9:
      *(_WORD *)(v9 + 4) = 0xF0;
      sub_8A95F0((float *)v9, a8, a9);
      break;
    case 2:
      v9 = (*(int (__stdcall **)(int, int, int, int, int, float, int, float))(*(_DWORD *)dword_BA7D98 + 0x10))(
             0xF0,
             0x2B,
             v16,
             v17,
             v18,
             COERCE_FLOAT(LODWORD(v19)),
             v20,
             COERCE_FLOAT(LODWORD(v21)));
      goto LABEL_9;
    case 3:
      v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xF0, 0x2B);
      *(_WORD *)(v12 + 4) = 0xF0;
      sub_8A9610((float *)v12, a8, a9);
      break;
    case 4:
      v10 = *(_DWORD *)dword_BA7D98;
LABEL_4:
      v11 = (*(int (__stdcall **)(int, int, int, int, int, float, int, float))(v10 + 0x10))(
              0x100,
              0x2B,
              v16,
              v17,
              v18,
              COERCE_FLOAT(LODWORD(v19)),
              v20,
              COERCE_FLOAT(LODWORD(v21)));
      *(_WORD *)(v11 + 4) = 0x100;
      sub_8EAD40((float *)v11, a8, a9);
      break;
    case 5:
      v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x100, 0x2B);
      *(_WORD *)(v13 + 4) = 0x100;
      sub_8EA750((float *)v13, a8, a9);
      break;
    case 6:
      v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x100, 0x2B);
      *(_WORD *)(v15 + 4) = 0x100;
      sub_8EA140((float *)v15, a8, a9);
      break;
    default:
      JUMPOUT(0x8A979D);
  }
  JUMPOUT(0x8A97C6);
}
