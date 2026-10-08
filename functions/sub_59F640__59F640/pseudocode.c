// DialogMenu::DoIdle. Oblivion-owned timing: speechState +0x80 moves 2 -> 3 after the post-line delay at +0x84; state 3 waits for the speaker HighProcess speech/lip object to finish or disappear, then state 4 calls AdvanceTopicResponse. Fallout is used only to corroborate the DoIdle name after this Oblivion state machine was observed.
void __usercall sub_59F640(int a1@<ecx>, const char **a2@<ebp>, double st5_0@<st2>, double a4@<st1>, double a5@<st0>)
{
  int *v6; // edi
  signed int v7; // eax
  _DWORD *v8; // ecx
  double Float; // st7
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  _DWORD *v13; // ecx
  double v14; // st7
  double v15; // st6
  bool v16; // sf
  bool v17; // al
  void *v18; // eax
  void *v19; // edi
  int *v20; // eax
  double v21; // st7
  int v22; // eax
  int v23; // ecx
  double v24; // st7
  float a4_4; // [esp+Ch] [ebp-18h]
  float a3; // [esp+10h] [ebp-14h]
  float v27; // [esp+1Ch] [ebp-8h]
  double v28; // [esp+1Ch] [ebp-8h]
  float v29; // [esp+1Ch] [ebp-8h]

  v6 = (int *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(*(_DWORD *)(a1 + 0x60) + 0x58) + 0x33C))( /*0x59f659*/
                *(_DWORD *)(*(_DWORD *)(a1 + 0x60) + 0x58),
                0,
                a5,
                a4,
                st5_0);
  v7 = sub_578FE0(); /*0x59f65b*/
  if ( v7 != 0x3F1 /*0x59f68e*/
    && v7 != 0x3F0
    && v7 != 0x40D
    && v7 != 0x404
    && v7 != 0x40B
    && v7 != 0x419
    && *(int *)(a1 + 0x6C) >= 0 )
  {
    if ( v6 ) /*0x59f692*/
    {
      if ( !LOBYTE(dword_B3B0B4[0x79]) ) /*0x59f698*/
      {
        sub_6B7220(v6); /*0x59f6a7*/
        LOBYTE(dword_B3B0B4[0x79]) = 1; /*0x59f6ad*/
      }
    }
    return; /*0x59f6b8*/
  }
  v8 = *(_DWORD **)(a1 + 0x44); /*0x59f6b9*/
  if ( v8 ) /*0x59f6be*/
  {
    if ( *(_DWORD *)(a1 + 0x48) ) /*0x59f6c0*/
    {
      Float = Tile_GetFloat(v8, 0xFB0); /*0x59f6cb*/
      if ( Double_To_SInt32(Float) > 0 ) /*0x59f6db*/
        v10 = fConstant_2; /*0x59f6e1*/
      else
        v10 = 1.0; /*0x59f6dd*/
      a3 = v10; /*0x59f6e7*/
      Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFA1, a3); /*0x59f6ef*/
    }
  }
  if ( v6 ) /*0x59f6f6*/
  {
    if ( LOBYTE(dword_B3B0B4[0x79]) ) /*0x59f6f8*/
    {
      sub_6B7190(v6, 0); /*0x59f705*/
      LOBYTE(dword_B3B0B4[0x79]) = 0; /*0x59f70a*/
    }
  }
  v11 = *(_DWORD *)(a1 + 0x60); /*0x59f711*/
  if ( v11 ) /*0x59f716*/
  {
    v12 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 0x304))(0.0, 0); /*0x59f728*/
    sub_66B710(reference, v12, 0); /*0x59f732*/
  }
  if ( *(_DWORD *)(a1 + 0x6C) ) /*0x59f737*/
  {
    v13 = *(_DWORD **)(a1 + 4); /*0x59f744*/
    *(float *)(a1 + 0x68) = *(float *)(a1 + 0x68) + *(float *)&MEMORY[0xB33E90][0xC]; /*0x59f752*/
    v27 = Tile_GetFloat(v13, 0xFB0); /*0x59f75e*/
    if ( *(int *)(a1 + 0x6C) < 0 ) /*0x59f762*/
      v27 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB1); /*0x59f771*/
    v14 = v27; /*0x59f77f*/
    if ( v27 <= 0.0 ) /*0x59f784*/
      v14 = flt_A37080; /*0x59f792*/
    v15 = *(float *)(a1 + 0x68) / v14; /*0x59f799*/
    if ( v15 >= 1.0 ) /*0x59f7a4*/
      v15 = 1.0; /*0x59f7aa*/
    v16 = *(int *)(a1 + 0x6C) < 0; /*0x59f7ac*/
    st5_0 = v15; /*0x59f7b0*/
    flt_B13FCC = v15; /*0x59f7b2*/
    if ( v16 ) /*0x59f7b8*/
      flt_B13FCC = 1.0 - flt_B13FCC; /*0x59f7c0*/
    a4 = *(float *)(a1 + 0x68); /*0x59f7ca*/
    if ( a4 > v14 ) /*0x59f7d4*/
      *(_DWORD *)(a1 + 0x6C) = 0; /*0x59f7d6*/
  }
  v17 = sub_5E6C10((MobileObject *)reference); /*0x59f7e3*/
  a4_4 = flt_B13FCC; /*0x59f7f8*/
  if ( v17 ) /*0x59f7f0*/
    SetDialogueCamera(reference, *(Actor **)(a1 + 0x60), a4_4, 0); /*0x59f7fc*/
  else
    SetDialogueCamera(reference, *(Actor **)(a1 + 0x60), a4_4, 1u); /*0x59f80e*/
  if ( *(_DWORD *)(a1 + 0x60) && Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x3C), 0xFA1) == fConstant_1 ) /*0x59f835*/
  {
    if ( *(_DWORD *)(a1 + 0x80) != 3 ) /*0x59f842*/
      goto LABEL_46; /*0x59f842*/
    v18 = OblivionDynamicCast( /*0x59f85d*/
            *(void **)(*(_DWORD *)(a1 + 0x60) + 0x58),
            0,
            (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
            &HighProcess `RTTI Type Descriptor',
            0);
    v19 = v18; /*0x59f862*/
    if ( !v18 ) /*0x59f869*/
      goto LABEL_46; /*0x59f869*/
    if ( !(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)v18 + 0x33C))(v18, 0) /*0x59f891*/
      || (v20 = (int *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)v19 + 0x33C))(v19, 0),
          SoundHandle::IsPlaying(v20)) )
    {
      if ( (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)v19 + 0x33C))(v19, 0) ) /*0x59f8be*/
        goto LABEL_46; /*0x59f8c2*/
      *(_DWORD *)(a1 + 0x80) = 4; /*0x59f8c4*/
      v28 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)v19 + 0x208))(v19); /*0x59f8da*/
      v21 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36B00) + v28; /*0x59f8ea*/
    }
    else
    {
      *(_DWORD *)(a1 + 0x80) = 4; /*0x59f89f*/
      v21 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36B00); /*0x59f8ae*/
    }
    *(float *)(a1 + 0x84) = v21 + dbl_A2F928; /*0x59f8f4*/
LABEL_46:
    v22 = *(_DWORD *)(a1 + 0x80); /*0x59f8fa*/
    if ( v22 == 4 ) /*0x59f903*/
    {
      v23 = *(_DWORD *)(a1 + 0x60); /*0x59f905*/
      *(_DWORD *)(a1 + 0x80) = 1; /*0x59f908*/
      v24 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(v23 + 0x58) + 0x344))( /*0x59f91f*/
              *(_DWORD *)(v23 + 0x58),
              0);
      DialogMenu::AdvanceTopicResponse(a1, a2, v24, st5_0, a4);// Response-completion boundary: only after DoIdle observes completed speech does it call AdvanceTopicResponse, which starts the next response or, after the final response, processes the selected TESTopicInfo and rebuilds the TOPIC list. /*0x59f928*/
    }
    else if ( v22 == 2 ) /*0x59f930*/
    {
      v29 = *(float *)(a1 + 0x84) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x59f93e*/
      *(float *)(a1 + 0x84) = v29; /*0x59f946*/
      if ( v29 <= 0.0 ) /*0x59f955*/
        *(_DWORD *)(a1 + 0x80) = 3; /*0x59f957*/
    }
  }
}
