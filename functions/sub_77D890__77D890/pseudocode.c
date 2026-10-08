_DWORD *__thiscall sub_77D890(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // ecx
  int v3; // esi

  result = this; /*0x77d890*/
  *(this + 7) = &NiTArray<NiVBBlock *>::`vftable'; /*0x77d894*/
  *((_WORD *)this + 0x12) = 0; /*0x77d89b*/
  *((_WORD *)this + 0x15) = 1; /*0x77d89f*/
  *((_WORD *)this + 0x13) = 0; /*0x77d8a5*/
  *((_WORD *)this + 0x14) = 0; /*0x77d8a9*/
  *(this + 8) = 0; /*0x77d8ad*/
  *(this + 3) = dword_B2AD4C; /*0x77d8b6*/
  *(this + 1) = 0; /*0x77d8b9*/
  *(this + 2) = 0; /*0x77d8bc*/
  *this = 0; /*0x77d8bf*/
  *(this + 4) = 0; /*0x77d8c1*/
  *(this + 5) = 0; /*0x77d8c4*/
  *(this + 6) = 0; /*0x77d8c7*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)result + 0x13); *(_DWORD *)(result[8] + 4 * v3) = 0 ) /*0x77d8cc*/
    v3 = (unsigned __int16)i++; /*0x77d8d7*/
  *((_WORD *)result + 0x13) = 0; /*0x77d8e8*/
  *((_WORD *)result + 0x14) = 0; /*0x77d8ec*/
  result[0xB] = 0; /*0x77d8f0*/
  result[0xC] = dword_B2AD50; /*0x77d8f9*/
  return result; /*0x77d8fc*/
}
