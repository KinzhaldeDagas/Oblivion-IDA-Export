void __thiscall sub_53C1F0(Moon *this, int a2, float a3)
{
  int GameDaysPassed; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st7
  double v10; // rt0
  double v11; // rt1
  double v12; // st6
  double i; // st6
  float *v14; // ecx
  int v15; // eax
  Sky *(__cdecl *v16)(int); // esi
  int v17; // eax
  int v18; // eax
  double v19; // st7
  NiProperty *NiPropertyByID; // eax
  NiProperty *v21; // eax
  NiProperty *v22; // eax
  float *v23; // eax
  float v24; // ecx
  float v25; // [esp+14h] [ebp-88h]
  float v26; // [esp+14h] [ebp-88h]
  float v27; // [esp+14h] [ebp-88h]
  float v28; // [esp+18h] [ebp-84h]
  float v29; // [esp+18h] [ebp-84h]
  float v30; // [esp+18h] [ebp-84h]
  float v31; // [esp+1Ch] [ebp-80h]
  float v32; // [esp+1Ch] [ebp-80h]
  float v33; // [esp+28h] [ebp-74h]
  float v34[9]; // [esp+30h] [ebp-6Ch] BYREF
  float v35[9]; // [esp+54h] [ebp-48h] BYREF
  float v36[9]; // [esp+78h] [ebp-24h] BYREF

  nullsub_returnVoid_2arg(a2, LODWORD(a3));
  if ( *((float *)this + 0x1E) == dbl_A3A5B0 )
  {
    *((float *)this + 0x1E) = 0.0;
    *((float *)this + 0x1D) = flt_A430CC;
  }
  if ( sub_45A500(SaveLoad_CurrentSavegame) )
  {
    GameDaysPassed = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
    v5 = (double)(GameDaysPassed - 1);
    if ( GameDaysPassed - 1 < 0 )
      v5 = v5 + flt_A2FC78;
    *((float *)this + 0x1E) = -(v5 * dbl_A2F920);
    *((float *)this + 0x1D) = flt_A430CC;
  }
  v25 = *(float *)(a2 + 0xD0) - *((float *)this + 0x1E);
  v6 = 0.0;
  v7 = v25;
  if ( v25 < 0.0 )
  {
    v26 = v7 + dbl_A2F920;
    v7 = v26;
  }
  v31 = v7 * (*((float *)this + 0x19) * dbl_A2FCC8) + *((float *)this + 0x1D);
  *((float *)this + 0x1D) = v31;
  v8 = dbl_A56CA0;
  if ( v31 < 0.0 )
  {
    while ( 1 )
    {
      *((float *)this + 0x1D) = *((float *)this + 0x1D) + v8;
      v11 = v8;
      v12 = v6;
      v9 = v11;
      if ( v12 <= *((float *)this + 0x1D) )
        break;
      v10 = v12;
      v8 = v9;
      v6 = v10;
    }
  }
  else
  {
    v9 = v8;
  }
  for ( i = flt_A4D020; i <= *((float *)this + 0x1D); *((float *)this + 0x1D) = *((float *)this + 0x1D) - v9 )
    ;
  *((float *)this + 0x1E) = *(float *)(a2 + 0xD0);
  v32 = sub_53C030((float *)this);
  v27 = sub_53C100(v14);
  v28 = *(float *)(*(_DWORD *)(a2 + 0x24) + 0xC);
  if ( v28 <= (double)v27 )
    v27 = v28;
  v15 = *((_DWORD *)this + 0x1C);
  if ( v15 == 2 || v15 == 1 && v32 <= 0.0 && v27 <= 0.0 )
  {
    v16 = 0;
    if ( this == Sky_CreateOrGetGlobalObject()->masserMoon )
    {
      v16 = sub_540E90;
    }
    else if ( this == Sky_CreateOrGetGlobalObject()->secundaMoon )
    {
      v16 = sub_540EC0;
    }
    sub_53FBE0(*((_DWORD *)this + 4), *((char **)this + 2 * dword_B365BC + 6), v16, *((_DWORD *)this + 0x1C) == 2);
    *((_DWORD *)this + 0x1C) = 0;
  }
  v17 = *(_DWORD *)(a2 + 0xDC);
  if ( v17 == 3 || v17 == 2 )
  {
    v18 = *((_DWORD *)this + 1);
    if ( (*(_BYTE *)(v18 + 0x18) & 0x20) == 0 )
    {
      *(_WORD *)(v18 + 0x18) |= 1u;
      return;
    }
    v29 = -*((float *)this + 0x1D) * dbl_A31C78;
    NiMatrix33_InitRotationTransposedTransform___(v34, v29);
    v30 = *((float *)this + 0x1A) * dbl_A31C78;
    NiMatrix33_InitRotationTransform(v35, v30);
    v19 = 0.0;
    qmemcpy((void *)(*((_DWORD *)this + 1) + 0x30), NiMAtrix33_Multiply(v34, v36, v35), 0x24u);
    if ( v32 <= 0.0 )
    {
      if ( v27 <= 0.0 )
      {
        *(_WORD *)(*((_DWORD *)this + 1) + 0x18) |= 1u;
        return;
      }
      v19 = 0.0;
    }
    *(_WORD *)(*((_DWORD *)this + 1) + 0x18) &= ~1u;
    if ( v32 > v19 && (*(_BYTE *)(*((_DWORD *)this + 4) + 0x18) & 0x20) != 0 )
    {
      *(_WORD *)(*((_DWORD *)this + 2) + 0x18) &= ~1u;
      if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4) )
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4);
        if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB )
        {
          v21 = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4);
          if ( v21 )
            *(float *)&v21[5].vtbl = v32;
        }
      }
      v19 = 0.0;
    }
    else
    {
      *(_WORD *)(*((_DWORD *)this + 2) + 0x18) |= 1u;
    }
    if ( v19 < v27 && (*(_BYTE *)(*((_DWORD *)this + 5) + 0x18) & 0x20) != 0 )
    {
      *(_WORD *)(*((_DWORD *)this + 3) + 0x18) &= ~1u;
      if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4) )
      {
        v22 = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4);
        if ( (*((int (__thiscall **)(NiProperty *))v22->vtbl + 0x15))(v22) == 0xB )
        {
          v23 = (float *)NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4);
          if ( v23 )
          {
            v24 = *(float *)(a2 + 0x40);
            v33 = *(float *)(a2 + 0x44);
            v23[0x1B] = *(float *)(a2 + 0x3C);
            v23[0x1C] = v24;
            v23[0x1D] = v33;
            v23[0x1E] = v27;
          }
        }
      }
    }
    else
    {
      *(_WORD *)(*((_DWORD *)this + 3) + 0x18) |= 1u;
    }
  }
}
