_BYTE *__thiscall sub_9363E0(unsigned __int8 *this, _BYTE *a2, _BYTE *a3)
{
  int v3; // eax

  v3 = *(this + 0x21) - 1; /*0x9363e4*/
  if ( v3 < 0 ) /*0x9363e7*/
  {
LABEL_5:
    *a2 = 0; /*0x936401*/
    return a2; /*0x936401*/
  }
  else
  {
    while ( *(this + 4 * v3) != *a3 || *(this + 4 * v3 + 1) != a3[1] ) /*0x9363fc*/
    {
      if ( --v3 < 0 ) /*0x9363ff*/
        goto LABEL_5; /*0x9363ff*/
    }
    *a2 = 1; /*0x936412*/
    return a2; /*0x93640d*/
  }
}
