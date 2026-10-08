_DWORD *__usercall sub_746F20@<eax>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>, int a4)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_746EA0(a1); /*0x746f27*/
  result[0x5AB] = 8; /*0x746f31*/
  if ( a4 ) /*0x746f40*/
  {
    *(_BYTE *)(result[5] + result[2]) = a3; /*0x746f48*/
    *(_BYTE *)(++result[5] + result[2]) = BYTE1(a3); /*0x746f54*/
    ++result[5]; /*0x746f57*/
    *(_BYTE *)(result[2] + result[5]++) = ~(_BYTE)a3; /*0x746f65*/
    *(_BYTE *)(result[2] + result[5]++) = (unsigned __int16)~(_WORD)a3 >> 8; /*0x746f75*/
  }
  for ( ; a3; ++a2 ) /*0x746f7e*/
  {
    *(_BYTE *)(result[5] + result[2]) = *a2; /*0x746f8e*/
    --a3; /*0x746f91*/
    ++result[5]; /*0x746f95*/
  }
  return result; /*0x746f9e*/
}
