void __cdecl sub_8A9D10(int a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // eax
  _BYTE *v4; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  char v7[4]; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h]

  v1 = a1; /*0x8a9d15*/
  v2 = *(_DWORD *)(a1 + 8); /*0x8a9d19*/
  if ( v2 ) /*0x8a9d1e*/
  {
    if ( *(_DWORD *)(v2 + 0x88) ) /*0x8a9d24*/
    {
      v7[0] = 0x15; /*0x8a9d35*/
      v8 = a1; /*0x8a9d3a*/
      sub_898820((int *)v2, (int)v7); /*0x8a9d3e*/
    }
    else
    {
      *(_DWORD *)(v2 + 0x88) = 1; /*0x8a9d49*/
      v3 = *(_DWORD *)(v1 + 0x14); /*0x8a9d53*/
      v6 = v1; /*0x8a9d58*/
      if ( v3 ) /*0x8a9d5c*/
        sub_8D7400(&v6, 1, v2); /*0x8a9d66*/
      (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(v2 + 8) + 0x1C))(*(_DWORD *)(v2 + 8), &v6, 1, v2); /*0x8a9d7b*/
      v4 = sub_8A63F0((_DWORD *)v1, &a1); /*0x8a9d85*/
      if ( !*v4 ) /*0x8a9d8a*/
      {
        LOBYTE(v4) = *(_BYTE *)(v2 + 0xA6); /*0x8a9d8f*/
        if ( (_BYTE)v4 ) /*0x8a9d97*/
        {
          LOBYTE(v4) = *(_BYTE *)(v1 + 0x91); /*0x8a9d99*/
          if ( !(_BYTE)v4 ) /*0x8a9da1*/
            LOBYTE(v4) = sub_8A6410(v1); /*0x8a9da5*/
        }
        sub_8DD030((int)v4, v2, v1); /*0x8a9dac*/
      }
      if ( (*(_DWORD *)(v2 + 0x88))-- == 1 ) /*0x8a9db4*/
      {
        if ( *(_DWORD *)(v2 + 0x84) ) /*0x8a9dbc*/
        {
          if ( !*(_BYTE *)(v2 + 0x90) ) /*0x8a9dc6*/
            sub_899210(v2); /*0x8a9dd2*/
        }
      }
    }
  }
}
