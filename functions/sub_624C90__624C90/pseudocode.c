void __userpurge sub_624C90(
        int a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double Distance@<st0>,
        TESObjectREFR *a6,
        int a7)
{
  Actor *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  bool v13; // sf
  bool v14; // bl
  BSExtraDataVtbl *Owner; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  signed int v21; // eax
  int v22; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  char v24; // bl
  int v25; // eax
  int v26; // eax
  char v27; // al
  _DWORD *v28; // eax
  Actor **v29; // eax
  int v30; // eax
  signed int v31; // eax
  float v32; // [esp+4h] [ebp-24h]
  float v33; // [esp+4h] [ebp-24h]
  int v34; // [esp+Ch] [ebp-1Ch]

  if ( !*(_BYTE *)(a1 + 0x59) )
  {
    sub_624480((void **)a1, Distance);
    *(_BYTE *)(a1 + 0x59) = 1;
  }
  if ( a6 != (TESObjectREFR *)sub_6135F0(a1) )
  {
    v8 = *(Actor **)(a1 + 0x3C);
    if ( a6 != (TESObjectREFR *)v8 )
    {
      if ( sub_613670((_DWORD *)a1, (int)a6) )
      {
        LOBYTE(v17) = sub_614290(a1) == 0;
        sub_619D40(a1, a2, a6, v17, 1);
        goto LABEL_16;
      }
      LOBYTE(v9) = Actor_IsCreature(v8);
      v34 = v9;
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)v8, a6, 0);
      v32 = Distance;
      v33 = COERCE_FLOAT(((int (__thiscall *)(Actor *, int, _DWORD))v8->vtbl->GetActorValue)(v8, 0x21, LODWORD(v32)));
      v10 = ((int (__thiscall *)(Actor *))v8->vtbl->GetDisposition)(v8);
      shouldActorFight(v10, (int)a6, 0x64, v33, 1, v34, 0, 0x64);
      v12 = v11 == 0;
      v13 = v11 < 0;
      if ( v11 < 0 )
      {
        v12 = 1;
        v13 = 0;
      }
      v14 = !v13 && !v12;
      if ( Actor_IsCreature(*(Actor **)(a1 + 0x3C)) && Actor_IsCreature((Actor *)a6) )
      {
        if ( !TESObjectREFR_GetOwner(a6) )
          goto LABEL_16;
        Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x3C));
        if ( TESObjectREFR_GetOwner(a6) == Owner )
          goto LABEL_16;
      }
      else if ( !v14 )
      {
        goto LABEL_16;
      }
      a4 = ((double (__usercall *)@<st0>(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, _DWORD, double@<st0>, double@<st1>))*((_DWORD *)a6[1].vtbl->super.super.InitializeComponent + 0x5C))(
             a6[1].vtbl,
             a6,
             *(_DWORD *)(a1 + 0x3C),
             Distance,
             a4);
      v16 = Double_To_SInt32(Distance);
      Distance = 0.0;
      sub_616190(a1, (int)a6, a3, 0.0, (PlayerCharacter *)a6, v16, 0.0, 0.0, 0.0);
    }
  }
LABEL_16:
  if ( a7 )
    BaseProcess_GetCounterEffects_((char ****)a1, a7);
  if ( !*(_DWORD *)(a1 + 0x88) )
    sub_613880(a1, (char)a6, a7, a3);
  v18 = *(_DWORD *)(a1 + 0x6C);
  if ( v18 == 8 )
  {
    if ( (char)++*(_BYTE *)(a1 + 0x4F) <= dword_B36D48 )
      return;
    v19 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58);
    *(_BYTE *)(a1 + 0x4D) = 1;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x174))(v19) )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x174))(v19) + 0x20) != 0xC )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 0x178))(v19, 0);
    }
LABEL_25:
    v20 = *(_DWORD *)(a1 + 0x70);
    if ( v20 != 2 && v20 != 4 || a6 != (TESObjectREFR *)sub_6135F0(a1) || sub_614290(a1) )
    {
      v21 = sub_6239D0(a1, a3, a4, Distance, 0, 0);
      sub_612DE0(a1, v21);
      sub_619920(a1, 0);
    }
    return;
  }
  v22 = *(_DWORD *)(a1 + 0x70);
  if ( v22 != 6 && v22 != 5 )
  {
    if ( (v18 == 0xE || v18 == 0x10) && v22 == 8 )
    {
      vtbl = a6[1].vtbl;
      v24 = 1;
      if ( vtbl
        && (v25 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))(
                    vtbl,
                    1)) != 0 )
      {
        v26 = *(_DWORD *)(v25 + 8);
      }
      else
      {
        v26 = 0;
      }
      if ( v26 )
      {
        v27 = *(_BYTE *)(v26 + 0x90);
        if ( v27 == 4 || v27 == 5 )
          v24 = 0;
      }
      if ( (!a7 || *(_DWORD *)(*(_DWORD *)(a7 + 0xC) + 0x10) == 1)
        && v24
        && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C)) )
      {
        v28 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x330))(
                          *(_DWORD *)(a1 + 0x3C),
                          Distance,
                          a4,
                          a3);
        sub_612DA0(v28, 9);
        v29 = (Actor **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C));
        sub_6160B0(v29);
        v30 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C));
        sub_619920(v30, 0);
        return;
      }
    }
    goto LABEL_25;
  }
  (*(void (__stdcall **)(TESObjectREFR *, float))(**(_DWORD **)(a1 + 0x3C) + 0x374))(a6, fCrimeDispAttack);
  if ( *(_DWORD *)(a1 + 0x70) == 6 && *(char *)(a1 + 0x4E) > dword_B36D78 )
  {
    v31 = sub_6239D0(a1, a3, a4, Distance, 0, 0);
    if ( v31 != 5 )
    {
      sub_612DE0(a1, v31);
      sub_619920(a1, 0);
    }
    *(_BYTE *)(a1 + 0x4E) = 0;
  }
}
