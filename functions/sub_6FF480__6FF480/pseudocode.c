void __thiscall sub_6FF480(_DWORD *this, unsigned __int16 a2)
{
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebp
  int v7; // ecx
  int v8; // eax

  EnterCriticalSection(&stru_B3F600);
  dword_B3F678 = GetCurrentThreadId();
  ++dword_B3F67C;
  if ( a2 < *((_WORD *)this + 0xA) )
  {
    v4 = *(this + 4);
    v3 = *(_DWORD *)(v4 + 4 * a2) == 0;
    v5 = v4 + 4 * a2;
    if ( !v3 )
    {
      v6 = *(void (__thiscall ****)(_DWORD, int))v5;
      if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v5 + 4)) )
      {
        if ( v6 )
          (**v6)(v6, 1);
      }
    }
    v7 = a2;
    if ( a2 < *((unsigned __int16 *)this + 0xA) - 1 )
    {
      v8 = a2;
      do
      {
        *(_DWORD *)(*(this + 4) + 4 * v8) = *(_DWORD *)(*(this + 4) + 4 * v8 + 4);
        v8 = (unsigned __int16)++v7;
      }
      while ( (unsigned __int16)v7 < *((unsigned __int16 *)this + 0xA) - 1 );
    }
    *(_DWORD *)(*(this + 4) + 4 * (unsigned __int16)--*((_WORD *)this + 0xA)) = 0;
    v3 = dword_B3F67C-- == 1;
    if ( v3 )
      dword_B3F678 = 0;
  }
  else
  {
    v3 = dword_B3F67C-- == 1;
    if ( v3 )
      dword_B3F678 = 0;
  }
  LeaveCriticalSection(&stru_B3F600);
}
