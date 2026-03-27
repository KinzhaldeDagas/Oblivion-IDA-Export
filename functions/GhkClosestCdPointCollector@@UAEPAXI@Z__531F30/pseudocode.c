hkClosestCdPointCollector *__thiscall hkClosestCdPointCollector::`scalar deleting destructor'(
        hkClosestCdPointCollector *this,
        char a2)
{
  *(_DWORD *)this = &hkCdPointCollector::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, hkClosestCdPointCollector *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      8,
      0x1C);
  return this;
}
