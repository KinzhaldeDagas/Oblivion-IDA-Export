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

  v14 = this; /*0x43cc47*/
  v3 = this + 0x18; /*0x43cc51*/
  while ( 1 ) /*0x43cc5b*/
  {
    v4 = WaitForSingleObject; /*0x43cc5b*/
    v5 = (volatile LONG *)(v14 + 0xC); /*0x43cc61*/
    if ( WaitForSingleObject(*((HANDLE *)v14 + 5), 0xFFFFFFFF) != 0x102 ) /*0x43cc6e*/
      InterlockedDecrement(v5); /*0x43cc71*/
    v6 = v14; /*0x43cc73*/
    InterlockedIncrement((volatile LONG *)v14 + 9); /*0x43cc7b*/
    IOManager_43C030(*((IOManager **)v6 + 0xA), (int)&a2); /*0x43cc89*/
    v16 = 0; /*0x43cc93*/
    if ( a2 ) /*0x43cc9b*/
    {
      while ( 1 ) /*0x43cd16*/
      {
        if ( v4(*((HANDLE *)v3 + 2), 0xFFFFFFFF) != 0x102 ) /*0x43cd23*/
          InterlockedDecrement((volatile LONG *)v3); /*0x43cd26*/
        if ( a2[3] != (TESObjectREFR *)6 ) /*0x43cd30*/
          sub_43AF30(a2); /*0x43cd32*/
        v8 = (TESObjectREFR ***)IOManager_43C030(*((IOManager **)v6 + 0xA), (int)&v15); /*0x43cd44*/
        v9 = a2 == *v8; /*0x43cd4a*/
        LOBYTE(v16) = 1; /*0x43cd4d*/
        if ( !v9 ) /*0x43cd52*/
        {
          if ( a2 ) /*0x43cd56*/
          {
            v10 = a2; /*0x43cd58*/
            if ( !InterlockedDecrement((volatile LONG *)a2 + 2) ) /*0x43cd5e*/
              ((void (__thiscall *)(TESObjectREFR **, int))(*v10)->vtbl)(v10, 1); /*0x43cd70*/
          }
          v11 = *v8; /*0x43cd72*/
          a2 = *v8; /*0x43cd77*/
          if ( a2 ) /*0x43cd7b*/
            InterlockedIncrement((volatile LONG *)v11 + 2); /*0x43cd81*/
        }
        v12 = (void (__thiscall ***)(_DWORD, int))v15; /*0x43cd87*/
        LOBYTE(v16) = 0; /*0x43cd8d*/
        if ( v15 ) /*0x43cd92*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v15 + 8)) ) /*0x43cd98*/
          {
            if ( v12 ) /*0x43cda0*/
              (**v12)(v12, 1); /*0x43cdaa*/
          }
        }
        InterlockedIncrement((volatile LONG *)v3); /*0x43cdad*/
        ReleaseSemaphore(*((HANDLE *)v3 + 2), 1, 0); /*0x43cdbb*/
        v6 = v14; /*0x43cdc8*/
        if ( !a2 ) /*0x43cdcc*/
          break; /*0x43cdcc*/
        v4 = WaitForSingleObject; /*0x43cd10*/
      }
    }
    else
    {
      if ( WaitForSingleObject(*((HANDLE *)v3 + 2), 0xFFFFFFFF) != 0x102 ) /*0x43ccaa*/
        InterlockedDecrement((volatile LONG *)v3); /*0x43ccad*/
      InterlockedIncrement((volatile LONG *)v3); /*0x43ccb0*/
      ReleaseSemaphore(*((HANDLE *)v3 + 2), 1, 0); /*0x43ccbe*/
    }
    InterlockedDecrement((volatile LONG *)v6 + 9); /*0x43ccca*/
    v16 = 0xFFFFFFFF; /*0x43ccd2*/
    if ( a2 ) /*0x43ccda*/
    {
      v7 = a2; /*0x43cce0*/
      if ( !InterlockedDecrement((volatile LONG *)a2 + 2) ) /*0x43cce6*/
        ((void (__thiscall *)(TESObjectREFR **, int))(*v7)->vtbl)(v7, 1); /*0x43cd00*/
    }
  }
}
