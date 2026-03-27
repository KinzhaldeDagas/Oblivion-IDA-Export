void __thiscall sub_7C5D00(_DWORD *this, _BYTE *a2)
{
  char v3; // bl
  DWORD CurrentThreadId; // eax
  _DWORD *v5; // esi
  void *v6; // ecx

  if ( a2 )
  {
    if ( (a2[0x18] & 1) == 0 )
    {
      v3 = 0;
      if ( byte_B43384 )
      {
        EnterCriticalSection(&stru_B43400);
        CurrentThreadId = GetCurrentThreadId();
        ++dword_B4347C;
        dword_B43478 = CurrentThreadId;
        v3 = 1;
      }
      v5 = (_DWORD *)*(this + 0x3A);
      while ( v5 )
      {
        v6 = (void *)v5[2];
        v5 = (_DWORD *)*v5;
        if ( v6 )
          ShadowSceneLight_AddToScene____(v6, a2);
      }
      if ( v3 )
      {
        if ( dword_B4347C-- == 1 )
          dword_B43478 = 0;
        LeaveCriticalSection(&stru_B43400);
      }
    }
  }
}
