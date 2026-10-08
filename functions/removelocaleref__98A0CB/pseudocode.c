volatile LONG *__cdecl __removelocaleref(volatile LONG *lpAddend)
{
  volatile LONG **v1; // ebx
  int v2; // ebp

  if ( lpAddend ) /*0x98a0d2*/
  {
    InterlockedDecrement(lpAddend); /*0x98a0de*/
    if ( *((_DWORD *)lpAddend + 0x2C) ) /*0x98a0e0*/
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x2C)); /*0x98a0eb*/
    if ( *((_DWORD *)lpAddend + 0x2E) ) /*0x98a0ed*/
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x2E)); /*0x98a0f8*/
    if ( *((_DWORD *)lpAddend + 0x2D) ) /*0x98a0fa*/
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x2D)); /*0x98a105*/
    if ( *((_DWORD *)lpAddend + 0x30) ) /*0x98a107*/
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x30)); /*0x98a112*/
    v1 = (volatile LONG **)(lpAddend + 0x14); /*0x98a116*/
    v2 = 6; /*0x98a119*/
    do /*0x98a140*/
    {
      if ( v1[0xFFFFFFFE] != (volatile LONG *)"C" ) /*0x98a121*/
      {
        if ( *v1 ) /*0x98a123*/
          InterlockedDecrement(*v1); /*0x98a12a*/
      }
      if ( v1[0xFFFFFFFF] ) /*0x98a12c*/
      {
        if ( v1[1] ) /*0x98a132*/
          InterlockedDecrement(v1[1]); /*0x98a13a*/
      }
      v1 += 4; /*0x98a13c*/
      --v2; /*0x98a13f*/
    }
    while ( v2 ); /*0x98a140*/
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 0x35) + 0xB4)); /*0x98a14e*/
  }
  return lpAddend; /*0x98a155*/
}
