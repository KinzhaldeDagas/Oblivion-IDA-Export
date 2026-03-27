void __thiscall __noreturn sub_43CC20(char *this, int _30, int a3)
{
  char *v3; // esi
  DWORD (__stdcall *v4)(HANDLE, DWORD); // edi
  volatile LONG *v5; // ebp
  char *v6; // ebp
  TESObjectREFR **v7; // edi
  TESObjectREFR ***v8; // ebp
  bool v9; // zf
  TESObjectREFR **v10; // edi
  TESObjectREFR **v11; // eax
  void (__thiscall ***v12)(_DWORD, int); // edi
  TESObjectREFR **a2; // [esp+14h] [ebp-18h] BYREF
  char *v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+28h] [ebp-4h]

  v14 = this;
  v3 = this + 0x18;
  while ( 1 )
  {
    v4 = WaitForSingleObject;
    v5 = (volatile LONG *)(v14 + 0xC);
    if ( WaitForSingleObject(*((HANDLE *)v14 + 5), 0xFFFFFFFF) != 0x102 )
      InterlockedDecrement(v5);
    v6 = v14;
    InterlockedIncrement((volatile LONG *)v14 + 9);
    IOManager_43C030(*((IOManager **)v6 + 0xA), (int)&a2);
    v16 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        if ( v4(*((HANDLE *)v3 + 2), 0xFFFFFFFF) != 0x102 )
          InterlockedDecrement((volatile LONG *)v3);
        if ( a2[3] != (TESObjectREFR *)6 )
          sub_43AF30(a2);
        v8 = (TESObjectREFR ***)IOManager_43C030(*((IOManager **)v6 + 0xA), (int)&v15);
        v9 = a2 == *v8;
        LOBYTE(v16) = 1;
        if ( !v9 )
        {
          if ( a2 )
          {
            v10 = a2;
            if ( !InterlockedDecrement((volatile LONG *)a2 + 2) )
              ((void (__thiscall *)(TESObjectREFR **, int))(*v10)->vtbl)(v10, 1);
          }
          v11 = *v8;
          a2 = *v8;
          if ( a2 )
            InterlockedIncrement((volatile LONG *)v11 + 2);
        }
        v12 = (void (__thiscall ***)(_DWORD, int))v15;
        LOBYTE(v16) = 0;
        if ( v15 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v15 + 8)) )
          {
            if ( v12 )
              (**v12)(v12, 1);
          }
        }
        InterlockedIncrement((volatile LONG *)v3);
        ReleaseSemaphore(*((HANDLE *)v3 + 2), 1, 0);
        v6 = v14;
        if ( !a2 )
          break;
        v4 = WaitForSingleObject;
      }
    }
    else
    {
      if ( WaitForSingleObject(*((HANDLE *)v3 + 2), 0xFFFFFFFF) != 0x102 )
        InterlockedDecrement((volatile LONG *)v3);
      InterlockedIncrement((volatile LONG *)v3);
      ReleaseSemaphore(*((HANDLE *)v3 + 2), 1, 0);
    }
    InterlockedDecrement((volatile LONG *)v6 + 9);
    v16 = 0xFFFFFFFF;
    if ( a2 )
    {
      v7 = a2;
      if ( !InterlockedDecrement((volatile LONG *)a2 + 2) )
        ((void (__thiscall *)(TESObjectREFR **, int))(*v7)->vtbl)(v7, 1);
    }
  }
}
