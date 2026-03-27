const char *__thiscall TimeGlobals_GetGameDayOfWeekName(_DWORD *this)
{
  int v1; // eax
  double v2; // st7
  signed int v3; // edx
  int v4; // edx
  float v6; // [esp+0h] [ebp-Ch]

  v1 = *(this + 4);
  if ( v1 )
    v2 = *(float *)(v1 + 0x24);
  else
    v2 = 1.0;
  v6 = v2;
  v3 = (unsigned int)(__int64)v6 % 7;
  if ( v3 == 0xFFFFFFFF || v3 >= 7 )
    return "Bad Day";
  v4 = (int)*(&off_B06FD4 + v3);
  if ( v4 )
    return *(const char **)v4;
  else
    return 0;
}
