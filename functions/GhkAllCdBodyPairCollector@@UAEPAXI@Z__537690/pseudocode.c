hkAllCdBodyPairCollector *__thiscall hkAllCdBodyPairCollector::`scalar deleting destructor'(
        hkAllCdBodyPairCollector *this,
        char a2)
{
  hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(this); /*0x537693*/
  if ( (a2 & 1) != 0 ) /*0x53769d*/
    (*(void (__thiscall **)(int, hkAllCdBodyPairCollector *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x5376af*/
      unk_BA7D98,
      this,
      8,
      0x1C);
  return this; /*0x5376b3*/
}
