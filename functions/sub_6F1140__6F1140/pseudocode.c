int __thiscall sub_6F1140(_DWORD *this)
{
  int result; // eax

  result = *(this + 1); /*0x6f1140*/
  if ( result ) /*0x6f1145*/
    return (*(this + 2) - result) / 0x2C; /*0x6f115c*/
  return result; /*0x6f1147*/
}
