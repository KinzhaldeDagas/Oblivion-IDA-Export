void __thiscall sub_5506B0(char *this, int a2)
{
  int v3; // ebp
  DWORD CurrentThreadId; // eax
  unsigned int i; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ebx

  v3 = 0; /*0x5506bb*/
  EnterCriticalSection(&unk_B39C00); /*0x5506bd*/
  CurrentThreadId = GetCurrentThreadId(); /*0x5506c3*/
  ++unk_B39C7C; /*0x5506c9*/
  unk_B39C78 = CurrentThreadId; /*0x5506d0*/
  for ( i = 0; i < 2; ++i ) /*0x5506d5*/
  {
    if ( a2 ) /*0x5506dd*/
    {
      if ( i ) /*0x5506e4*/
      {
        if ( sub_556650(*(_DWORD **)(a2 + 8)) ) /*0x5506f2*/
          continue; /*0x5506f9*/
        v6 = sub_556720(*(_DWORD **)(a2 + 8)); /*0x5506fe*/
      }
      else
      {
        if ( sub_5564E0(*(_DWORD **)(a2 + 8)) ) /*0x550708*/
          continue; /*0x55070f*/
        v6 = sub_5565F0(*(_DWORD **)(a2 + 8)); /*0x550714*/
      }
      v3 = v6; /*0x550719*/
    }
    v7 = sub_54F890(this, i); /*0x55071e*/
    if ( (unsigned int)(v7 + v3) > *((_DWORD *)this + i + 6) ) /*0x55072a*/
    {
      do /*0x550752*/
      {
        v8 = v7; /*0x550738*/
        sub_54FC30((unsigned int **)this, i, a2); /*0x55073a*/
        v7 = sub_54F890(this, i); /*0x550742*/
      }
      while ( v7 != v8 && (unsigned int)(v7 + v3) > *((_DWORD *)this + i + 6) ); /*0x550752*/
    }
  }
  if ( unk_B39C7C-- == 1 ) /*0x550760*/
    unk_B39C78 = 0; /*0x55076d*/
  LeaveCriticalSection(&unk_B39C00); /*0x55077f*/
}
