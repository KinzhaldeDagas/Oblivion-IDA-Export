void __fastcall sub_7A9C30(int a1)
{
  _DWORD *v1; // edi
  void (__stdcall *v2)(LPCRITICAL_SECTION); // ebx
  DWORD (__stdcall *v3)(); // ebp
  _DWORD *v4; // esi
  bool v5; // zf
  _DWORD *v6; // ecx
  int v7; // [esp+4h] [ebp-4h]

  v1 = *(_DWORD **)(a1 + 0xC);
  v7 = a1;
  if ( v1 )
  {
    v2 = EnterCriticalSection;
    v3 = GetCurrentThreadId;
    do
    {
      v4 = v1;
      v1 = (_DWORD *)*v1;
      v2(&stru_B33F00);
      dword_B33F78 = v3();
      ++dword_B33F7C;
      v4[1] = 0;
      *v4 = dword_B33EAC;
      v5 = dword_B33F7C-- == 1;
      dword_B33EAC = (int)v4;
      if ( v5 )
        dword_B33F78 = 0;
      LeaveCriticalSection(&stru_B33F00);
    }
    while ( v1 );
    a1 = v7;
  }
  *(_DWORD *)(a1 + 0xC) = 0;
  v6 = *(_DWORD **)(a1 + 8);
  if ( v6 )
    *v6 = 0;
}
