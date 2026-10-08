bool *__thiscall sub_92A2E0(_DWORD *this, bool *a2, unsigned int a3, unsigned int a4)
{
  bool *result; // eax

  if ( ((a4 ^ a3) & 0xFFFF0000) != 0 || (a3 & 0xFFFF0000) == 0 ) /*0x92a2fc*/
  {
    *a2 = ((1 << (a4 & 0x1F)) & *(this + (a3 & 0x1F) + 7)) != 0; /*0x92a349*/
    return a2; /*0x92a340*/
  }
  else
  {
    if ( ((a3 ^ (a4 >> 5)) & 0x3E0) == 0 ) /*0x92a30b*/
    {
      result = a2; /*0x92a30d*/
LABEL_5:
      *result = 0; /*0x92a311*/
      return result; /*0x92a315*/
    }
    result = a2; /*0x92a322*/
    if ( (((unsigned __int16)a4 ^ (unsigned __int16)(a3 >> 5)) & 0x3E0) == 0 ) /*0x92a326*/
      goto LABEL_5; /*0x92a326*/
    *a2 = 1; /*0x92a328*/
  }
  return result; /*0x92a314*/
}
