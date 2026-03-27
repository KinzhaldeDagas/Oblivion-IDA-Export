bhkCharacterPointCollector *__thiscall bhkCharacterPointCollector::bhkCharacterPointCollector(
        bhkCharacterPointCollector *this,
        int a2)
{
  double v2; // st7

  v2 = flt_A99DCC;
  *((_DWORD *)this + 6) = 0x80000008;
  *((_DWORD *)this + 4) = (char *)this + 0x20;
  *((float *)this + 1) = v2;
  *((_DWORD *)this + 0x68) = a2;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &bhkCharacterPointCollector::`vftable';
  *((_DWORD *)this + 0x69) = 0;
  *((_DWORD *)this + 0x6B) = 0x80000000;
  *((_DWORD *)this + 0x6C) = 0;
  *((_DWORD *)this + 0x6E) = 0x80000000;
  *((_DWORD *)this + 0x6F) = 0;
  *((_DWORD *)this + 0x71) = 0x80000000;
  *((_DWORD *)this + 0x6A) = 0;
  *((_DWORD *)this + 0x70) = 0;
  *((_DWORD *)this + 0x6D) = 0;
  return this;
}
