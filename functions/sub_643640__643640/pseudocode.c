int __thiscall sub_643640(float *this)
{
  int v2; // ebx
  int v3; // esi
  char v4; // al
  int result; // eax

  *(this + 5) = TimeGlobals_GetGameHour(&TimeGlobals);
  v2 = 0x10 * TimeGlobals_GetGameYear(&TimeGlobals);
  v3 = (v2 | TimeGlobals_GetGameMonth(&TimeGlobals)) << 9;
  TimeGlobals_GetGameDay(&TimeGlobals);
  result = v3 | v4;
  *((_DWORD *)this + 6) = result;
  return result;
}
