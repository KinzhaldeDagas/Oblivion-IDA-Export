unsigned int __thiscall TimeGlobals_GetGameDayOfWeek(_DWORD *this)
{
  int v1; // eax
  double v2; // st7
  float v4; // [esp+0h] [ebp-Ch]

  v1 = *(this + 4);
  if ( v1 )
    v2 = *(float *)(v1 + 0x24);
  else
    v2 = 1.0;
  v4 = v2;
  return (unsigned int)(__int64)v4 % 7;
}
