void __thiscall sub_5A5B50(Tile **this, int a2)
{
  double v3; // st7
  bool v4; // c0
  bool v5; // c3
  double v6; // st7
  double v7; // st7
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  double v11; // st7
  double v12; // st7
  double v13; // st7
  bool v14; // c0
  bool v15; // c3
  double v16; // st7
  double v17; // st7
  float a3; // [esp+8h] [ebp-10h]
  float a3a; // [esp+8h] [ebp-10h]
  float a3b; // [esp+8h] [ebp-10h]
  double v21; // [esp+10h] [ebp-8h]
  double v22; // [esp+10h] [ebp-8h]
  float v23; // [esp+10h] [ebp-8h]
  double v24; // [esp+10h] [ebp-8h]
  double v25; // [esp+10h] [ebp-8h]
  float v26; // [esp+10h] [ebp-8h]
  double AVModifierf; // [esp+10h] [ebp-8h]
  double v28; // [esp+10h] [ebp-8h]
  float v29; // [esp+10h] [ebp-8h]
  int v30; // [esp+1Ch] [ebp+4h]
  float v31; // [esp+1Ch] [ebp+4h]
  int v32; // [esp+1Ch] [ebp+4h]
  float v33; // [esp+1Ch] [ebp+4h]
  int v34; // [esp+1Ch] [ebp+4h]
  float v35; // [esp+1Ch] [ebp+4h]

  switch ( a2 )
  {
    case 8:
      AVModifierf = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 8);
      v13 = (double)(int)Actor_GetBaseCalcAVi(8) + AVModifierf;
      v14 = v13 > 0.0;
      v15 = 0.0 == v13;
      v16 = 0.0;
      if ( v14 || v15 )
      {
        v28 = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 8);
        v16 = (double)(int)Actor_GetBaseCalcAVi(8) + v28;
      }
      v29 = v16;
      v17 = 0.0;
      if ( 0.0 != v29 )
      {
        if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
               (Actor *)TESDataHandler_g_PlayerRef,
               kActorVal_Health) >= 0 )
          v34 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                  (Actor *)TESDataHandler_g_PlayerRef,
                  kActorVal_Health);
        else
          v34 = 0;
        v35 = (double)v34 / v29;
        v17 = v35;
      }
      a3b = v17;
      Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFAE, a3b);
      break;
    case 9:
      v24 = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 9);
      v8 = (double)(int)Actor_GetBaseCalcAVi(9) + v24;
      v9 = v8 > 0.0;
      v10 = 0.0 == v8;
      v11 = 0.0;
      if ( v9 || v10 )
      {
        v25 = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 9);
        v11 = (double)(int)Actor_GetBaseCalcAVi(9) + v25;
      }
      v26 = v11;
      v12 = 0.0;
      if ( 0.0 != v26 )
      {
        if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
               (Actor *)TESDataHandler_g_PlayerRef,
               kActorVal_Magicka) >= 0 )
          v32 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                  (Actor *)TESDataHandler_g_PlayerRef,
                  kActorVal_Magicka);
        else
          v32 = 0;
        v33 = (double)v32 / v26;
        v12 = v33;
      }
      a3a = v12;
      Tile_SetFloat(*(this + 0xC), (_DWORD *)0xFAE, a3a);
      break;
    case 0xA:
      v21 = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 0xA);
      v3 = (double)(int)Actor_GetBaseCalcAVi(0xA) + v21;
      v4 = v3 > 0.0;
      v5 = 0.0 == v3;
      v6 = 0.0;
      if ( v4 || v5 )
      {
        v22 = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 0xA);
        v6 = (double)(int)Actor_GetBaseCalcAVi(0xA) + v22;
      }
      v23 = v6;
      v7 = 0.0;
      if ( 0.0 != v23 )
      {
        if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
               (Actor *)TESDataHandler_g_PlayerRef,
               kActorVal_Fatigue) >= 0 )
          v30 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                  (Actor *)TESDataHandler_g_PlayerRef,
                  kActorVal_Fatigue);
        else
          v30 = 0;
        v31 = (double)v30 / v23;
        v7 = v31;
      }
      a3 = v7;
      Tile_SetFloat(*(this + 0xD), (_DWORD *)0xFAE, a3);
      break;
  }
}
