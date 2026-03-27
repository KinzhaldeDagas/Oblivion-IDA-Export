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

  v6 = (int *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(*(_DWORD *)(a1 + 0x60) + 0x58) + 0x33C))(
                *(_DWORD *)(*(_DWORD *)(a1 + 0x60) + 0x58),
                0,
                a5,
                a4,
                st5_0);
  v7 = sub_578FE0();
  if ( v7 != 0x3F1
    && v7 != 0x3F0
    && v7 != 0x40D
    && v7 != 0x404
    && v7 != 0x40B
    && v7 != 0x419
    && *(int *)(a1 + 0x6C) >= 0 )
  {
    if ( v6 )
    {
      if ( !byte_B3B298 )
      {
        sub_6B7220(v6);
        byte_B3B298 = 1;
      }
    }
    return;
  }
  v8 = *(_DWORD **)(a1 + 0x44);
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 0x48) )
    {
      Float = Tile_GetFloat(v8, 0xFB0);
      if ( Double_To_SInt32(Float) > 0 )
        v10 = fConstant_2;
      else
        v10 = 1.0;
      a3 = v10;
      Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFA1, a3);
    }
  }
  if ( v6 )
  {
    if ( byte_B3B298 )
    {
      sub_6B7190(v6, 0);
      byte_B3B298 = 0;
    }
  }
  v11 = *(_DWORD *)(a1 + 0x60);
  if ( v11 )
  {
    v12 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 0x304))(0.0, 0);
    sub_66B710(TESDataHandler_g_PlayerRef, v12, st5_0, 0);
  }
  if ( *(_DWORD *)(a1 + 0x6C) )
  {
    v13 = *(_DWORD **)(a1 + 4);
    *(float *)(a1 + 0x68) = *(float *)(a1 + 0x68) + flt_B33E9C;
    v27 = Tile_GetFloat(v13, 0xFB0);
    if ( *(int *)(a1 + 0x6C) < 0 )
      v27 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB1);
    v14 = v27;
    if ( v27 <= 0.0 )
      v14 = flt_A37080;
    v15 = *(float *)(a1 + 0x68) / v14;
    if ( v15 >= 1.0 )
      v15 = 1.0;
    v16 = *(int *)(a1 + 0x6C) < 0;
    st5_0 = v15;
    flt_B13FCC = v15;
    if ( v16 )
      flt_B13FCC = 1.0 - flt_B13FCC;
    a4 = *(float *)(a1 + 0x68);
    if ( a4 > v14 )
      *(_DWORD *)(a1 + 0x6C) = 0;
  }
  v17 = sub_5E6C10((MobileObject *)TESDataHandler_g_PlayerRef);
  a4_4 = flt_B13FCC;
  if ( v17 )
    SetDialogueCamera(TESDataHandler_g_PlayerRef, *(Actor **)(a1 + 0x60), a4_4, 0);
  else
    SetDialogueCamera(TESDataHandler_g_PlayerRef, *(Actor **)(a1 + 0x60), a4_4, 1u);
  if ( *(_DWORD *)(a1 + 0x60) && Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x3C), 0xFA1) == fConstant_1 )
  {
    if ( *(_DWORD *)(a1 + 0x80) != 3 )
      goto LABEL_46;
    v18 = OblivionDynamicCast(
            *(void **)(*(_DWORD *)(a1 + 0x60) + 0x58),
            0,
            (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
            &HighProcess `RTTI Type Descriptor',
            0);
    v19 = v18;
    if ( !v18 )
      goto LABEL_46;
    if ( !(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)v18 + 0x33C))(v18, 0)
      || (v20 = (int *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)v19 + 0x33C))(v19, 0), sub_6B7260(v20)) )
    {
      if ( (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)v19 + 0x33C))(v19, 0) )
        goto LABEL_46;
      *(_DWORD *)(a1 + 0x80) = 4;
      v28 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)v19 + 0x208))(v19);
      v21 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36B00) + v28;
    }
    else
    {
      *(_DWORD *)(a1 + 0x80) = 4;
      v21 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36B00);
    }
    *(float *)(a1 + 0x84) = v21 + dbl_A2F928;
LABEL_46:
    v22 = *(_DWORD *)(a1 + 0x80);
    if ( v22 == 4 )
    {
      v23 = *(_DWORD *)(a1 + 0x60);
      *(_DWORD *)(a1 + 0x80) = 1;
      v24 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(v23 + 0x58) + 0x344))(
              *(_DWORD *)(v23 + 0x58),
              0);
      sub_59EB90(a1, a2, v24, st5_0, a4);
    }
    else if ( v22 == 2 )
    {
      v29 = *(float *)(a1 + 0x84) - flt_B33E9C;
      *(float *)(a1 + 0x84) = v29;
      if ( v29 <= 0.0 )
        *(_DWORD *)(a1 + 0x80) = 3;
    }
  }
}
