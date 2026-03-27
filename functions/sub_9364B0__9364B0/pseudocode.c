int __usercall sub_9364B0@<eax>(int a1@<eax>, _DWORD *a2@<ebx>, int a3)
{
  int v3; // eax
  bool v4; // si
  bool v5; // dl
  int result; // eax
  int v7; // edi

  v3 = a1 >> 4;
  v4 = (v3 & 1) == 0;
  v5 = (v3 & 2) == 0;
  result = (v3 & 4) == 0;
  if ( a3 )
  {
    v7 = 1 << (2 * (v5 + 2 * result));
    if ( ((2 * v7) & *a2) == 0 )
      *a2 += v7;
  }
  if ( a3 != 1 )
  {
    result = 1 << (2 * (v4 + 2 * result + 4));
    if ( ((2 * result) & *a2) == 0 )
      *a2 += result;
  }
  if ( a3 != 2 )
  {
    result = 1 << (2 * (v4 + 2 * v5 + 8));
    if ( ((2 * result) & *a2) == 0 )
      *a2 += result;
  }
  return result;
}
