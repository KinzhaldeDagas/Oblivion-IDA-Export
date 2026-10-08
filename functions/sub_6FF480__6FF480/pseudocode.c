void __thiscall sub_6FF480(_DWORD *this, unsigned __int16 a2)
{
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebp
  int v7; // ecx
  int v8; // eax

  EnterCriticalSection(&unk_B3F600); /*0x6ff489*/
  unk_B3F678 = GetCurrentThreadId(); /*0x6ff49a*/
  ++unk_B3F67C; /*0x6ff4a4*/
  if ( a2 < *((_WORD *)this + 0xA) ) /*0x6ff4ae*/
  {
    v4 = *(this + 4); /*0x6ff4d2*/
    v3 = *(_DWORD *)(v4 + 4 * a2) == 0; /*0x6ff4d9*/
    v5 = v4 + 4 * a2; /*0x6ff4dd*/
    if ( !v3 ) /*0x6ff4e0*/
    {
      v6 = *(void (__thiscall ****)(_DWORD, int))v5; /*0x6ff4e3*/
      if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v5 + 4)) ) /*0x6ff4e9*/
      {
        if ( v6 ) /*0x6ff4f5*/
          (**v6)(v6, 1); /*0x6ff500*/
      }
    }
    v7 = a2; /*0x6ff50c*/
    if ( a2 < *((unsigned __int16 *)this + 0xA) - 1 ) /*0x6ff50f*/
    {
      v8 = a2; /*0x6ff511*/
      do /*0x6ff52d*/
      {
        *(_DWORD *)(*(this + 4) + 4 * v8) = *(_DWORD *)(*(this + 4) + 4 * v8 + 4); /*0x6ff51c*/
        v8 = (unsigned __int16)++v7; /*0x6ff525*/
      }
      while ( (unsigned __int16)v7 < *((unsigned __int16 *)this + 0xA) - 1 ); /*0x6ff52d*/
    }
    *(_DWORD *)(*(this + 4) + 4 * (unsigned __int16)--*((_WORD *)this + 0xA)) = 0; /*0x6ff53f*/
    v3 = unk_B3F67C-- == 1; /*0x6ff546*/
    if ( v3 ) /*0x6ff54e*/
      unk_B3F678 = 0; /*0x6ff550*/
  }
  else
  {
    v3 = unk_B3F67C-- == 1; /*0x6ff4b0*/
    if ( v3 ) /*0x6ff4b6*/
      unk_B3F678 = 0; /*0x6ff4b8*/
  }
  LeaveCriticalSection(&unk_B3F600); /*0x6ff564*/
}
