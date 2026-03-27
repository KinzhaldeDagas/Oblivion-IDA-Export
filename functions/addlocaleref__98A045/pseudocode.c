LONG __cdecl __addlocaleref(volatile LONG *lpAddend)
{
  volatile LONG **v1; // ebx
  int v2; // ebp

  InterlockedIncrement(lpAddend);
  if ( *((_DWORD *)lpAddend + 0x2C) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x2C));
  if ( *((_DWORD *)lpAddend + 0x2E) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x2E));
  if ( *((_DWORD *)lpAddend + 0x2D) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x2D));
  if ( *((_DWORD *)lpAddend + 0x30) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 0x30));
  v1 = (volatile LONG **)(lpAddend + 0x14);
  v2 = 6;
  do
  {
    if ( v1[0xFFFFFFFE] != (volatile LONG *)"C" )
    {
      if ( *v1 )
        InterlockedIncrement(*v1);
    }
    if ( v1[0xFFFFFFFF] )
    {
      if ( v1[1] )
        InterlockedIncrement(v1[1]);
    }
    v1 += 4;
    --v2;
  }
  while ( v2 );
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 0x35) + 0xB4));
}
