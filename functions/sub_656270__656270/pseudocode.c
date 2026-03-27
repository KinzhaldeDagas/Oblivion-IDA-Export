void __userpurge sub_656270(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5,
        _DWORD *a6,
        _DWORD *a7,
        PlayerCharacter *a8)
{
  _DWORD *v9; // edi
  int v10; // esi
  _DWORD *v11; // eax
  bool v12; // zf
  _DWORD *v13; // ebx
  int v14; // ecx
  int v15; // ebx
  _DWORD *v16; // ecx
  float v17; // eax
  float v18; // edx
  TESObjectREFR *v19; // esi
  _DWORD *v20; // edi
  float v21; // [esp+20h] [ebp-30h]
  float v22; // [esp+24h] [ebp-2Ch]
  float v23; // [esp+28h] [ebp-28h]
  float v24[9]; // [esp+2Ch] [ebp-24h] BYREF

  sub_651DD0(a1);
  if ( !a1[0x39] )
    goto LABEL_25;
  v9 = a6;
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 0x118))(a1, a6);
  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 0x124))(a1, v9);
  v12 = *((_BYTE *)a1 + 0xF4) == 0;
  v13 = v11;
  a6 = v11;
  if ( !v12 )
    v10 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 0x11C))(a1, v9);
  if ( !v10 )
    goto LABEL_25;
  if ( v13 )
  {
    v14 = (int)v13;
    if ( !a5 )
      v14 = v10;
    v15 = sub_405790(v14, 0);
    if ( *((_BYTE *)a1 + 0xF4) && v9 && v15 == sub_478180(v9) || !v15 )
    {
      v16 = a6;
      if ( a5 )
        v16 = (_DWORD *)v10;
      v15 = sub_405790((int)v16, 0);
      if ( !v15 )
        goto LABEL_25;
    }
    else if ( a5 )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 0x84))(v10, v15, 1);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*a6 + 0x84))(a6, v15, 1);
    }
    v17 = Vector3_InitValue_;
    v18 = dword_B3F9B0;
    qmemcpy(v24, &stru_B26AF0[0xA].unk2C, sizeof(v24));
    v21 = v17;
    v22 = *(&Vector3_InitValue_ + 1);
    v23 = v18;
    if ( *(_BYTE *)(*(_DWORD *)(a1[0x39] + 8) + 0x90) == 4 )
    {
      if ( !a5 )
      {
        a4 = flt_A449C0;
        NiMatrix33_InitRotationTransposedTransform___(v24, flt_A449C0);
      }
    }
    else if ( *(_BYTE *)(*(_DWORD *)(a1[0x39] + 8) + 0x90) == 5 && !a5 )
    {
      NiMatrix33_InitRotationTransposedTransform___(v24, flt_A72D4C);
      a4 = flt_A72D48;
      v22 = flt_A72D48;
    }
    qmemcpy((void *)(v15 + 0x30), v24, 0x24u);
    *(float *)(v15 + 0x54) = v21;
    *(float *)(v15 + 0x58) = v22;
    *(float *)(v15 + 0x5C) = v23;
LABEL_25:
    v19 = (TESObjectREFR *)a8;
    goto LABEL_26;
  }
  if ( a5 )
    goto LABEL_25;
  if ( !a1[0x39] )
    goto LABEL_25;
  (*(void (__thiscall **)(int, _DWORD **, _DWORD))(*(_DWORD *)v10 + 0x8C))(v10, &a6, 0);
  sub_7016A0((NiD3DVertexShader *)&a6);
  if ( sub_45A500(SaveLoad_CurrentSavegame) )
    goto LABEL_25;
  v19 = (TESObjectREFR *)a8;
  a4 = Actor_UnequipItem(a8, a4, a2, a3, *(_DWORD *)(a1[0x39] + 8), 1, 0, 0, 0, 0);
LABEL_26:
  if ( sub_5E32D0(v19) )
  {
    v20 = a7;
    if ( a7 )
    {
      if ( !Menu_GetOpenMenuTile(0x40C) )
      {
        if ( a5 )
          sub_476410(v20, (int)v20, a2, a3, a4, v19, 0);
        else
          sub_471990(v20);
      }
    }
  }
  sub_5EF9B0((int)v19, a5);
}
