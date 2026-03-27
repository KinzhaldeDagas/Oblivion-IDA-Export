void __thiscall sub_734A10(unsigned __int16 *this, _BYTE *a2, _BYTE *a3)
{
  unsigned int i; // esi
  _BYTE *v6; // eax

  for ( i = 0; i < *(this + 0x87); a2 += 3 )
  {
    *a3 = a2[2];
    v6 = a3 + 1;
    *v6++ = a2[1];
    *v6 = *a2;
    ++i;
    a3 = v6 + 1;
  }
}
