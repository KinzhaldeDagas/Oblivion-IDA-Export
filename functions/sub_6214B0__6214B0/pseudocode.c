void __usercall sub_6214B0(int a1@<ecx>, double a2@<st1>)
{
  double v6; // st5
  int v7; // eax
  unsigned __int16 v8; // bx
  float *v9; // eax
  double v10; // st7
  _DWORD **v11; // eax
  char *Name; // eax
  double v13; // st7
  int *SafeFloatPointer; // eax
  bool v15; // al
  Actor **v16; // ecx
  int *v17; // eax
  _DWORD **v18; // eax
  int v19; // ecx
  int (__usercall *v20)@<eax>(int@<ecx>, double@<st0>, double@<st1>); // edx
  int *v21; // eax
  _DWORD *v22; // ebx
  void (__thiscall **v23)(_DWORD *, int, _DWORD, _DWORD); // edi
  int v24; // eax
  float v25; // [esp+8h] [ebp-28h]
  char v26; // [esp+1Bh] [ebp-15h] BYREF
  float v27; // [esp+1Ch] [ebp-14h]
  float v28; // [esp+20h] [ebp-10h]
  float v29; // [esp+24h] [ebp-Ch]
  float v30; // [esp+28h] [ebp-8h]
  float v31; // [esp+2Ch] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x6C) == 2 )
  {
    v6 = *(float *)(a1 + 0x44);
    v25 = *(float *)(a1 + 0x44);
    v26 = 1;
    if ( sub_612790((float *)(a1 + 0xD4), v25, (bool *)&v26) )
    {
      sub_6160B0((Actor **)a1);
      sub_619920(a1, 0);
      v7 = *(_DWORD *)(a1 + 0x6C);
      if ( v7 != 4 && v7 != 7 && v7 != 9 && v7 != 8 && v7 != 0xC )
        *(_BYTE *)(a1 + 0x191) = 1;
      return;
    }
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58));
    if ( !sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) )
    {
LABEL_25:
      sub_619920(a1, 0);
      return;
    }
    if ( !byte_B333B8 )
    {
      v9 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x174))(*(_DWORD *)(a1 + 0x3C));
      v29 = *(float *)(a1 + 0x198) - *v9;
      v30 = *(float *)(a1 + 0x19C) - v9[1];
      v31 = *(float *)(a1 + 0x1A0) - v9[2];
      v10 = flt_B372C8;
      v27 = v30 * v30 + v29 * v29 + v31 * v31;
      a2 = v27;
      v6 = v10;
      if ( v27 >= v10 * v10 )
        sub_614BB0(a1);
    }
    if ( sub_6135F0(a1) )
    {
      v11 = (_DWORD **)sub_6135F0(a1);
      if ( Actor_GetCurrentAction(v11) == 2 && *(_DWORD *)(a1 + 0x74) == 2 )
      {
        *(_DWORD *)(a1 + 0x78) = 2;
        *(_DWORD *)(a1 + 0x74) = 3;
        sub_6213D0(a1);
      }
    }
    if ( (v8 & *(_WORD *)(a1 + 0x192)) != 0 )
    {
      if ( byte_B3B908 )
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
        Interface_ConsolePrint("%.20s has run out of room to dodge.", Name);
      }
LABEL_24:
      sub_6160B0((Actor **)a1);
      goto LABEL_25;
    }
    v27 = sub_615980(a1, 2);
    v13 = sub_615520(a1);
    v28 = v13;
    if ( (v8 & 0xC) == 0 )
    {
      if ( (v8 & 1) != 0 )
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fCombatMinEngageDistance);
        v13 = v27;
        a2 = *(float *)SafeFloatPointer;
        if ( a2 >= v27 )
        {
          if ( v26 )
            goto LABEL_24;
        }
      }
      goto LABEL_39;
    }
    v13 = v27;
    a2 = v28;
    if ( v28 >= (double)v27 )
    {
      v17 = GameSetting_GetSafeFloatPointer((int *)&fCombatMinEngageDistance);
      v13 = v27;
      a2 = *(float *)v17;
      if ( a2 > v27 && (v8 & 1) != 0 )
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          1,
          0);
      goto LABEL_39;
    }
    if ( sub_613440((void **)a1, v27, v28, 0) )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        1,
        1);
    }
    else
    {
      if ( !v26 )
        goto LABEL_39;
      v15 = sub_612690(*(_DWORD *)(a1 + 0x70));
      v16 = (Actor **)a1;
      if ( !v15 )
        goto LABEL_34;
      if ( !sub_614290(a1) )
      {
        sub_6160B0((Actor **)a1);
        sub_61FE90((float *)a1, v6, v13);
        goto LABEL_39;
      }
      if ( *(_DWORD *)(a1 + 0x74) )
      {
        v16 = (Actor **)a1;
LABEL_34:
        sub_6160B0(v16);
        sub_61D320(a1);
      }
    }
LABEL_39:
    if ( sub_6135F0(a1) && (v18 = (_DWORD **)sub_6135F0(a1), Actor_GetCurrentAction(v18) == 2) )
    {
      LODWORD(v28) = GetRandomLargeInteger_(0) % 0x64;
      v19 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58);
      v20 = *(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v19 + 0x2C0);
      v28 = (float)SLODWORD(v28);
      if ( (v20(v19, v13, a2) & 0x100) != 0 && !*(_BYTE *)(a1 + 0x49) )
      {
        v21 = GameSetting_GetSafeFloatPointer((int *)&unk_B36D90);
        if ( *(float *)v21 < (double)v28 )
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            0x200,
            1);
      }
    }
    else if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58))
             & 0x200) != 0 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        0x100,
        1);
    }
    v28 = COERCE_FLOAT(GetRandomLargeInteger_(0));
    if ( flt_B36F48 >= (double)SLODWORD(v28) / dbl_A3D5A8 )
    {
      v22 = *(_DWORD **)(a1 + 0x3C);
      v23 = (void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*v22 + 0x308);
      v24 = sub_6135F0(a1);
      (*v23)(v22, v24, 0, 0);
    }
  }
}
