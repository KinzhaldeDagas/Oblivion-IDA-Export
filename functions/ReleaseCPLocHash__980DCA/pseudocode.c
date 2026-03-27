void __cdecl _ReleaseCPLocHash()
{
  volatile LONG *v0; // ebx
  _DWORD *v1; // esi
  _DWORD *v2; // edi

  v0 = &Target;
  do
  {
    v1 = (_DWORD *)InterlockedExchange(v0, 0);
    if ( v1 )
    {
      do
      {
        v2 = (_DWORD *)*v1;
        _free_locale(v1[2]);
        free(v1);
        v1 = v2;
      }
      while ( v2 );
    }
    ++v0;
  }
  while ( (int)v0 < (int)&dword_BA9D90 );
}
