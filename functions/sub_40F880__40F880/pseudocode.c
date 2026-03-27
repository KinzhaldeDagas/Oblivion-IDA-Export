signed int __cdecl sub_40F880(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  _DWORD v15[2]; // [esp+14h] [ebp-8h] BYREF

  v7 = a1[5];
  if ( v7 >= a1[8]
    || (v8 = *(_DWORD *)(a1[0x10] + 4 * v7),
        (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v8 + 0x4C))(v8, 0, v15, 0, 0) < 0) )
  {
    a1[5] = 0;
    return 0;
  }
  else
  {
    if ( a2 )
      *a2 = v15[1];
    if ( a3 )
      *a3 = v15[0];
    v9 = a1[5];
    v10 = a1[9] + (a1[0xB] != 0);
    v11 = v9 / v10;
    v12 = v9 % v10;
    if ( a4 )
      *a4 = v12 * a1[0xF];
    if ( a5 )
      *a5 = v11 * a1[0xF];
    if ( a6 )
    {
      if ( v12 < a1[9] )
        v13 = a1[0xF];
      else
        v13 = a1[0xB];
      *a6 = v13;
    }
    if ( a7 )
    {
      if ( v11 >= a1[0xA] )
      {
        *a7 = a1[0xC];
        ++a1[5];
        return 1;
      }
      *a7 = a1[0xF];
    }
    ++a1[5];
    return 1;
  }
}
