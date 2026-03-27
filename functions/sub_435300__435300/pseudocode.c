int __thiscall sub_435300(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B39C80, (int)"QueuedHead::Run()");
  v2 = (_DWORD *)*(this + 8);
  v8 = 0;
  v9 = 0;
  sub_523220(v2, &v8, &v9);
  v3 = *(this + 9);
  v4 = v8;
  if ( v3 != v8 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *(this + 9) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  v5 = *(this + 0xA);
  v6 = v9;
  if ( v5 != v9 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *(this + 0xA) = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  return NiLeaveCriticalSection_0(&stru_B39C80);
}
