char __thiscall sub_419D90(char *this)
{
  EffectSetting *FXEffect; // eax
  EffectSetting *v3; // esi
  char *v5; // esi
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // esi

  FXEffect = MagicItem_GetFXEffect(this, 0); /*0x419d96*/
  v3 = FXEffect; /*0x419d9b*/
  if ( FXEffect )
  {
    LOWORD(FXEffect) = FXEffect->model.nifModel.m_dataLen; /*0x419da1*/
    FXEffect = (_WORD)FXEffect == 0xFFFF
             ? (EffectSetting *)strlen(v3->model.nifModel.m_data)
             : (EffectSetting *)(unsigned __int16)FXEffect;
    if ( FXEffect && !EffectSetting_IsUnkA0Positive(v3) && !EffectSetting_IsUnkA0Negative(v3) ) /*0x419dd2*/
      return 0; /*0x419ddf*/
  }
  if ( this ) /*0x419de2*/
    v5 = this + 0xC; /*0x419de4*/
  else
    v5 = 0; /*0x419de9*/
  if ( (*((_DWORD *)v5 + 2) || *((_DWORD *)v5 + 1)) && v5 )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v5 + 1); /*0x419e00*/
      v7 = v6 ? *(_DWORD **)(v6 + 0x1C) : 0;
      if ( v7 && (v7[0x16] & 0x70000) != 0 && !EffectSetting_IsUnkA4Positive(v7) && !EffectSetting_IsUnkA4Negative(v7) ) /*0x419e28*/
        break; /*0x419e28*/
      v8 = *((_DWORD *)v5 + 2); /*0x419e31*/
      if ( v8 ) /*0x419e36*/
      {
        v5 = (char *)(v8 - 4); /*0x419e38*/
        if ( v5 ) /*0x419e3b*/
          continue; /*0x419e3b*/
      }
      return 1; /*0x419e3b*/
    }
    return 0; /*0x419e2f*/
  }
  return 1; /*0x419ddb*/
}
