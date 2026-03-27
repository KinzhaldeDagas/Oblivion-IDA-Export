_DWORD *__usercall sub_746F20@<eax>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>, int a4)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_746EA0(a1);
  result[0x5AB] = 8;
  if ( a4 )
  {
    *(_BYTE *)(result[5] + result[2]) = a3;
    *(_BYTE *)(++result[5] + result[2]) = BYTE1(a3);
    ++result[5];
    *(_BYTE *)(result[2] + result[5]++) = ~(_BYTE)a3;
    *(_BYTE *)(result[2] + result[5]++) = (unsigned __int16)~(_WORD)a3 >> 8;
  }
  for ( ; a3; ++a2 )
  {
    *(_BYTE *)(result[5] + result[2]) = *a2;
    --a3;
    ++result[5];
  }
  return result;
}
