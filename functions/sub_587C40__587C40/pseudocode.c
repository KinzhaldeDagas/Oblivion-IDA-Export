int __thiscall sub_587C40(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x587c40*/
  if ( (unsigned int)(a2 - 1) <= 0x2F ) /*0x587c4a*/
    *(this + a2 + 9) = a3; /*0x587c50*/
  return result; /*0x587c54*/
}
