char __thiscall sub_419D90(char *this)
{
  int FXEffect; // eax
  int v3; // esi
  char *v5; // esi
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // esi

  FXEffect = MagicItem_GetFXEffect(this, 0);
  v3 = FXEffect;
  if ( FXEffect )
  {
    LOWORD(FXEffect) = *(_WORD *)(FXEffect + 0x20);
    FXEffect = (_WORD)FXEffect == 0xFFFF ? strlen(*(const char **)(v3 + 0x1C)) : (unsigned __int16)FXEffect;
    if ( FXEffect && !EffectSetting_IsUnkA0Positive((_DWORD *)v3) && !EffectSetting_IsUnkA0Negative((_DWORD *)v3) )
      return 0;
  }
  if ( this )
    v5 = this + 0xC;
  else
    v5 = 0;
  if ( (*((_DWORD *)v5 + 2) || *((_DWORD *)v5 + 1)) && v5 )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v5 + 1);
      v7 = v6 ? *(_DWORD **)(v6 + 0x1C) : 0;
      if ( v7 && (v7[0x16] & 0x70000) != 0 && !EffectSetting_IsUnkA4Positive(v7) && !EffectSetting_IsUnkA4Negative(v7) )
        break;
      v8 = *((_DWORD *)v5 + 2);
      if ( v8 )
      {
        v5 = (char *)(v8 - 4);
        if ( v5 )
          continue;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
