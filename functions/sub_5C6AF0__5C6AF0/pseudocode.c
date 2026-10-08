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
  char a1[96]; // [esp+30h] [ebp-6Ch] BYREF
  unsigned int v40; // [esp+98h] [ebp-4h]

  ArrayConstructor( /*0x5c6b2f*/
    a1,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v4 = reference; /*0x5c6b34*/
  GetBaseForm = reference->vtbl->super.super.super.GetBaseForm; /*0x5c6b3c*/
  v40 = 0; /*0x5c6b44*/
  *(float *)&a2 = 0.0; /*0x5c6b50*/
  v6 = (TESNPC *)GetBaseForm((TESObjectREFR *)v4); /*0x5c6b53*/
  race = v6->member.form.race; /*0x5c6b55*/
  v38 = v6; /*0x5c6b63*/
  v8 = (char *)TESNPC_GetActiveFaceGenDeltaParameters(v6); /*0x5c6b67*/
  FaceGenHeadParameters_Combine((char *)race->unk12, v8, (int)a1, 0, 0.0); /*0x5c6b74*/
  v36 = *(_DWORD **)(arg0 + 0x34); /*0x5c6b88*/
  v9 = v36; /*0x5c6b80*/
  if ( v36 ) /*0x5c6b8c*/
  {
    while ( 1 ) /*0x5c6ba4*/
    {
      v10 = (Tile *)v9[2]; /*0x5c6ba4*/
      if ( v10 != a3 ) /*0x5c6bae*/
      {
        v11 = (const char *)stru_B39000; /*0x5c6bb4*/
        a2 = (_DWORD *)0xFA8; /*0x5c6bb9*/
        LODWORD(v37) = &v32; /*0x5c6bc3*/
        v32.m_data = 0; /*0x5c6bc9*/
        v32.m_dataLen = 0; /*0x5c6bcb*/
        v32.m_bufLen = 0; /*0x5c6bcf*/
        BSStringT_Set(&v32, v11, 0); /*0x5c6bd3*/
        v12 = (_DWORD *)RaceSexMenu_GetCategoryTileByName(this, (unsigned __int8 *)v32.m_data, *(int *)&v32.m_dataLen); /*0x5c6be7*/
        *(double *)&v37 = Tile_GetFloat((_DWORD *)*(this + 1), 0xFAE); /*0x5c6bee*/
        Float = Tile_GetFloat(v12, (int)a2); /*0x5c6bf4*/
        v14 = v6->member.form.race; /*0x5c6bfd*/
        if ( Float == *(double *)&v37 ) /*0x5c6c0a*/
        {
          if ( *(float *)&v14->unk09C[2] <= 0.0 ) /*0x5c6c17*/
            v15 = *(float *)&dword_A46C30; /*0x5c6c21*/
          else
            v15 = *(float *)&v14->unk09C[2]; /*0x5c6c19*/
        }
        else if ( *(float *)&v14->unk09C[1] <= 0.0 ) /*0x5c6c34*/
        {
          v15 = flt_A31E2C; /*0x5c6c3e*/
        }
        else
        {
          v15 = *(float *)&v14->unk09C[1]; /*0x5c6c36*/
        }
        v35 = v15; /*0x5c6c49*/
        v16 = Tile_GetFloat(v10, 0xFB4); /*0x5c6c4f*/
        v17 = Double_To_SInt32(v16); /*0x5c6c54*/
        v18 = Tile_GetFloat((_DWORD *)*(this + v17 + 0x25), 0xFB6); /*0x5c6c67*/
        v19 = Double_To_SInt32(v18); /*0x5c6c6c*/
        a2 = (_DWORD *)0xFB4; /*0x5c6c73*/
        if ( v19 ) /*0x5c6c7a*/
        {
          v26 = Tile_GetFloat(v10, (int)a2); /*0x5c6d4d*/
          v27 = (_DWORD *)*(this + Double_To_SInt32(v26) + 0x25); /*0x5c6d57*/
          v28 = Tile_GetFloat(v10, 0xFB4); /*0x5c6d65*/
          v29 = (_DWORD *)*(this + Double_To_SInt32(v28) + 0x25); /*0x5c6d6f*/
          v37 = (__int64)(Tile_GetFloat(v27, 0xFB5) - dbl_A2F928); /*0x5c6da0*/
          a2 = (_DWORD *)v37; /*0x5c6da8*/
          *(_DWORD *)&v32.m_dataLen = 0; /*0x5c6da9*/
          v30 = Tile_GetFloat(v29, 0xFB6); /*0x5c6db4*/
          v31 = Double_To_SInt32(v30); /*0x5c6db9*/
          *(float *)&v37 = FaceGenHeadParameters_GetSliderValue((int)a1, v31, *(int *)&v32.m_dataLen, (unsigned int)a2); /*0x5c6dc9*/
          Tile_SetFloat(v10, (_DWORD *)0xFB1, flt_A6D2D8); /*0x5c6de0*/
          *(float *)&v37 = (1.0 - 0.0) * ((*(float *)&v37 - dbl_A6D3C8) / dbl_A46E48) + 0.0; /*0x5c6e01*/
        }
        else
        {
          v20 = Tile_GetFloat(v10, (int)a2); /*0x5c6c80*/
          v21 = (_DWORD *)*(this + Double_To_SInt32(v20) + 0x25); /*0x5c6c8a*/
          v22 = Tile_GetFloat(v10, 0xFB4); /*0x5c6c98*/
          v23 = (_DWORD *)*(this + Double_To_SInt32(v22) + 0x25); /*0x5c6ca2*/
          v37 = (__int64)(Tile_GetFloat(v21, 0xFB5) - dbl_A2F928); /*0x5c6cd3*/
          a2 = (_DWORD *)v37; /*0x5c6cdb*/
          *(_DWORD *)&v32.m_dataLen = 0; /*0x5c6cdc*/
          v24 = Tile_GetFloat(v23, 0xFB6); /*0x5c6ce7*/
          v25 = Double_To_SInt32(v24); /*0x5c6cec*/
          *(float *)&v37 = FaceGenHeadParameters_GetSliderValue((int)a1, v25, *(int *)&v32.m_dataLen, (unsigned int)a2); /*0x5c6cfc*/
          v34 = -v35; /*0x5c6d0b*/
          Tile_SetFloat(v10, (_DWORD *)0xFB1, flt_A6D2D8); /*0x5c6d1d*/
          *(float *)&v37 = (1.0 - 0.0) * ((*(float *)&v37 - v34) / (v35 - v34)) + 0.0; /*0x5c6d40*/
        }
        Tile_SetFloat(v10, (_DWORD *)0xFB1, *(float *)&v37); /*0x5c6e14*/
        Tile_SetFloat(v10, (_DWORD *)0xFB1, 0.0); /*0x5c6e26*/
        *(float *)&a2 = Tile_GetFloat(v10, 0xFAE); /*0x5c6e38*/
        Tile_SetFloat(v10, (_DWORD *)0xFB8, *(float *)&a2); /*0x5c6e42*/
        v6 = v38; /*0x5c6e47*/
        v9 = v36; /*0x5c6e4b*/
      }
      v36 = (_DWORD *)*v9; /*0x5c6e55*/
      if ( !v36 ) /*0x5c6e59*/
        break; /*0x5c6e59*/
      v9 = v36; /*0x5c6ba0*/
    }
  }
  v40 = 0xFFFFFFFF; /*0x5c6e6d*/
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c6e78*/
}
