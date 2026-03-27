int __thiscall TimeGlobals_GetGameDaysPassed(_DWORD *this)
{
  int v1; // eax
  double v2; // st7

  v1 = *(this + 4);
  if ( v1 )
    v2 = *(float *)(v1 + 0x24);
  else
    v2 = 1.0;
  return (__int64)(float)v2;
}
