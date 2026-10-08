unsigned int __thiscall sub_53B6E0(_DWORD *this)
{
  signed int i; // edi
  int v3; // esi
  unsigned int result; // eax

  for ( i = 0; i < 2; i = (i + 1) % 3u ) /*0x53b6e5*/
  {
    v3 = *(this + i + 2); /*0x53b6e7*/
    if ( v3 ) /*0x53b6ed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x53b6f3*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x53b709*/
      *(this + i + 2) = 0; /*0x53b70b*/
    }
    result = (i + 1) / 3u; /*0x53b71d*/
  }
  return result; /*0x53b726*/
}
