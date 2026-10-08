void __thiscall sub_53C1F0(Moon *this, int a2, int a3)
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
  float angleX; // [esp+18h] [ebp-84h]
  float v30; // [esp+18h] [ebp-84h]
  float v31; // [esp+1Ch] [ebp-80h]
  float v32; // [esp+1Ch] [ebp-80h]
  float v33; // [esp+28h] [ebp-74h]
  NiMatrix33 v34; // [esp+30h] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+54h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+78h] [ebp-24h] BYREF

  nullsub_returnVoid_2arg(a2, a3); /*0x53c20c*/
  if ( *((float *)this + 0x1E) == dbl_A3A5B0 ) /*0x53c21f*/
  {
    *((float *)this + 0x1E) = 0.0; /*0x53c223*/
    *((float *)this + 0x1D) = flt_A430CC; /*0x53c22c*/
  }
  if ( sub_45A500(g_TESSaveLoadGame) ) /*0x53c235*/
  {
    GameDaysPassed = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x53c248*/
    v5 = (double)(GameDaysPassed - 1); /*0x53c255*/
    if ( GameDaysPassed - 1 < 0 ) /*0x53c259*/
      v5 = v5 + flt_A2FC78; /*0x53c25b*/
    *((float *)this + 0x1E) = -(v5 * dbl_A2F920); /*0x53c269*/
    *((float *)this + 0x1D) = flt_A430CC; /*0x53c272*/
  }
  v25 = *(float *)(a2 + 0xD0) - *((float *)this + 0x1E); /*0x53c27e*/
  v6 = 0.0; /*0x53c282*/
  v7 = v25; /*0x53c284*/
  if ( v25 < 0.0 ) /*0x53c28f*/
  {
    v26 = v7 + dbl_A2F920; /*0x53c297*/
    v7 = v26; /*0x53c29b*/
  }
  v31 = v7 * (*((float *)this + 0x19) * dbl_A2FCC8) + *((float *)this + 0x1D); /*0x53c2ad*/
  *((float *)this + 0x1D) = v31; /*0x53c2b5*/
  v8 = dbl_A56CA0; /*0x53c2bc*/
  if ( v31 < 0.0 ) /*0x53c2c5*/
  {
    while ( 1 ) /*0x53c2d2*/
    {
      *((float *)this + 0x1D) = *((float *)this + 0x1D) + v8; /*0x53c2d2*/
      v11 = v8; /*0x53c2d5*/
      v12 = v6; /*0x53c2d5*/
      v9 = v11; /*0x53c2d5*/
      if ( v12 <= *((float *)this + 0x1D) ) /*0x53c2df*/
        break; /*0x53c2df*/
      v10 = v12; /*0x53c2cb*/
      v8 = v9; /*0x53c2cb*/
      v6 = v10; /*0x53c2cb*/
    }
  }
  else
  {
    v9 = v8; /*0x53c2c7*/
  }
  for ( i = flt_A4D020; i <= *((float *)this + 0x1D); *((float *)this + 0x1D) = *((float *)this + 0x1D) - v9 ) /*0x53c2f1*/
    ; /*0x53c2f8*/
  *((float *)this + 0x1E) = *(float *)(a2 + 0xD0); /*0x53c311*/
  v32 = sub_53C030((float *)this); /*0x53c319*/
  v27 = sub_53C100(v14); /*0x53c325*/
  v28 = *(float *)(*(_DWORD *)(a2 + 0x24) + 0xC); /*0x53c32c*/
  if ( v28 <= (double)v27 ) /*0x53c341*/
    v27 = v28; /*0x53c343*/
  v15 = *((_DWORD *)this + 0x1C); /*0x53c34b*/
  if ( v15 == 2 || v15 == 1 && v32 <= 0.0 && v27 <= 0.0 ) /*0x53c36d*/
  {
    v16 = 0; /*0x53c36f*/
    if ( this == Sky_CreateOrGetGlobalObject()->masserMoon ) /*0x53c379*/
    {
      v16 = sub_540E90; /*0x53c37b*/
    }
    else if ( this == Sky_CreateOrGetGlobalObject()->secundaMoon ) /*0x53c38a*/
    {
      v16 = sub_540EC0; /*0x53c38c*/
    }
    sub_53FBE0(*((_DWORD *)this + 4), *((char **)this + 2 * unk_B365BC + 6), v16, *((_DWORD *)this + 0x1C) == 2); /*0x53c3a9*/
    *((_DWORD *)this + 0x1C) = 0; /*0x53c3b1*/
  }
  v17 = *(_DWORD *)(a2 + 0xDC); /*0x53c3bc*/
  if ( v17 == 3 || v17 == 2 ) /*0x53c3ca*/
  {
    v18 = *((_DWORD *)this + 1); /*0x53c3d0*/
    if ( (*(_BYTE *)(v18 + 0x18) & 0x20) == 0 ) /*0x53c3db*/
    {
      *(_WORD *)(v18 + 0x18) |= 1u; /*0x53c3dd*/
      return; /*0x53c3eb*/
    }
    angleX = -*((float *)this + 0x1D) * dbl_A31C78; /*0x53c3fe*/
    NiMatrix33_InitRotationXTransposed(&v34, angleX); /*0x53c409*/
    v30 = *((float *)this + 0x1A) * dbl_A31C78; /*0x53c41c*/
    NiMatrix33_InitRotationZ(&right, v30); /*0x53c427*/
    v19 = 0.0; /*0x53c442*/
    qmemcpy((void *)(*((_DWORD *)this + 1) + 0x30), NiMAtrix33_Multiply(&v34, &out, &right), 0x24u); /*0x53c454*/
    if ( v32 <= 0.0 ) /*0x53c45b*/
    {
      if ( v27 <= 0.0 ) /*0x53c468*/
      {
        *(_WORD *)(*((_DWORD *)this + 1) + 0x18) |= 1u; /*0x53c46f*/
        return; /*0x53c47f*/
      }
      v19 = 0.0; /*0x53c482*/
    }
    *(_WORD *)(*((_DWORD *)this + 1) + 0x18) &= ~1u; /*0x53c48e*/
    if ( v32 > v19 && (*(_BYTE *)(*((_DWORD *)this + 4) + 0x18) & 0x20) != 0 ) /*0x53c4a8*/
    {
      *(_WORD *)(*((_DWORD *)this + 2) + 0x18) &= ~1u; /*0x53c4b3*/
      if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4) ) /*0x53c4bc*/
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4); /*0x53c4ca*/
        if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB ) /*0x53c4e4*/
        {
          v21 = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4); /*0x53c4eb*/
          if ( v21 ) /*0x53c4f2*/
            *(float *)&v21[5].vtbl = v32; /*0x53c4f8*/
        }
      }
      v19 = 0.0; /*0x53c4fb*/
    }
    else
    {
      *(_WORD *)(*((_DWORD *)this + 2) + 0x18) |= 1u; /*0x53c5b5*/
    }
    if ( v19 < v27 && (*(_BYTE *)(*((_DWORD *)this + 5) + 0x18) & 0x20) != 0 ) /*0x53c517*/
    {
      *(_WORD *)(*((_DWORD *)this + 3) + 0x18) &= ~1u; /*0x53c520*/
      if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4) ) /*0x53c529*/
      {
        v22 = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4); /*0x53c53b*/
        if ( (*((int (__thiscall **)(NiProperty *))v22->vtbl + 0x15))(v22) == 0xB ) /*0x53c555*/
        {
          v23 = (float *)NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4); /*0x53c55c*/
          if ( v23 ) /*0x53c563*/
          {
            v24 = *(float *)(a2 + 0x40); /*0x53c584*/
            v33 = *(float *)(a2 + 0x44); /*0x53c588*/
            v23[0x1B] = *(float *)(a2 + 0x3C); /*0x53c58c*/
            v23[0x1C] = v24; /*0x53c597*/
            v23[0x1D] = v33; /*0x53c5a2*/
            v23[0x1E] = v27; /*0x53c5a5*/
          }
        }
      }
    }
    else
    {
      *(_WORD *)(*((_DWORD *)this + 3) + 0x18) |= 1u; /*0x53c5c1*/
    }
  }
}
