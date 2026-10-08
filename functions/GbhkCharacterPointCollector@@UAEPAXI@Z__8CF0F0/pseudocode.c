bhkCharacterPointCollector *__thiscall bhkCharacterPointCollector::`scalar deleting destructor'(
        bhkCharacterPointCollector *this,
        char a2)
{
  bhkCharacterPointCollector::~bhkCharacterPointCollector(this); /*0x8cf0f3*/
  if ( (a2 & 1) != 0 ) /*0x8cf0fd*/
    (*(void (__thiscall **)(int, bhkCharacterPointCollector *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8cf10f*/
      unk_BA7D98,
      this,
      8,
      0x1C);
  return this; /*0x8cf113*/
}
