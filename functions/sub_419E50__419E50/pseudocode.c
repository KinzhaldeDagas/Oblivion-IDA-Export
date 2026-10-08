bool __thiscall sub_419E50(char *this)
{
  EffectSetting *FXEffect; // eax
  EffectSetting *v3; // esi
  char v4; // bl
  char *v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edi

  FXEffect = MagicItem_GetFXEffect(this, 0); /*0x419e57*/
  v3 = FXEffect; /*0x419e5c*/
  v4 = 1; /*0x419e60*/
  if ( FXEffect )
  {
    LOWORD(FXEffect) = FXEffect->model.nifModel.m_dataLen; /*0x419e64*/
    FXEffect = (_WORD)FXEffect == 0xFFFF
             ? (EffectSetting *)strlen(v3->model.nifModel.m_data)
             : (EffectSetting *)(unsigned __int16)FXEffect;
    if ( FXEffect ) /*0x419e86*/
    {
      if ( !EffectSetting_IsUnkA0Positive(v3) ) /*0x419e8a*/
      {
        v4 = 0; /*0x419e95*/
        if ( !EffectSetting_IsUnkA0Negative(v3) ) /*0x419e97*/
          return 0; /*0x419ea5*/
      }
    }
  }
  if ( this ) /*0x419ea8*/
    v6 = this + 0xC; /*0x419eaa*/
  else
    v6 = 0; /*0x419eaf*/
  if ( (*((_DWORD *)v6 + 2) || *((_DWORD *)v6 + 1)) && v6 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v6 + 1); /*0x419ec1*/
      v8 = v7 ? *(_DWORD **)(v7 + 0x1C) : 0;
      if ( v8 ) /*0x419ed1*/
      {
        if ( (v8[0x16] & 0x70000) != 0 && !EffectSetting_IsUnkA4Positive(v8) ) /*0x419ede*/
        {
          v4 = 0; /*0x419ee9*/
          if ( !EffectSetting_IsUnkA4Negative(v8) ) /*0x419eeb*/
            break; /*0x419eeb*/
        }
      }
      v9 = *((_DWORD *)v6 + 2); /*0x419ef4*/
      if ( v9 ) /*0x419ef9*/
      {
        v6 = (char *)(v9 - 4); /*0x419efb*/
        if ( v6 ) /*0x419efe*/
          continue; /*0x419efe*/
      }
      return v4 == 0; /*0x419efe*/
    }
    return 0; /*0x419ef2*/
  }
  return v4 == 0; /*0x419ea0*/
}
