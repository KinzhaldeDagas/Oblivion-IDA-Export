int __cdecl sub_8AFB50(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int v9; // esi

  v2 = 0;
  if ( !a1 )
    return v2;
  v3 = sub_47FAC0(a1);
  if ( !v3
    || (result = *(_DWORD *)(v3 + 0x10)) == 0
    || ((v5 = *(_DWORD *)(result + 8)) == 0 || (v6 = v5 + 0x14) == 0 ? (v7 = 0) : (v7 = *(_DWORD *)(v6 + 0x1C)),
        ((v7 >> 8) & 0x1F) != a2) )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        if ( *(unsigned __int16 *)(v8 + 0xB6) <= v9 )
          break;
        v2 = sub_8AFB50(*(_DWORD *)(*(_DWORD *)(v8 + 0xB0) + 4 * v9++), a2);
      }
      while ( !v2 );
    }
    return v2;
  }
  return result;
}
