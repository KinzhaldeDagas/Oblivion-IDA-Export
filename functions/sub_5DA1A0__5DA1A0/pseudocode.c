void __thiscall sub_5DA1A0(Tile **this, _DWORD *arg0)
{
  int v3; // ebx
  _DWORD *v4; // ebp
  int AVFromGroupOffset; // ebp
  _DWORD *BaseClass; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  _DWORD *v11; // ebx
  Tile *v12; // ecx
  AVCode v13; // edi
  Tile **v14; // esi
  _DWORD *v15; // eax
  float a2; // [esp+34h] [ebp-20h]
  float a2a; // [esp+34h] [ebp-20h]
  float a2b; // [esp+34h] [ebp-20h]
  float a2c; // [esp+34h] [ebp-20h]
  float a2d; // [esp+34h] [ebp-20h]
  float a2e; // [esp+34h] [ebp-20h]
  float a2f; // [esp+34h] [ebp-20h]
  float a2g; // [esp+34h] [ebp-20h]
  float a2h; // [esp+34h] [ebp-20h]
  float a2i; // [esp+34h] [ebp-20h]
  float a2j; // [esp+34h] [ebp-20h]
  float a2k; // [esp+34h] [ebp-20h]
  float a2l; // [esp+34h] [ebp-20h]
  float a2m; // [esp+34h] [ebp-20h]
  float a2n; // [esp+34h] [ebp-20h]
  float a2o; // [esp+34h] [ebp-20h]
  float a2p; // [esp+34h] [ebp-20h]
  float a2q; // [esp+34h] [ebp-20h]
  float a2r; // [esp+34h] [ebp-20h]
  float a2s; // [esp+34h] [ebp-20h]
  float a2t; // [esp+34h] [ebp-20h]
  float a2u; // [esp+34h] [ebp-20h]
  float a2v; // [esp+34h] [ebp-20h]
  float a2w; // [esp+34h] [ebp-20h]
  float a2x; // [esp+34h] [ebp-20h]
  float a2y; // [esp+34h] [ebp-20h]
  float a2z; // [esp+34h] [ebp-20h]
  int a3; // [esp+48h] [ebp-Ch]
  float a3a; // [esp+48h] [ebp-Ch]
  float a3b; // [esp+48h] [ebp-Ch]
  float a3c; // [esp+48h] [ebp-Ch]
  _DWORD *v47; // [esp+4Ch] [ebp-8h]
  float v48; // [esp+58h] [ebp+4h]
  float v49; // [esp+58h] [ebp+4h]
  float v50; // [esp+58h] [ebp+4h]
  float v51; // [esp+58h] [ebp+4h]
  float v52; // [esp+58h] [ebp+4h]
  float v53; // [esp+58h] [ebp+4h]
  _DWORD *v54; // [esp+58h] [ebp+4h]

  v3 = 0;
  v4 = 0;
  v47 = 0;
  a3 = 0;
  if ( arg0 == (_DWORD *)0xFFFFFFFF )
  {
    do
    {
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v3);
      if ( Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef) )
      {
        BaseClass = (_DWORD *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
        if ( sub_51C090(BaseClass, AVFromGroupOffset) )
          ++a3;
      }
      ++v3;
    }
    while ( v3 < 0x15 );
    a2 = (float)a3;
    Tile_SetFloat(*(this + 0xC), (_DWORD *)0xFB1, a2);
    if ( a3 > 0 )
      ++a3;
    v4 = (_DWORD *)a3;
  }
  else if ( arg0 != (_DWORD *)8 )
  {
    goto LABEL_12;
  }
  a3a = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 8);
  a2a = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                 (Actor *)TESDataHandler_g_PlayerRef,
                 kActorVal_Health);
  Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFB4, a2a);
  v8 = a3a;
  if ( a3a < dbl_A2FC68 )
    v8 = 0.0;
  v48 = v8;
  v49 = (double)(int)Actor_GetBaseCalcAVi(8) + v48;
  Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFB5, v49);
  Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFBA, a3a);
LABEL_12:
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)9 )
  {
    a3b = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 9);
    a2b = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Magicka);
    Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFB6, a2b);
    v9 = a3b;
    if ( a3b < dbl_A2FC68 )
      v9 = 0.0;
    v50 = v9;
    v51 = (double)(int)Actor_GetBaseCalcAVi(9) + v50;
    Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFB7, v51);
    Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFBB, a3b);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)0xA )
  {
    a3c = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 0xA);
    a2c = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Fatigue);
    Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFB8, a2c);
    v10 = a3c;
    if ( a3c < dbl_A2FC68 )
      v10 = 0.0;
    v52 = v10;
    v53 = (double)(int)Actor_GetBaseCalcAVi(0xA) + v52;
    Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFB9, v53);
    Tile_SetFloat(*(this + 0xA), (_DWORD *)0xFBC, a3c);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || !arg0 )
  {
    a2d = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Strength);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFAF, a2d);
    a2e = (float)(int)Actor_GetBaseCalcAVi(0);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB7, a2e);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)1 )
  {
    a2f = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Intelligence);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB0, a2f);
    a2g = (float)(int)Actor_GetBaseCalcAVi(1);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB8, a2g);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)2 )
  {
    a2h = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Willpower);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB1, a2h);
    a2i = (float)(int)Actor_GetBaseCalcAVi(2);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB9, a2i);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)3 )
  {
    a2j = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Agility);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB2, a2j);
    a2k = (float)(int)Actor_GetBaseCalcAVi(3);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFBA, a2k);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)4 )
  {
    a2l = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Speed);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB3, a2l);
    a2m = (float)(int)Actor_GetBaseCalcAVi(4);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFBB, a2m);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)5 )
  {
    a2n = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Endurance);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB4, a2n);
    a2o = (float)(int)Actor_GetBaseCalcAVi(5);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFBC, a2o);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)6 )
  {
    a2p = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Personality);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB5, a2p);
    a2q = (float)(int)Actor_GetBaseCalcAVi(6);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFBD, a2q);
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)7 )
  {
    a2r = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Luck);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFB6, a2r);
    a2s = (float)(int)Actor_GetBaseCalcAVi(7);
    Tile_SetFloat(*(this + 0xB), (_DWORD *)0xFBE, a2s);
  }
  v11 = arg0 + 0xFFFFFFFD;
  if ( (unsigned int)(arg0 + 0xFFFFFFFD) <= 0x14 )
  {
    v12 = *(this + (_DWORD)v11 + 0x18);
    if ( v12 )
    {
      Tile_SetFloat(v12, (_DWORD *)0xFAF, 1.0);
      a2t = sub_65FCA0((float *)TESDataHandler_g_PlayerRef, (int)arg0);
      Tile_SetFloat(*(this + (_DWORD)v11 + 0x18), (_DWORD *)0xFB0, a2t);
      a2u = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                     (Actor *)TESDataHandler_g_PlayerRef,
                     (AVCode)arg0);
      Tile_SetFloat(*(this + (_DWORD)v11 + 0x18), (_DWORD *)0xFB1, a2u);
      a2v = (float)(int)Actor_GetBaseCalcAVi(arg0);
      Tile_SetFloat(*(this + (_DWORD)v11 + 0x18), (_DWORD *)0xFB5, a2v);
    }
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF )
  {
    v13 = kActorVal_Armorer;
    v14 = this + 0x18;
    do
    {
      if ( v13 - 0xC < 0x15 )
      {
        if ( *v14 )
        {
          Tile_SetFloat(*v14, (_DWORD *)0xFAF, 1.0);
          a2w = sub_65FCA0((float *)TESDataHandler_g_PlayerRef, v13);
          Tile_SetFloat(*v14, (_DWORD *)0xFB0, a2w);
          a2x = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, v13);
          Tile_SetFloat(*v14, (_DWORD *)0xFB1, a2x);
          a2y = (float)(int)Actor_GetBaseCalcAVi(v13);
          Tile_SetFloat(*v14, (_DWORD *)0xFB5, a2y);
          if ( Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef)
            && (v15 = (_DWORD *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef), sub_51C090(v15, v13)) )
          {
            v54 = v47;
            v47 = (_DWORD *)((char *)v47 + 1);
          }
          else
          {
            v54 = v4;
            v4 = (_DWORD *)((char *)v4 + 1);
          }
          a2z = (float)(int)v54;
          Tile_SetFloat(*v14, (_DWORD *)0xFAA, a2z);
        }
      }
      ++v13;
      ++v14;
    }
    while ( v13 <= kActorVal_Aggression );
  }
}
