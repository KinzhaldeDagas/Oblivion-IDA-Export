ExtraSavedMovementData *__thiscall ExtraSavedMovementData::ExtraSavedMovementData(ExtraSavedMovementData *this)
{
  *((_BYTE *)this + 4) = 0x4B; /*0x42a8c4*/
  *((_DWORD *)this + 2) = 0; /*0x42a8c8*/
  *(_DWORD *)this = &ExtraSavedMovementData::`vftable'; /*0x42a8cb*/
  *((_BYTE *)this + 0xC) = g_TESSaveLoadGame->currentVersion; /*0x42a8da*/
  *((_DWORD *)this + 4) = 0; /*0x42a8dd*/
  *((_DWORD *)this + 5) = 0; /*0x42a8e0*/
  *((_DWORD *)this + 6) = 0; /*0x42a8e3*/
  return this; /*0x42a8e6*/
}
