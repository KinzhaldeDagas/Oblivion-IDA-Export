bhkCharacterPointCollector *__thiscall bhkCharacterPointCollector::`scalar deleting destructor'(
        bhkCharacterPointCollector *this,
        char a2)
{
  bhkCharacterPointCollector::~bhkCharacterPointCollector(this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, bhkCharacterPointCollector *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      8,
      0x1C);
  return this;
}
