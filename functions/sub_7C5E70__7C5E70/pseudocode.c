void __thiscall sub_7C5E70(_DWORD *this, int a2)
{
  int v3; // esi
  char v4; // bl
  DWORD CurrentThreadId; // eax

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    if ( v3 )
    {
      v4 = 0;
      if ( byte_B43384 )
      {
        EnterCriticalSection(&stru_B43400);
        CurrentThreadId = GetCurrentThreadId();
        ++dword_B4347C;
        dword_B43478 = CurrentThreadId;
        v4 = 1;
      }
      sub_7C5D90(this, v3);
      if ( v4 )
      {
        if ( dword_B4347C-- == 1 )
          dword_B43478 = 0;
        LeaveCriticalSection(&stru_B43400);
      }
    }
  }
}
