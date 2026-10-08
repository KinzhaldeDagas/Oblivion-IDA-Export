bool __thiscall sub_4837C0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  double v4; // st7
  __int64 v5; // rax
  __int64 v6; // rax
  bool result; // al
  float v8; // [esp+10h] [ebp+8h]

  v3 = *(this + 4) + 0x10 * (a3 + a2 * *(this + 3)); /*0x4837de*/
  v4 = (double)(int)(*(_DWORD *)&MEMORY[0xB33E90][0x58C] + ((unsigned int)uGridsToLoad >> 1)); /*0x4837e9*/
  if ( (int)(*(_DWORD *)&MEMORY[0xB33E90][0x58C] + ((unsigned int)uGridsToLoad >> 1)) < 0 ) /*0x4837ed*/
    v4 = v4 + flt_A2FC78; /*0x4837ef*/
  v8 = v4; /*0x4837f8*/
  v5 = *(_DWORD *)(v3 + 8) - *(this + 1); /*0x4837ff*/
  result = 0; /*0x483841*/
  if ( v8 >= (double)(int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) ) /*0x483819*/
  {
    v6 = *(_DWORD *)(v3 + 0xC) - *(this + 2); /*0x483821*/
    if ( (double)(int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) <= v8 ) /*0x483835*/
      return 1; /*0x483819*/
  }
  return result; /*0x483837*/
}
