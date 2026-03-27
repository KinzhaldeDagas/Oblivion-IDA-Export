void __thiscall sub_5C6AF0(_DWORD *this, int arg0, Tile *a3)
{
  PlayerCharacter *v4; // ecx
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  TESNPC *v6; // ebp
  TESRace *race; // esi
  char *v8; // eax
  _DWORD *v9; // eax
  Tile *v10; // esi
  const char *v11; // eax
  _DWORD *v12; // ebx
  double Float; // st7
  TESRace *v14; // ebp
  double v15; // st7
  double v16; // st7
  int v17; // eax
  double v18; // st7
  int v19; // eax
  double v20; // st7
  _DWORD *v21; // ebx
  double v22; // st7
  _DWORD *v23; // ebp
  double v24; // st7
  int v25; // eax
  double v26; // st7
  _DWORD *v27; // ebx
  double v28; // st7
  _DWORD *v29; // ebp
  double v30; // st7
  int v31; // eax
  BSStringT v32; // [esp-8h] [ebp-A4h] BYREF
  _DWORD *a2; // [esp+0h] [ebp-9Ch]
  float v34; // [esp+18h] [ebp-84h]
  float v35; // [esp+1Ch] [ebp-80h]
  _DWORD *v36; // [esp+20h] [ebp-7Ch]
  __int64 v37; // [esp+24h] [ebp-78h]
  TESNPC *v38; // [esp+2Ch] [ebp-70h]
  int a1[24]; // [esp+30h] [ebp-6Ch] BYREF
  unsigned int v40; // [esp+98h] [ebp-4h]

  ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v4 = TESDataHandler_g_PlayerRef;
  GetBaseForm = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm;
  v40 = 0;
  *(float *)&a2 = 0.0;
  v6 = (TESNPC *)GetBaseForm((TESObjectREFR *)v4);
  race = v6->member.form.race;
  v38 = v6;
  v8 = (char *)sub_521A10(v6);
  sub_552990((char *)race->unk12, v8, (int)a1, 0, 0.0);
  v36 = *(_DWORD **)(arg0 + 0x34);
  v9 = v36;
  if ( v36 )
  {
    while ( 1 )
    {
      v10 = (Tile *)v9[2];
      if ( v10 != a3 )
      {
        v11 = (const char *)dword_B39000;
        a2 = (_DWORD *)0xFA8;
        LODWORD(v37) = &v32;
        v32.m_data = 0;
        v32.m_dataLen = 0;
        v32.m_bufLen = 0;
        BSStringT_Set(&v32, v11, 0);
        v12 = (_DWORD *)sub_5C3110(this, (unsigned __int8 *)v32.m_data, *(int *)&v32.m_dataLen);
        *(double *)&v37 = Tile_GetFloat((_DWORD *)*(this + 1), 0xFAE);
        Float = Tile_GetFloat(v12, (int)a2);
        v14 = v6->member.form.race;
        if ( Float == *(double *)&v37 )
        {
          if ( *(float *)&v14->unk09C[2] <= 0.0 )
            v15 = *(float *)&dword_A46C30;
          else
            v15 = *(float *)&v14->unk09C[2];
        }
        else if ( *(float *)&v14->unk09C[1] <= 0.0 )
        {
          v15 = flt_A31E2C;
        }
        else
        {
          v15 = *(float *)&v14->unk09C[1];
        }
        v35 = v15;
        v16 = Tile_GetFloat(v10, 0xFB4);
        v17 = Double_To_SInt32(v16);
        v18 = Tile_GetFloat((_DWORD *)*(this + v17 + 0x25), 0xFB6);
        v19 = Double_To_SInt32(v18);
        a2 = (_DWORD *)0xFB4;
        if ( v19 )
        {
          v26 = Tile_GetFloat(v10, (int)a2);
          v27 = (_DWORD *)*(this + Double_To_SInt32(v26) + 0x25);
          v28 = Tile_GetFloat(v10, 0xFB4);
          v29 = (_DWORD *)*(this + Double_To_SInt32(v28) + 0x25);
          v37 = (__int64)(Tile_GetFloat(v27, 0xFB5) - dbl_A2F928);
          a2 = (_DWORD *)v37;
          *(_DWORD *)&v32.m_dataLen = 0;
          v30 = Tile_GetFloat(v29, 0xFB6);
          v31 = Double_To_SInt32(v30);
          *(float *)&v37 = sub_5538F0((int)a1, v31, *(int *)&v32.m_dataLen, (unsigned int)a2);
          Tile_SetFloat(v10, (_DWORD *)0xFB1, flt_A6D2D8);
          *(float *)&v37 = (1.0 - 0.0) * ((*(float *)&v37 - dbl_A6D3C8) / dbl_A46E48) + 0.0;
        }
        else
        {
          v20 = Tile_GetFloat(v10, (int)a2);
          v21 = (_DWORD *)*(this + Double_To_SInt32(v20) + 0x25);
          v22 = Tile_GetFloat(v10, 0xFB4);
          v23 = (_DWORD *)*(this + Double_To_SInt32(v22) + 0x25);
          v37 = (__int64)(Tile_GetFloat(v21, 0xFB5) - dbl_A2F928);
          a2 = (_DWORD *)v37;
          *(_DWORD *)&v32.m_dataLen = 0;
          v24 = Tile_GetFloat(v23, 0xFB6);
          v25 = Double_To_SInt32(v24);
          *(float *)&v37 = sub_5538F0((int)a1, v25, *(int *)&v32.m_dataLen, (unsigned int)a2);
          v34 = -v35;
          Tile_SetFloat(v10, (_DWORD *)0xFB1, flt_A6D2D8);
          *(float *)&v37 = (1.0 - 0.0) * ((*(float *)&v37 - v34) / (v35 - v34)) + 0.0;
        }
        Tile_SetFloat(v10, (_DWORD *)0xFB1, *(float *)&v37);
        Tile_SetFloat(v10, (_DWORD *)0xFB1, 0.0);
        *(float *)&a2 = Tile_GetFloat(v10, 0xFAE);
        Tile_SetFloat(v10, (_DWORD *)0xFB8, *(float *)&a2);
        v6 = v38;
        v9 = v36;
      }
      v36 = (_DWORD *)*v9;
      if ( !v36 )
        break;
      v9 = v36;
    }
  }
  v40 = 0xFFFFFFFF;
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
}
