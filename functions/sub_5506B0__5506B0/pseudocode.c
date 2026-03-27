void __thiscall sub_5506B0(char *this, int a2)
{
  int v3; // ebp
  DWORD CurrentThreadId; // eax
  unsigned int i; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ebx

  v3 = 0;
  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  dword_B39C78 = CurrentThreadId;
  for ( i = 0; i < 2; ++i )
  {
    if ( a2 )
    {
      if ( i )
      {
        if ( sub_556650(*(_DWORD **)(a2 + 8)) )
          continue;
        v6 = sub_556720(*(_DWORD **)(a2 + 8));
      }
      else
      {
        if ( sub_5564E0(*(_DWORD **)(a2 + 8)) )
          continue;
        v6 = sub_5565F0(*(_DWORD **)(a2 + 8));
      }
      v3 = v6;
    }
    v7 = sub_54F890(this, i);
    if ( (unsigned int)(v7 + v3) > *((_DWORD *)this + i + 6) )
    {
      do
      {
        v8 = v7;
        sub_54FC30(this, i, a2);
        v7 = sub_54F890(this, i);
      }
      while ( v7 != v8 && (unsigned int)(v7 + v3) > *((_DWORD *)this + i + 6) );
    }
  }
  if ( dword_B39C7C-- == 1 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
}
