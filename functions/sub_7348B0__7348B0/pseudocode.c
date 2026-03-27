void __thiscall sub_7348B0(unsigned __int16 *this, _BYTE *a2, _BYTE *a3)
{
  unsigned int i; // edi
  _BYTE *v6; // eax

  for ( i = 0; i < *(this + 0x87); a2 += 2 )
  {
    *a3 = 2 * (a2[1] & 0xFC);
    a3[1] = (a2[1] << 6) + ((*a2 >> 2) & 0x38);
    v6 = a3 + 2;
    *v6 = 8 * *a2;
    ++i;
    a3 = v6 + 1;
  }
}
