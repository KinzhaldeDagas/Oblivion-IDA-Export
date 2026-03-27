int __cdecl sub_8FD760(int a1, int a2, int a3)
{
  int v3; // edi
  _WORD *v4; // esi
  int v5; // eax

  v3 = 0;
  if ( *(_BYTE *)(a2 + 0x21) )
  {
    v4 = (_WORD *)(a2 + 2);
    do
    {
      HIWORD(v5) = 0;
      if ( *v4 != 0xFFFF )
      {
        LOWORD(v5) = *v4;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x10))(a3, v5);
      }
      ++v3;
      v4 += 2;
    }
    while ( v3 < *(unsigned __int8 *)(a2 + 0x21) );
  }
  *(_BYTE *)(a2 + 0x21) = 0;
  *(_BYTE *)(a1 + 2) = 0;
  return a2 + 0x50;
}
