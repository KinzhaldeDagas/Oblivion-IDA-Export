void __cdecl sub_410110(_DWORD *a1)
{
  unsigned int i; // esi
  int v2; // eax
  bool v3; // zf
  _DWORD *v4; // eax

  if ( a1[0x10] )
  {
    for ( i = 0; i < a1[8]; ++i )
    {
      v2 = a1[0x10];
      v3 = *(_DWORD *)(v2 + 4 * i) == 0;
      v4 = (_DWORD *)(v2 + 4 * i);
      if ( !v3 )
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4);
    }
    a1[0x10] = 0;
    MemoryHeap_Free_checked(a1);
  }
}
