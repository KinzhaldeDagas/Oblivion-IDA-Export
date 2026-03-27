volatile LONG *__cdecl __removelocaleref(volatile LONG *lpAddend)
{
  volatile LONG **v1; // ebx
  int v2; // ebp

  if ( lpAddend )
  {
    InterlockedDecrement(lpAddend);
    if ( *((_DWORD *)lpAddend + 0x2C) )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x2C));
    if ( *((_DWORD *)lpAddend + 0x2E) )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x2E));
    if ( *((_DWORD *)lpAddend + 0x2D) )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x2D));
    if ( *((_DWORD *)lpAddend + 0x30) )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 0x30));
    v1 = (volatile LONG **)(lpAddend + 0x14);
    v2 = 6;
    do
    {
      if ( v1[0xFFFFFFFE] != (volatile LONG *)"C" )
      {
        if ( *v1 )
          InterlockedDecrement(*v1);
      }
      if ( v1[0xFFFFFFFF] )
      {
        if ( v1[1] )
          InterlockedDecrement(v1[1]);
      }
      v1 += 4;
      --v2;
    }
    while ( v2 );
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 0x35) + 0xB4));
  }
  return lpAddend;
}
