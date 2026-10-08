char __thiscall sub_419CF0(char *this)
{
  EffectSetting *FXEffect; // eax
  unsigned int v3; // edx
  char *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // esi

  FXEffect = MagicItem_GetFXEffect(this, 0); /*0x419cf5*/
  if ( FXEffect )
  {
    LOWORD(v3) = FXEffect->model.nifModel.m_dataLen; /*0x419cfe*/
    v3 = (_WORD)v3 == 0xFFFF ? strlen(FXEffect->model.nifModel.m_data) : (unsigned __int16)v3;
    if ( v3 && !EffectSetting_IsUnkA0Positive(FXEffect) ) /*0x419d27*/
      return 0; /*0x419d33*/
  }
  if ( this ) /*0x419d36*/
    v5 = this + 0xC; /*0x419d38*/
  else
    v5 = 0; /*0x419d3d*/
  if ( (*((_DWORD *)v5 + 2) || *((_DWORD *)v5 + 1)) && v5 )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v5 + 1); /*0x419d50*/
      v7 = v6 ? *(_DWORD **)(v6 + 0x1C) : 0;
      if ( v7 && (v7[0x16] & 0x70000) != 0 && !EffectSetting_IsUnkA4Positive(v7) ) /*0x419d6b*/
        break; /*0x419d6b*/
      v8 = *((_DWORD *)v5 + 2); /*0x419d74*/
      if ( v8 ) /*0x419d79*/
      {
        v5 = (char *)(v8 - 4); /*0x419d7b*/
        if ( v5 ) /*0x419d7e*/
          continue; /*0x419d7e*/
      }
      return 1; /*0x419d7e*/
    }
    return 0; /*0x419d72*/
  }
  return 1; /*0x419d32*/
}
