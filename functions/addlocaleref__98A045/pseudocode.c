LONG __cdecl __addlocaleref(volatile LONG *lpAddend)
{
  volatile LONG **v1; // ebx
  int v2; // ebp

  InterlockedIncrement(lpAddend); /*0x98a054*/
  if ( *((_DWORD *)lpAddend + 0x2C) ) /*0x98a056*/
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x2C)); /*0x98a061*/
  if ( *((_DWORD *)lpAddend + 0x2E) ) /*0x98a063*/
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x2E)); /*0x98a06e*/
  if ( *((_DWORD *)lpAddend + 0x2D) ) /*0x98a070*/
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x2D)); /*0x98a07b*/
  if ( *((_DWORD *)lpAddend + 0x30) ) /*0x98a07d*/
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x30)); /*0x98a088*/
  v1 = (volatile LONG **)(lpAddend + 0x14); /*0x98a08c*/
  v2 = 6; /*0x98a08f*/
  do /*0x98a0b6*/
  {
    if ( v1[0xFFFFFFFE] != (volatile LONG *)"C" ) /*0x98a097*/
    {
      if ( *v1 ) /*0x98a099*/
        InterlockedIncrement(*v1); /*0x98a0a0*/
    }
    if ( v1[0xFFFFFFFF] ) /*0x98a0a2*/
    {
      if ( v1[1] ) /*0x98a0a8*/
        InterlockedIncrement(v1[1]); /*0x98a0b0*/
    }
    v1 += 4; /*0x98a0b2*/
    --v2; /*0x98a0b5*/
  }
  while ( v2 ); /*0x98a0b6*/
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 0x35) + 0xB4)); /*0x98a0c6*/
}
