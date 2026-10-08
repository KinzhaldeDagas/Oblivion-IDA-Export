void __cdecl sub_410110(_DWORD *a1)
{
  unsigned int i; // esi
  int v2; // eax
  bool v3; // zf
  _DWORD *v4; // eax

  if ( a1[0x10] ) /*0x410115*/
  {
    for ( i = 0; i < a1[8]; ++i ) /*0x41011e*/
    {
      v2 = a1[0x10]; /*0x410123*/
      v3 = *(_DWORD *)(v2 + 4 * i) == 0; /*0x410126*/
      v4 = (_DWORD *)(v2 + 4 * i); /*0x41012a*/
      if ( !v3 ) /*0x41012d*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4); /*0x410137*/
    }
    a1[0x10] = 0; /*0x410147*/
    MemoryHeap_Free_checked(a1); /*0x41014e*/
  }
}
