_DWORD *sub_4994C0()
{
  _DWORD *result; // eax
  int v1; // ecx
  Sky *GlobalObject; // eax
  Sky *v3; // eax
  double GameHour; // [esp+0h] [ebp-8h]
  double v5; // [esp+0h] [ebp-8h]

  result = (_DWORD *)dword_B35220;
  if ( IsRenderWaterUnderWaterSurface )
  {
    if ( result[0x2A] )
    {
      v1 = result[0x2A];
      if ( v1 )
        return (_DWORD *)v1;
    }
  }
  if ( !result )
    return result;
  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  GlobalObject = Sky_CreateOrGetGlobalObject();
  if ( sub_499200(GlobalObject) <= GameHour
    || (v5 = TimeGlobals_GetGameHour(&TimeGlobals), v3 = Sky_CreateOrGetGlobalObject(), sub_499140(v3) > v5) )
  {
    result = (_DWORD *)dword_B35220;
    if ( !*(_DWORD *)(dword_B35220 + 0xA4) )
      return result;
    v1 = result[0x29];
LABEL_12:
    if ( !v1 )
      return result;
    return (_DWORD *)v1;
  }
  result = (_DWORD *)dword_B35220;
  if ( dword_B35220 && result[0x28] )
  {
    v1 = result[0x28];
    goto LABEL_12;
  }
  return result;
}
