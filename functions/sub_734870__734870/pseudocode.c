void __thiscall sub_734870(unsigned __int16 *this, char *a2, _BYTE *a3)
{
  unsigned int i; // esi
  char v6; // al

  for ( i = 0; i < *(this + 0x87); ++a2 )
  {
    v6 = *a2;
    a3[2] = *a2;
    a3[1] = v6;
    *a3 = v6;
    ++i;
    a3 += 3;
  }
}
