bool __thiscall sub_419E50(char *this)
{
  int FXEffect; // eax
  int v3; // esi
  char v4; // bl
  char *v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edi

  FXEffect = MagicItem_GetFXEffect(this, 0);
  v3 = FXEffect;
  v4 = 1;
  if ( FXEffect )
  {
    LOWORD(FXEffect) = *(_WORD *)(FXEffect + 0x20);
    FXEffect = (_WORD)FXEffect == 0xFFFF ? strlen(*(const char **)(v3 + 0x1C)) : (unsigned __int16)FXEffect;
    if ( FXEffect )
    {
      if ( !EffectSetting_IsUnkA0Positive((_DWORD *)v3) )
      {
        v4 = 0;
        if ( !EffectSetting_IsUnkA0Negative((_DWORD *)v3) )
          return 0;
      }
    }
  }
  if ( this )
    v6 = this + 0xC;
  else
    v6 = 0;
  if ( (*((_DWORD *)v6 + 2) || *((_DWORD *)v6 + 1)) && v6 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v6 + 1);
      v8 = v7 ? *(_DWORD **)(v7 + 0x1C) : 0;
      if ( v8 )
      {
        if ( (v8[0x16] & 0x70000) != 0 && !EffectSetting_IsUnkA4Positive(v8) )
        {
          v4 = 0;
          if ( !EffectSetting_IsUnkA4Negative(v8) )
            break;
        }
      }
      v9 = *((_DWORD *)v6 + 2);
      if ( v9 )
      {
        v6 = (char *)(v9 - 4);
        if ( v6 )
          continue;
      }
      return v4 == 0;
    }
    return 0;
  }
  return v4 == 0;
}
