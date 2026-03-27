void __cdecl sub_8A9D10(int a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // eax
  _BYTE *v4; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  char v7[4]; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 0x88) )
    {
      v7[0] = 0x15;
      v8 = a1;
      sub_898820((int *)v2, (int)v7);
    }
    else
    {
      *(_DWORD *)(v2 + 0x88) = 1;
      v3 = *(_DWORD *)(v1 + 0x14);
      v6 = v1;
      if ( v3 )
        sub_8D7400(&v6, 1, v2);
      (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(v2 + 8) + 0x1C))(*(_DWORD *)(v2 + 8), &v6, 1, v2);
      v4 = sub_8A63F0((_DWORD *)v1, &a1);
      if ( !*v4 )
      {
        LOBYTE(v4) = *(_BYTE *)(v2 + 0xA6);
        if ( (_BYTE)v4 )
        {
          LOBYTE(v4) = *(_BYTE *)(v1 + 0x91);
          if ( !(_BYTE)v4 )
            LOBYTE(v4) = sub_8A6410(v1);
        }
        sub_8DD030((int)v4, v2, v1);
      }
      if ( (*(_DWORD *)(v2 + 0x88))-- == 1 )
      {
        if ( *(_DWORD *)(v2 + 0x84) )
        {
          if ( !*(_BYTE *)(v2 + 0x90) )
            sub_899210(v2);
        }
      }
    }
  }
}
