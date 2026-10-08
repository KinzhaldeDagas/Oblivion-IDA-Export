int __thiscall sub_5E1370(_DWORD *this, char a2, int a3)
{
  int result; // eax

  if ( a2 ) /*0x5e1375*/
    result = a3 | *(this + 0x31); /*0x5e137d*/
  else
    result = *(this + 0x31) & ~a3; /*0x5e1390*/
  *(this + 0x31) = result; /*0x5e1381*/
  return result; /*0x5e1387*/
}
