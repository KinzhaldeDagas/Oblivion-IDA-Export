double __thiscall sub_5C6860(_DWORD *this, int a2)
{
  PlayerCharacter *v3; // ecx
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  TESNPC *v5; // edi
  TESRace *race; // ebx
  char *v7; // eax
  const char *v8; // eax
  _DWORD *v9; // ebx
  double v10; // st7
  TESRace *v11; // edi
  double v12; // st7
  double v13; // st7
  int v14; // eax
  _DWORD *v15; // esi
  double v16; // st7
  int v17; // eax
  double v18; // st7
  double v19; // st7
  int v20; // eax
  BSStringT v22; // [esp-8h] [ebp-94h] BYREF
  int v23; // [esp+0h] [ebp-8Ch]
  float v24; // [esp+14h] [ebp-78h]
  double Float; // [esp+18h] [ebp-74h]
  unsigned __int8 a1[96]; // [esp+20h] [ebp-6Ch] BYREF
  unsigned int v27; // [esp+88h] [ebp-4h]
  float v28; // [esp+90h] [ebp+4h]
  float v29; // [esp+90h] [ebp+4h]
  float v30; // [esp+90h] [ebp+4h]

  ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v3 = TESDataHandler_g_PlayerRef;
  GetBaseForm = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm;
  v27 = 0;
  *(float *)&v23 = 0.0;
  v5 = (TESNPC *)GetBaseForm((TESObjectREFR *)v3);
  race = v5->member.form.race;
  v7 = (char *)sub_521A10(v5);
  sub_552990((char *)race->unk12, v7, (int)a1, 0, 0.0);
  v8 = (const char *)dword_B39000;
  v23 = 0xFA8;
  LODWORD(Float) = &v22;
  v22.m_data = 0;
  v22.m_dataLen = 0;
  v22.m_bufLen = 0;
  BSStringT_Set(&v22, v8, 0);
  v9 = (_DWORD *)sub_5C3110(this, (unsigned __int8 *)v22.m_data, *(int *)&v22.m_dataLen);
  Float = Tile_GetFloat((_DWORD *)*(this + 1), 0xFAE);
  v10 = Tile_GetFloat(v9, v23);
  v11 = v5->member.form.race;
  if ( v10 == Float )
  {
    if ( *(float *)&v11->unk09C[2] <= 0.0 )
      v12 = *(float *)&dword_A46C30;
    else
      v12 = *(float *)&v11->unk09C[2];
  }
  else if ( *(float *)&v11->unk09C[1] <= 0.0 )
  {
    v12 = flt_A31E2C;
  }
  else
  {
    v12 = *(float *)&v11->unk09C[1];
  }
  v24 = v12;
  v13 = Tile_GetFloat((_DWORD *)*(this + a2 + 0x25), 0xFB6);
  v14 = Double_To_SInt32(v13);
  v15 = (_DWORD *)*(this + a2 + 0x25);
  v23 = 0xFB5;
  if ( v14 )
  {
    *(_QWORD *)&Float = (__int64)(Tile_GetFloat(v15, v23) - dbl_A2F928);
    v23 = SLODWORD(Float);
    *(_DWORD *)&v22.m_dataLen = 0;
    v19 = Tile_GetFloat(v15, 0xFB6);
    v20 = Double_To_SInt32(v19);
    v29 = sub_5538F0((int)a1, v20, *(int *)&v22.m_dataLen, v23);
    v18 = (v29 - dbl_A6D3C8) / dbl_A46E48;
  }
  else
  {
    *(_QWORD *)&Float = (__int64)(Tile_GetFloat(v15, v23) - dbl_A2F928);
    v23 = SLODWORD(Float);
    *(_DWORD *)&v22.m_dataLen = 0;
    v16 = Tile_GetFloat(v15, 0xFB6);
    v17 = Double_To_SInt32(v16);
    v28 = sub_5538F0((int)a1, v17, *(int *)&v22.m_dataLen, v23);
    *(float *)&Float = -v24;
    v18 = (v28 - *(float *)&Float) / (v24 - *(float *)&Float);
  }
  v27 = 0xFFFFFFFF;
  v30 = (1.0 - 0.0) * v18 + 0.0;
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  return v30;
}
