void __cdecl __DestructExceptionObject(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  if ( a1 )
  {
    if ( *a1 == 0xE06D7363 )
    {
      v1 = a1[7];
      if ( v1 )
      {
        v2 = *(_DWORD *)(v1 + 4);
        if ( v2 )
          sub_980E4B(a1[6], v2);
      }
    }
  }
}
