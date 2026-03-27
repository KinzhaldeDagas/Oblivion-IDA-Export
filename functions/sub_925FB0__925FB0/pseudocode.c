int __cdecl sub_925FB0(int a1, int a2)
{
  int result; // eax
  int i; // ecx
  unsigned int v5; // esi
  int v6; // edi
  unsigned int j; // edi
  int v8; // [esp+Ch] [ebp+4h]

  result = *(_DWORD *)(a1 + 4);
  for ( i = 0; i < result; result = *(_DWORD *)(a1 + 4) )
  {
    v5 = *(_DWORD *)(*(_DWORD *)a1 + 4 * i++);
    v8 = i;
    if ( i == result )
      v6 = *(_DWORD *)(a1 + 0x10);
    else
      v6 = *(unsigned __int16 *)(a1 + 0x16);
    for ( j = v5 + v6; v5 < j; v5 += *(unsigned __int8 *)(v5 + 3) )
    {
      if ( *(_BYTE *)v5 == 2 || *(_BYTE *)v5 == 4 || *(_BYTE *)v5 == 6 )
      {
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
          a2,
          "ContactMgr",
          8,
          *(_DWORD *)(v5 + 0x10));
        i = v8;
      }
    }
  }
  return result;
}
