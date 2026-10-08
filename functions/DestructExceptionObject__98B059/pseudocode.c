void __cdecl __DestructExceptionObject(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  if ( a1 ) /*0x98b06a*/
  {
    if ( *a1 == 0xE06D7363 ) /*0x98b072*/
    {
      v1 = a1[7]; /*0x98b074*/
      if ( v1 ) /*0x98b079*/
      {
        v2 = *(_DWORD *)(v1 + 4); /*0x98b07b*/
        if ( v2 ) /*0x98b080*/
          sub_980E4B(a1[6], v2); /*0x98b08a*/
      }
    }
  }
}
