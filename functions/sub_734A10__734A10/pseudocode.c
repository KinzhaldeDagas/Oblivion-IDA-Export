void __thiscall sub_734A10(unsigned __int16 *this, _BYTE *a2, _BYTE *a3)
{
  unsigned int i; // esi
  _BYTE *v6; // eax

  for ( i = 0; i < *(this + 0x87); a2 += 3 ) /*0x734a16*/
  {
    *a3 = a2[2]; /*0x734a34*/
    v6 = a3 + 1; /*0x734a3a*/
    *v6++ = a2[1]; /*0x734a3d*/
    *v6 = *a2; /*0x734a45*/
    ++i; /*0x734a4e*/
    a3 = v6 + 1; /*0x734a51*/
  }
}
