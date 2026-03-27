int __cdecl sub_40F6A0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int (__stdcall *v7)(int, int, int, int, int, int, _DWORD, int *, _DWORD); // edx
  int v8; // esi
  int v10; // [esp+64h] [ebp-Ch] BYREF
  _DWORD v11[2]; // [esp+68h] [ebp-8h] BYREF

  v6 = a6;
  v7 = *(int (__stdcall **)(int, int, int, int, int, int, _DWORD, int *, _DWORD))(*(_DWORD *)a1 + 0x5C);
  v10 = 0;
  if ( (v7(a1, a5, a6, 1, 0x200, a2, 0, &v10, 0) >= 0
     || (*(int (__stdcall **)(int, int, int, int, _DWORD, int, int, int *, _DWORD))(*(_DWORD *)a1 + 0x5C))(
          a1,
          a5,
          a6,
          1,
          0,
          a2,
          1,
          &v10,
          0) >= 0)
    && (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v10 + 0x4C))(v10, 0, v11, 0, 0) >= 0 )
  {
    v8 = v11[1];
    if ( a6 )
    {
      do
      {
        _memset(v8, 0, a5 * a4);
        v8 += v11[0];
        --v6;
      }
      while ( v6 );
    }
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v10 + 0x50))(v10, 0);
  }
  return v10;
}
