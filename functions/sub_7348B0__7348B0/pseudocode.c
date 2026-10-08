void __thiscall sub_7348B0(unsigned __int16 *this, _BYTE *a2, _BYTE *a3)
{
  unsigned int i; // edi
  _BYTE *v6; // eax

  for ( i = 0; i < *(this + 0x87); a2 += 2 ) /*0x7348b6*/
  {
    *a3 = 2 * (a2[1] & 0xFC); /*0x7348d9*/
    a3[1] = (a2[1] << 6) + ((*a2 >> 2) & 0x38); /*0x7348ed*/
    v6 = a3 + 2; /*0x7348fa*/
    *v6 = 8 * *a2; /*0x7348ff*/
    ++i; /*0x734908*/
    a3 = v6 + 1; /*0x73490b*/
  }
}
