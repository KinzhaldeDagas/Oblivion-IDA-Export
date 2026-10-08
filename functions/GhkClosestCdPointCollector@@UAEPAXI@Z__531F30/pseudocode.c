hkClosestCdPointCollector *__thiscall hkClosestCdPointCollector::`scalar deleting destructor'(
        hkClosestCdPointCollector *this,
        char a2)
{
  *(_DWORD *)this = &hkCdPointCollector::`vftable'; /*0x531f38*/
  if ( (a2 & 1) != 0 ) /*0x531f3e*/
    (*(void (__thiscall **)(int, hkClosestCdPointCollector *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x531f50*/
      unk_BA7D98,
      this,
      8,
      0x1C);
  return this; /*0x531f54*/
}
