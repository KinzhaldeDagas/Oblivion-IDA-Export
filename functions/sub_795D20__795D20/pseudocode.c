_DWORD *__usercall sub_795D20@<eax>(int a1@<ebp>, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a2; i != a3; i += 4 )
    result = sub_795510(i, a1, a4);
  return result;
}
