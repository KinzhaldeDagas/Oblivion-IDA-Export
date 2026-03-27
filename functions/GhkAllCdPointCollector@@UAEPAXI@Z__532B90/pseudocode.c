hkAllCdPointCollector *__thiscall hkAllCdPointCollector::`scalar deleting destructor'(
        hkAllCdPointCollector *this,
        char a2)
{
  hkAllCdPointCollector::~hkAllCdPointCollector(this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, hkAllCdPointCollector *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      8,
      0x1C);
  return this;
}
