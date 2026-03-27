void __thiscall __noreturn sub_433BC0(char *this)
{
  char *v2; // edi
  DWORD (__stdcall *v3)(HANDLE, DWORD); // esi
  int v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // esi
  char v6; // [esp+17h] [ebp-39h]
  int v7; // [esp+18h] [ebp-38h] BYREF
  int v8; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v9[2]; // [esp+24h] [ebp-2Ch] BYREF
  int v10; // [esp+2Ch] [ebp-24h]
  int v11; // [esp+34h] [ebp-1Ch]
  int v12; // [esp+38h] [ebp-18h]
  char v13; // [esp+3Ch] [ebp-14h]
  int v14; // [esp+4Ch] [ebp-4h]

  v2 = this + 0x18;
  while ( 1 )
  {
    v3 = WaitForSingleObject;
    if ( WaitForSingleObject(*((HANDLE *)this + 5), 0xFFFFFFFF) != 0x102 )
      InterlockedDecrement((volatile LONG *)this + 3);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v9[0] = &BSTaskManagerIterator<__int64>::`vftable';
    v14 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v3(*((HANDLE *)this + 8), 0) == 0x102 )
      {
        if ( v3(*((HANDLE *)v2 + 2), 0xFFFFFFFF) != 0x102 )
          InterlockedDecrement((volatile LONG *)v2);
        (*(void (__thiscall **)(_DWORD *, int, int))v9[0])(v9, v11, v12);
        v13 &= 0xFCu;
        v11 = 0;
        v12 = 0;
        v10 = 0;
      }
      v7 = 0;
      LOBYTE(v14) = 1;
      if ( sub_433760(*((_DWORD **)this + 9), (int)v9, &v8, &v7, v6 == 0) )
      {
        v4 = v7;
        if ( *(_DWORD *)(v7 + 0xC) == 1 && InterlockedCompareExchange((volatile LONG *)(v7 + 0xC), 3, 1) == 1 )
        {
          v6 = 1;
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 9) + 0x40))(*((_DWORD *)this + 9), v4);
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 9) + 0x44))(*((_DWORD *)this + 9), v4);
        }
      }
      else if ( (v13 & 2) == 0 )
      {
        (*(void (__thiscall **)(_DWORD *, int, int))v9[0])(v9, v11, v12);
        v13 &= 0xFCu;
        v11 = 0;
        v12 = 0;
        v10 = 0;
        v6 = 0;
      }
      InterlockedIncrement((volatile LONG *)v2);
      ReleaseSemaphore(*((HANDLE *)v2 + 2), 1, 0);
      v5 = (void (__thiscall ***)(_DWORD, int))v7;
      LOBYTE(v14) = 0;
      if ( v7 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
          (**v5)(v5, 1);
      }
      if ( (v13 & 2) != 0 )
        break;
      v3 = WaitForSingleObject;
    }
  }
}
