int __cdecl __FrameUnwindFilter(int **a1)
{
  int v1; // eax
  int v2; // eax

  v1 = **a1;
  if ( v1 == 0xE0434F4D )
  {
    if ( *(int *)(_getptd() + 0x90) > 0 )
    {
      v2 = _getptd();
      --*(_DWORD *)(v2 + 0x90);
    }
  }
  else if ( v1 == 0xE06D7363 )
  {
    *(_DWORD *)(_getptd() + 0x90) = 0;
    terminate();
  }
  return 0;
}
