void __cdecl _ReleaseCPLocHash()
{
  volatile LONG *v0; // ebx
  _DWORD *v1; // esi
  _DWORD *v2; // edi

  v0 = (volatile LONG *)&byte_BA9BB4[0xE4]; /*0x980dcd*/
  do /*0x980e02*/
  {
    v1 = (_DWORD *)InterlockedExchange(v0, 0); /*0x980ddb*/
    if ( v1 ) /*0x980ddf*/
    {
      do /*0x980df7*/
      {
        v2 = (_DWORD *)*v1; /*0x980de4*/
        _free_locale(v1[2]); /*0x980de6*/
        free(v1); /*0x980dec*/
        v1 = v2; /*0x980df5*/
      }
      while ( v2 ); /*0x980df7*/
    }
    ++v0; /*0x980df9*/
  }
  while ( (int)v0 < (int)&byte_BA9BB4[0x1DC] ); /*0x980e02*/
}
