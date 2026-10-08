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

  v2 = this + 0x18; /*0x433be9*/
  while ( 1 ) /*0x433bf3*/
  {
    v3 = WaitForSingleObject; /*0x433bf3*/
    if ( WaitForSingleObject(*((HANDLE *)this + 5), 0xFFFFFFFF) != 0x102 ) /*0x433c03*/
      InterlockedDecrement((volatile LONG *)this + 3); /*0x433c09*/
    v10 = 0; /*0x433c0f*/
    v11 = 0; /*0x433c13*/
    v12 = 0; /*0x433c17*/
    v13 = 0; /*0x433c1b*/
    v9[0] = &BSTaskManagerIterator<__int64>::`vftable'; /*0x433c1f*/
    v14 = 0; /*0x433c27*/
    v6 = 0; /*0x433c2b*/
    while ( 1 ) /*0x433c37*/
    {
      if ( v3(*((HANDLE *)this + 8), 0) == 0x102 ) /*0x433c43*/
      {
        if ( v3(*((HANDLE *)v2 + 2), 0xFFFFFFFF) != 0x102 ) /*0x433c52*/
          InterlockedDecrement((volatile LONG *)v2); /*0x433c55*/
        (*(void (__thiscall **)(_DWORD *, int, int))v9[0])(v9, v11, v12); /*0x433c6f*/
        v13 &= 0xFCu; /*0x433c71*/
        v11 = 0; /*0x433c76*/
        v12 = 0; /*0x433c7a*/
        v10 = 0; /*0x433c7e*/
      }
      v7 = 0; /*0x433c82*/
      LOBYTE(v14) = 1; /*0x433c95*/
      if ( sub_433760(*((_DWORD **)this + 9), (int)v9, &v8, &v7, v6 == 0) ) /*0x433ca5*/
      {
        v4 = v7; /*0x433cae*/
        if ( *(_DWORD *)(v7 + 0xC) == 1 && InterlockedCompareExchange((volatile LONG *)(v7 + 0xC), 3, 1) == 1 ) /*0x433cce*/
        {
          v6 = 1; /*0x433cd9*/
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 9) + 0x40))(*((_DWORD *)this + 9), v4);// BSTaskManager worker dispatches the selected IOTask through IOManager vtable slot +0x40 (stage 1). /*0x433cde*/
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 9) + 0x44))(*((_DWORD *)this + 9), v4);// BSTaskManager worker then dispatches IOManager vtable slot +0x44 (stage 2). /*0x433ce9*/
        }
      }
      else if ( (v13 & 2) == 0 ) /*0x433cf2*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))v9[0])(v9, v11, v12); /*0x433d08*/
        v13 &= 0xFCu; /*0x433d0a*/
        v11 = 0; /*0x433d0f*/
        v12 = 0; /*0x433d13*/
        v10 = 0; /*0x433d17*/
        v6 = 0; /*0x433d1b*/
      }
      InterlockedIncrement((volatile LONG *)v2); /*0x433d20*/
      ReleaseSemaphore(*((HANDLE *)v2 + 2), 1, 0); /*0x433d2d*/
      v5 = (void (__thiscall ***)(_DWORD, int))v7; /*0x433d35*/
      LOBYTE(v14) = 0; /*0x433d3b*/
      if ( v7 ) /*0x433d3f*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x433d45*/
          (**v5)(v5, 1); /*0x433d57*/
      }
      if ( (v13 & 2) != 0 ) /*0x433d5e*/
        break; /*0x433d5e*/
      v3 = WaitForSingleObject; /*0x433c31*/
    }
  }
}
