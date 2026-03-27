BOOL __userpurge sub_54A540@<eax>(int a1@<ecx>, double a2@<st0>, float *a3)
{
  int v3; // esi
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double v7; // st3
  double v8; // st7
  double v9; // rtt
  double v10; // rt0
  double v11; // st3
  double v12; // st7
  double v13; // st3
  bool v14; // c3
  double v15; // st6
  double v16; // st5
  float v18; // [esp+1Ch] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+20h] [ebp-8h]
  float v21; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+24h] [ebp-4h]

  v3 = a1 + 0xA4;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(a1 + 0xA4) + 0x48))(a1 + 0xA4, 0x10);
  v20 = a2;
  v18 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v3 + 0x48))(v3, 0xF);
  v22 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v3 + 0x48))(v3, 0xE);
  v4 = v20;
  v5 = dbl_A3A5B0;
  if ( v5 == v20 )
    v4 = (float)0.0;
  v6 = dbl_A641E8;
  v7 = dbl_A641E0;
  if ( v6 >= v4 )
  {
    v8 = v7;
    v7 = v6;
  }
  else
  {
    if ( v7 > v4 )
      goto LABEL_8;
    v8 = v7;
  }
  v9 = v7;
  v7 = v8;
  v4 = v9;
LABEL_8:
  v10 = v7;
  v11 = v4;
  v12 = v10;
  v21 = v11;
  v13 = v18;
  if ( v18 == v5 )
    v13 = (float)0.0;
  if ( v13 <= v6 )
  {
    v13 = v6;
  }
  else if ( v13 >= v12 )
  {
    v13 = v12;
  }
  v14 = v22 == v5;
  v15 = v22;
  if ( v14 )
  {
    v16 = v6;
    v15 = (float)0.0;
  }
  else
  {
    v16 = v6;
  }
  if ( v16 >= v15 )
  {
    v15 = v16;
  }
  else if ( v15 >= v12 )
  {
    goto LABEL_22;
  }
  v12 = v15;
LABEL_22:
  v23 = v12;
  v19 = v13;
  sub_711580(a3, v21, v19, v23);
  return !sub_70FF20(a3, (float *)&stru_B26AF0[0xA].unk2C);
}
