// Full refresh (actorValue == -1) scans exactly 21 native Oblivion skills, counts strict TESClass major matches, publishes that count to the Stats XML, and orders major rows before one optional separator and all non-major rows. A targeted refresh updates only the requested native actor value and does not reorder rows.
void __thiscall StatsMenu_UpdateAttributesAndSkills(Tile **this, _DWORD *arg0)
{
  int v3; // ebx
  int v4; // ebp
  SkillActorValue AVFromGroupOffset; // ebp
  TESClass *BaseClass; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  _DWORD *v11; // ebx
  Tile *v12; // ecx
  AVCode v13; // edi
  Tile **v14; // esi
  TESClass *v15; // eax
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
  float actorValuea; // [esp+58h] [ebp+4h]
  float actorValueb; // [esp+58h] [ebp+4h]
  float actorValuec; // [esp+58h] [ebp+4h]
  float actorValued; // [esp+58h] [ebp+4h]
  float actorValuee; // [esp+58h] [ebp+4h]
  float actorValuef; // [esp+58h] [ebp+4h]
  signed int actorValue; // [esp+58h] [ebp+4h]

  v3 = 0; /*0x5da1ab*/
  v4 = 0; /*0x5da1ad*/
  v47 = 0; /*0x5da1b4*/
  a3 = 0; /*0x5da1b8*/
  if ( arg0 == (_DWORD *)0xFFFFFFFF ) /*0x5da1bc*/
  {
    do /*0x5da200*/
    {
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v3);// Oblivion-native mapping: group 2 converts skill offset 0..20 to SkillActorValue 0x0C..0x20 for the major-count scan. /*0x5da1d3*/
      if ( Actor_GetBaseClass((Actor *)reference) ) /*0x5da1d5*/
      {
        BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)reference); /*0x5da1e5*/
        if ( TESClass_IsMajorSkillAV(BaseClass, AVFromGroupOffset) )// Strict seven-slot TESClass membership test. Only a successful native match increments the UI major count; absent class or failure is the non-major/minor path. /*0x5da1ec*/
          ++a3; /*0x5da1f5*/
      }
      ++v3; /*0x5da1fa*/
    }
    while ( v3 < 0x15 ); /*0x5da200*/
    a2 = (float)a3;                             // Publish the exact number of matching native majors through tile trait 0xFB1. If nonzero, reserve one display-order slot as the major/non-major separator. /*0x5da20a*/
    Tile_SetFloat(*(this + 0xC), 0xFB1u, a2); /*0x5da212*/
    if ( a3 > 0 ) /*0x5da21c*/
      ++a3; /*0x5da21e*/
    v4 = a3; /*0x5da223*/
  }
  else if ( arg0 != (_DWORD *)8 ) /*0x5da879*/
  {
    goto LABEL_12; /*0x5da879*/
  }
  a3a = Player_GetAVModifierf((float *)reference, 0, 8); /*0x5da236*/
  a2a = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Health); /*0x5da258*/
  Tile_SetFloat(*(this + 0xA), 0xFB4u, a2a); /*0x5da260*/
  v8 = a3a; /*0x5da265*/
  if ( a3a < dbl_A2FC68 ) /*0x5da274*/
    v8 = 0.0; /*0x5da278*/
  actorValuea = v8; /*0x5da280*/
  actorValueb = (double)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 8) + actorValuea; /*0x5da29b*/
  Tile_SetFloat(*(this + 0xA), 0xFB5u, actorValueb); /*0x5da2ab*/
  Tile_SetFloat(*(this + 0xA), 0xFBAu, a3a); /*0x5da2c0*/
LABEL_12:
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)9 ) /*0x5da2cd*/
  {
    a3b = Player_GetAVModifierf((float *)reference, 0, 9); /*0x5da2e2*/
    a2b = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Magicka); /*0x5da304*/
    Tile_SetFloat(*(this + 0xA), 0xFB6u, a2b); /*0x5da30c*/
    v9 = a3b; /*0x5da311*/
    if ( a3b < dbl_A2FC68 ) /*0x5da320*/
      v9 = 0.0; /*0x5da324*/
    actorValuec = v9; /*0x5da32c*/
    actorValued = (double)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 9) + actorValuec; /*0x5da347*/
    Tile_SetFloat(*(this + 0xA), 0xFB7u, actorValued); /*0x5da357*/
    Tile_SetFloat(*(this + 0xA), 0xFBBu, a3b); /*0x5da36c*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)0xA ) /*0x5da379*/
  {
    a3c = Player_GetAVModifierf((float *)reference, 0, 0xA); /*0x5da38e*/
    a2c = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Fatigue); /*0x5da3b0*/
    Tile_SetFloat(*(this + 0xA), 0xFB8u, a2c); /*0x5da3b8*/
    v10 = a3c; /*0x5da3bd*/
    if ( a3c < dbl_A2FC68 ) /*0x5da3cc*/
      v10 = 0.0; /*0x5da3d0*/
    actorValuee = v10; /*0x5da3d8*/
    actorValuef = (double)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 0xA) + actorValuee; /*0x5da3f3*/
    Tile_SetFloat(*(this + 0xA), 0xFB9u, actorValuef); /*0x5da403*/
    Tile_SetFloat(*(this + 0xA), 0xFBCu, a3c); /*0x5da418*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || !arg0 ) /*0x5da424*/
  {
    a2d = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Strength); /*0x5da444*/
    Tile_SetFloat(*(this + 0xB), 0xFAFu, a2d); /*0x5da44c*/
    a2e = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 0); /*0x5da46a*/
    Tile_SetFloat(*(this + 0xB), 0xFB7u, a2e); /*0x5da472*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)1 ) /*0x5da47f*/
  {
    a2f = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Intelligence); /*0x5da49f*/
    Tile_SetFloat(*(this + 0xB), 0xFB0u, a2f); /*0x5da4a7*/
    a2g = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 1); /*0x5da4c5*/
    Tile_SetFloat(*(this + 0xB), 0xFB8u, a2g); /*0x5da4cd*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)2 ) /*0x5da4da*/
  {
    a2h = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Willpower); /*0x5da4fa*/
    Tile_SetFloat(*(this + 0xB), 0xFB1u, a2h); /*0x5da502*/
    a2i = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 2); /*0x5da520*/
    Tile_SetFloat(*(this + 0xB), 0xFB9u, a2i); /*0x5da528*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)3 ) /*0x5da535*/
  {
    a2j = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Agility); /*0x5da555*/
    Tile_SetFloat(*(this + 0xB), 0xFB2u, a2j); /*0x5da55d*/
    a2k = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 3); /*0x5da57b*/
    Tile_SetFloat(*(this + 0xB), 0xFBAu, a2k); /*0x5da583*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)4 ) /*0x5da590*/
  {
    a2l = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Speed); /*0x5da5b0*/
    Tile_SetFloat(*(this + 0xB), 0xFB3u, a2l); /*0x5da5b8*/
    a2m = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 4); /*0x5da5d6*/
    Tile_SetFloat(*(this + 0xB), 0xFBBu, a2m); /*0x5da5de*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)5 ) /*0x5da5eb*/
  {
    a2n = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Endurance); /*0x5da60b*/
    Tile_SetFloat(*(this + 0xB), 0xFB4u, a2n); /*0x5da613*/
    a2o = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 5); /*0x5da631*/
    Tile_SetFloat(*(this + 0xB), 0xFBCu, a2o); /*0x5da639*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)6 ) /*0x5da646*/
  {
    a2p = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Personality); /*0x5da666*/
    Tile_SetFloat(*(this + 0xB), 0xFB5u, a2p); /*0x5da66e*/
    a2q = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 6); /*0x5da68c*/
    Tile_SetFloat(*(this + 0xB), 0xFBDu, a2q); /*0x5da694*/
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF || arg0 == (_DWORD *)7 ) /*0x5da6a1*/
  {
    a2r = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Luck); /*0x5da6c1*/
    Tile_SetFloat(*(this + 0xB), 0xFB6u, a2r); /*0x5da6c9*/
    a2s = (float)Actor_GetBaseCalcAVi((int *)reference, v3, (int)arg0, (int)this, 7); /*0x5da6e7*/
    Tile_SetFloat(*(this + 0xB), 0xFBEu, a2s); /*0x5da6ef*/
  }
  v11 = arg0 + 0xFFFFFFFD; /*0x5da6f4*/
  if ( (unsigned int)(arg0 + 0xFFFFFFFD) <= 0x14 ) /*0x5da6fa*/
  {
    v12 = *(this + (_DWORD)v11 + 0x18); /*0x5da709*/
    if ( v12 ) /*0x5da70f*/
    {
      Tile_SetFloat(v12, 0xFAFu, 1.0); /*0x5da720*/
      a2t = Player_GetSkillProgressFraction(reference, (SkillActorValue)arg0); /*0x5da736*/
      Tile_SetFloat(*(this + (_DWORD)v11 + 0x18), 0xFB0u, a2t); /*0x5da73e*/
      a2u = (float)reference->vtbl->super.GetActorValue((Actor *)reference, (AVCode)arg0); /*0x5da761*/
      Tile_SetFloat(*(this + (_DWORD)v11 + 0x18), 0xFB1u, a2u); /*0x5da769*/
      a2v = (float)Actor_GetBaseCalcAVi((int *)reference, (int)v11, (int)arg0, (int)this, (int)arg0); /*0x5da787*/
      Tile_SetFloat(*(this + (_DWORD)v11 + 0x18), 0xFB5u, a2v); /*0x5da78f*/
    }
  }
  if ( arg0 == (_DWORD *)0xFFFFFFFF ) /*0x5da797*/
  {
    v13 = kActorVal_Armorer; /*0x5da79d*/
    v14 = this + 0x18; /*0x5da7a2*/
    do /*0x5da8a8*/
    {                                           // Full refresh iterates the 21 Stats skill-row pointers in native AV order (0x0C..0x20).
      if ( v13 - 0xC < 0x15 ) /*0x5da7b6*/
      {
        if ( *v14 ) /*0x5da7bc*/
        {
          Tile_SetFloat(*v14, 0xFAFu, 1.0); /*0x5da7d1*/
          a2w = Player_GetSkillProgressFraction(reference, (SkillActorValue)v13);// Every native skill row, major or non-major, receives Player_GetSkillProgressFraction in tile trait 0xFB0. /*0x5da7e5*/
          Tile_SetFloat(*v14, 0xFB0u, a2w); /*0x5da7ed*/
          a2x = (float)reference->vtbl->super.GetActorValue((Actor *)reference, v13);// Every native skill row receives the current actor value in tile trait 0xFB1; membership does not change this value source. /*0x5da80e*/
          Tile_SetFloat(*v14, 0xFB1u, a2x); /*0x5da816*/
          a2y = (float)Actor_GetBaseCalcAVi((int *)reference, (int)v11, v13, (int)v14, v13);// Every native skill row receives its base calculated actor value in tile trait 0xFB5. /*0x5da832*/
          Tile_SetFloat(*v14, 0xFB5u, a2y); /*0x5da83a*/
          if ( Actor_GetBaseClass((Actor *)reference) /*0x5da85c*/
            && (v15 = (TESClass *)Actor_GetBaseClass((Actor *)reference),
                TESClass_IsMajorSkillAV(v15, (SkillActorValue)v13)) )// Classify row ordering with the same strict seven-slot predicate. Missing base class or false result sends the row to the non-major/minor section.
          {
            actorValue = (signed int)v47; /*0x5da869*/
            v47 = (_DWORD *)((char *)v47 + 1); /*0x5da870*/
          }
          else
          {
            actorValue = v4++; /*0x5da884*/
          }
          a2z = (float)actorValue;              // Select display ordinal: majors consume the leading counter; non-majors consume the counter initialized to majorCount plus the optional separator. /*0x5da892*/
          Tile_SetFloat(*v14, 0xFAAu, a2z);     // Write the computed major-first/non-major-after-separator display ordinal to tile trait 0xFAA. /*0x5da89a*/
        }
      }
      ++v13; /*0x5da89f*/
      ++v14; /*0x5da8a2*/
    }
    while ( v13 <= kActorVal_Aggression ); /*0x5da8a8*/
  }
}
