void __thiscall sub_734870(unsigned __int16 *this, char *a2, _BYTE *a3)
{
  unsigned int i; // esi
  char v6; // al

  for ( i = 0; i < *(this + 0x87); ++a2 ) /*0x734873*/
  {
    v6 = *a2; /*0x734885*/
    a3[2] = *a2; /*0x734887*/
    a3[1] = v6; /*0x73488a*/
    *a3 = v6; /*0x73488d*/
    ++i; /*0x734896*/
    a3 += 3; /*0x734899*/
  }
}
