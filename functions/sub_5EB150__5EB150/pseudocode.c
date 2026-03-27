char __thiscall sub_5EB150(TESObjectREFR *this, float *a2, char arg4)
{
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v5; // esi
  UInt8 cellProcessLevel; // al
  TESObjectCELL *v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // esi
  float v12; // eax
  double v13; // st7
  double v15; // st7
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v17; // esi
  char v18; // al
  char v19; // [esp+27h] [ebp-21h]
  float a3; // [esp+28h] [ebp-20h] BYREF
  float v21; // [esp+2Ch] [ebp-1Ch] BYREF
  float v22; // [esp+30h] [ebp-18h]
  float v23; // [esp+34h] [ebp-14h]
  float v24; // [esp+38h] [ebp-10h]
  float v25; // [esp+3Ch] [ebp-Ch]
  float v26; // [esp+40h] [ebp-8h]
  float v27; // [esp+44h] [ebp-4h]

  ParentCell = TESObjectREFR_GetParentCell(this);
  v5 = ParentCell;
  if ( ParentCell )
  {
    cellProcessLevel = ParentCell->members.cellProcessLevel;
    if ( cellProcessLevel == 6 || cellProcessLevel == 5 )
    {
      v19 = 0;
      if ( _finite(*a2) && _finite(a2[1]) && _finite(a2[2]) && !_isnan(*a2) && !_isnan(a2[1]) && !_isnan(a2[2]) )
      {
        v7 = TESObjectREFR_GetParentCell(this);
        if ( TESObjectCELL_IsInterior(v7) )
        {
          v8 = (float *)sub_441800(v5, 0, 2u);
          if ( v8 )
          {
            v9 = v8[8];
            v10 = v8[9];
            v11 = v8[0xA];
            v12 = v8[0xB];
            v24 = v9;
            v21 = v9;
            v25 = v10;
            v26 = v11;
            v27 = v12;
            v22 = v10;
            v23 = v11;
            if ( sub_8AA390(&v21, &Vector3_InitValue_) )
            {
              v21 = v24 - *a2;
              v22 = v25 - a2[1];
              v23 = v26 - a2[2];
              v13 = sub_404C90(&v21);
              if ( v27 < v13 )
                return 1;
            }
          }
LABEL_17:
          if ( !arg4 )
            return v19;
          if ( (SaveLoad_CurrentSavegame->flags & 0x800) != 0 )
            return v19;
          CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
          v17 = CharProxy;
          if ( !CharProxy )
            return v19;
          if ( (*((_DWORD *)CharProxy + 0x7D) & 0x800) != 0 )
            return v19;
          sub_8949C0(a2, 0, 0, 1);
          if ( v18 )
          {
            if ( !sub_895F00(v17) )
              return v19;
          }
          return 1;
        }
        a3 = 0.0;
        if ( !GetTerrainHeight(TES, a2, &a3) )
          goto LABEL_17;
        v15 = a2[2];
        a3 = a3 - dbl_A3F3E8;
        if ( a3 <= v15 )
          goto LABEL_17;
      }
      return 1;
    }
  }
  return 0;
}
