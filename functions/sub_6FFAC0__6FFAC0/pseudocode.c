char __thiscall sub_6FFAC0(_WORD *this, const char *a2)
{
  __int16 v3; // bp
  bool v4; // zf
  __int16 v6; // di
  __int16 v7; // si
  int v8; // eax

  v3 = 0;
  if ( !*(this + 0xA) )
    return 0;
  EnterCriticalSection(&stru_B3F600);
  dword_B3F678 = GetCurrentThreadId();
  ++dword_B3F67C;
  if ( !a2 )
  {
    v4 = dword_B3F67C-- == 1;
    if ( v4 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return 0;
  }
  v6 = *(this + 0xA) - 1;
  if ( v6 < 0 )
  {
LABEL_13:
    v4 = dword_B3F67C-- == 1;
    if ( v4 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = (v3 + v6) >> 1;
      v8 = strcmp(a2, (const char *)sub_452A60(*(Atmosphere **)(*((_DWORD *)this + 4) + 4 * v7)));
      if ( !v8 )
        break;
      if ( v8 <= 0 )
        v6 = v7 - 1;
      else
        v3 = v7 + 1;
      if ( v3 > v6 )
        goto LABEL_13;
    }
    sub_6FF480(this, (v3 + v6) >> 1);
    v4 = dword_B3F67C-- == 1;
    if ( v4 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return 1;
  }
}
