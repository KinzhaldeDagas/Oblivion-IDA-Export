hkAllCdBodyPairCollector *__thiscall hkAllCdBodyPairCollector::`scalar deleting destructor'(
        hkAllCdBodyPairCollector *this,
        char a2)
{
  hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, hkAllCdBodyPairCollector *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      8,
      0x1C);
  return this;
}
