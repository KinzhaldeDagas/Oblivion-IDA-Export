int __thiscall sub_643640(float *this)
{
  int v2; // ebx
  int v3; // esi
  char v4; // al
  int result; // eax

  *(this + 5) = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x64364f*/
  v2 = 0x10 * TimeGlobals_GetGameYear(&MEMORY[0xB332E0]); /*0x643663*/
  v3 = (v2 | TimeGlobals_GetGameMonth(&MEMORY[0xB332E0])) << 9; /*0x643674*/
  TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x643677*/
  result = v3 | v4; /*0x64367f*/
  *((_DWORD *)this + 6) = result; /*0x643681*/
  return result; /*0x643684*/
}
