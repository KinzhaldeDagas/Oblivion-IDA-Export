_DWORD *__thiscall sub_77D890(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // ecx
  int v3; // esi

  result = this;
  *(this + 7) = &NiTArray<NiVBBlock *>::`vftable';
  *((_WORD *)this + 0x12) = 0;
  *((_WORD *)this + 0x15) = 1;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *(this + 8) = 0;
  *(this + 3) = dword_B2AD4C;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  for ( i = 0; (unsigned __int16)i < *((_WORD *)result + 0x13); *(_DWORD *)(result[8] + 4 * v3) = 0 )
    v3 = (unsigned __int16)i++;
  *((_WORD *)result + 0x13) = 0;
  *((_WORD *)result + 0x14) = 0;
  result[0xB] = 0;
  result[0xC] = dword_B2AD50;
  return result;
}
