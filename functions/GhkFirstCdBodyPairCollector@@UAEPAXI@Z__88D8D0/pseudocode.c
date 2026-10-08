hkFirstCdBodyPairCollector *__thiscall hkFirstCdBodyPairCollector::`scalar deleting destructor'(
        hkFirstCdBodyPairCollector *this,
        char a2)
{
  *(_DWORD *)this = &hkCdBodyPairCollector::`vftable'; /*0x88d8d8*/
  if ( (a2 & 1) != 0 ) /*0x88d8de*/
    (*(void (__thiscall **)(int, hkFirstCdBodyPairCollector *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x88d8f0*/
      unk_BA7D98,
      this,
      8,
      0x1C);
  return this; /*0x88d8f4*/
}
