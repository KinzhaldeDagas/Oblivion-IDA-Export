void __thiscall sub_5C6390(_DWORD *this, int arg0)
{
  _DWORD *v2; // ebp
  PlayerCharacter *v3; // ecx
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  int v5; // ebx
  int v6; // esi
  char *v7; // eax
  const char *v8; // eax
  _DWORD *v9; // esi
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  int v13; // edi
  double v14; // st7
  int v15; // eax
  _DWORD *v16; // ecx
  double v17; // st7
  _DWORD *v18; // esi
  double v19; // st7
  double v20; // st7
  int v21; // eax
  char *v22; // eax
  float v23; // edi
  int v24; // eax
  float v25; // esi
  int v26; // ecx
  int v27; // eax
  int v28; // ebp
  NiObject *v29; // eax
  NiObject *v30; // esi
  NiObject *(__thiscall *Unk_02)(NiObject *); // eax
  char *v32; // eax
  float v33; // eax
  bool v34; // zf
  Tile *v35; // esi
  BSStringT a2; // [esp+0h] [ebp-168h] BYREF
  int a3; // [esp+8h] [ebp-160h]
  float v38; // [esp+20h] [ebp-148h]
  float v39; // [esp+24h] [ebp-144h]
  int v40; // [esp+28h] [ebp-140h]
  float v41; // [esp+2Ch] [ebp-13Ch]
  double Float; // [esp+30h] [ebp-138h]
  _DWORD *v43; // [esp+38h] [ebp-130h]
  int v44[24]; // [esp+3Ch] [ebp-12Ch] BYREF
  unsigned __int8 a1[96]; // [esp+9Ch] [ebp-CCh] BYREF
  int v46[24]; // [esp+FCh] [ebp-6Ch] BYREF
  unsigned int v47; // [esp+164h] [ebp-4h]

  v2 = this;
  v43 = this;
  ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v47 = 0;
  ArrayConstructor(v44, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v3 = TESDataHandler_g_PlayerRef;
  GetBaseForm = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm;
  LOBYTE(v47) = 1;
  *(float *)&a3 = 0.0;
  v5 = (int)GetBaseForm((TESObjectREFR *)v3);
  v6 = *(_DWORD *)(v5 + 0xE8);
  v7 = (char *)sub_521A10((TESNPC *)v5);
  sub_552990((char *)(v6 + 0x29C), v7, (int)a1, 0, 0.0);
  v8 = (const char *)dword_B39000;
  a3 = 0xFA8;
  LODWORD(Float) = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v8, 0);
  v9 = (_DWORD *)sub_5C3110(v2, (unsigned __int8 *)a2.m_data, *(int *)&a2.m_dataLen);
  Float = Tile_GetFloat((_DWORD *)v2[1], 0xFAE);
  v10 = Tile_GetFloat(v9, a3);
  v11 = *(_DWORD *)(v5 + 0xE8);
  if ( v10 == Float )
  {
    if ( *(float *)(v11 + 0xA4) <= 0.0 )
      v12 = *(float *)&dword_A46C30;
    else
      v12 = *(float *)(v11 + 0xA4);
  }
  else if ( *(float *)(v11 + 0xA0) <= 0.0 )
  {
    v12 = flt_A31E2C;
  }
  else
  {
    v12 = *(float *)(v11 + 0xA0);
  }
  v13 = arg0;
  v38 = v12;
  v14 = Tile_GetFloat((_DWORD *)v2[arg0 + 0x25], 0xFB6);
  v15 = Double_To_SInt32(v14);
  v16 = (_DWORD *)v2[arg0 + 0x25];
  a3 = 0xFAE;
  if ( v15 )
  {
    *(float *)&v40 = Tile_GetFloat(v16, a3);
    v17 = (*(float *)&v40 - 0.0) / (1.0 - 0.0) * dbl_A46E48 - dbl_A3F3E8;
  }
  else
  {
    *(float *)&v40 = Tile_GetFloat(v16, a3);
    v39 = -v38;
    v17 = (v38 - v39) * ((*(float *)&v40 - 0.0) / (1.0 - 0.0)) + v39;
  }
  v18 = (_DWORD *)v2[arg0 + 0x25];
  v39 = v17;
  *(float *)&a3 = v39;
  v19 = Tile_GetFloat(v18, 0xFB5) - dbl_A2F928;
  v40 = LOWORD(v38) | 0xC00;
  *(_QWORD *)&Float = (__int64)v19;
  *(_DWORD *)&a2.m_dataLen = (__int64)v19;
  a2.m_data = 0;
  v20 = Tile_GetFloat(v18, 0xFB6);
  v21 = Double_To_SInt32(v20);
  sub_5539E0((int)a1, v21, (int)a2.m_data, *(unsigned int *)&a2.m_dataLen, *(float *)&a3);
  ArrayConstructor(v46, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  LOBYTE(v47) = 2;
  sub_5221C0((int *)v5, v46);
  sub_552C10(v46, (int)a1, (int)v44);
  *(float *)&a3 = 0.0;
  *(_DWORD *)&a2.m_dataLen = 0;
  a2.m_data = (char *)sub_521A10((TESNPC *)v5);
  v22 = (char *)sub_521A10((TESNPC *)v5);
  sub_552990((char *)v44, v22, (int)a2.m_data, a2.m_dataLen, *(float *)&a3);
  if ( Tile_GetFloat((_DWORD *)v2[arg0 + 0x25], 0xFB6) == *(float *)&SrcStr )
  {
    v23 = COERCE_FLOAT(
            ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
              TESDataHandler_g_PlayerRef,
              0));
    v38 = v23;
    if ( v23 != 0.0 )
    {
      v40 = 2;
      while ( 1 )
      {
        v24 = *(unsigned __int16 *)(LODWORD(v23) + 0xB6);
        v25 = 0.0;
        LODWORD(Float) = v24;
        v39 = 0.0;
        if ( v24 )
        {
          do
          {
            if ( (unsigned int)*(unsigned __int16 *)(LODWORD(v23) + 0xB6) > LODWORD(v25) )
            {
              v26 = *(_DWORD *)(*(_DWORD *)(LODWORD(v23) + 0xB0) + 4 * LODWORD(v25));
              if ( v26 )
              {
                v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x10))(v26);
                v28 = v27;
                if ( v27 )
                {
                  if ( !strcmp(*(const char **)(v27 + 8), "FaceGenHair") )
                  {
                    v41 = *(float *)(v5 + 0x1CC);
                    sub_550980(v27, v41);
                  }
                  v29 = sub_550790(v28);
                  v30 = v29;
                  if ( v29 )
                  {
                    if ( v29->__vftable[1].Unk_02(v29) )
                    {
                      Unk_02 = v30->__vftable[1].Unk_02;
                      *(float *)&a3 = 0.0;
                      *(float *)&a2.m_dataLen = 1.0;
                      a2.m_data = (char *)v28;
                      v32 = (char *)Unk_02(v30);
                      sub_558840(v32, (unsigned int *)v44, (int)a2.m_data, *(float *)&a2.m_dataLen, (float *)a3);
                      if ( !strcmp(*(const char **)(v28 + 8), "FaceGenHair") )
                      {
                        v41 = *(float *)(v5 + 0x1CC);
                        sub_550980(v28, v41);
                      }
                    }
                  }
                  v23 = v38;
                  v25 = v39;
                }
              }
            }
            ++LODWORD(v25);
            v39 = v25;
          }
          while ( LODWORD(v25) < LODWORD(Float) );
          v2 = v43;
        }
        v33 = COERCE_FLOAT(
                ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
                  TESDataHandler_g_PlayerRef,
                  0));
        v34 = v40-- == 1;
        v38 = v33;
        if ( v34 )
          break;
        v23 = v38;
      }
    }
    v13 = arg0;
  }
  v35 = (Tile *)v2[v13 + 0x25];
  *(float *)&a3 = Tile_GetFloat(v35, 0xFAE);
  Tile_SetFloat(v35, (_DWORD *)0xFB8, *(float *)&a3);
  LOBYTE(v47) = 1;
  _LN21(v46, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  LOBYTE(v47) = 0;
  _LN21(v44, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  v47 = 0xFFFFFFFF;
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
}
