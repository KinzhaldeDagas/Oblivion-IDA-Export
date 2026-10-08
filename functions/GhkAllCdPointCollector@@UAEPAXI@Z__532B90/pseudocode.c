hkAllCdPointCollector *__thiscall hkAllCdPointCollector::`scalar deleting destructor'(
        hkAllCdPointCollector *this,
        char a2)
{
  hkAllCdPointCollector::~hkAllCdPointCollector(this); /*0x532b93*/
  if ( (a2 & 1) != 0 ) /*0x532b9d*/
    (*(void (__thiscall **)(int, hkAllCdPointCollector *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x532baf*/
      unk_BA7D98,
      this,
      8,
      0x1C);
  return this; /*0x532bb3*/
}
