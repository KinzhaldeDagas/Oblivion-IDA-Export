hkFirstCdBodyPairCollector *__thiscall hkFirstCdBodyPairCollector::`scalar deleting destructor'(
        hkFirstCdBodyPairCollector *this,
        char a2)
{
  *(_DWORD *)this = &hkCdBodyPairCollector::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, hkFirstCdBodyPairCollector *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      8,
      0x1C);
  return this;
}
