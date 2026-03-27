char __cdecl sub_939B60(_BYTE *a1, int a2)
{
  int v2; // eax
  int v3; // ebp
  _WORD *v4; // esi
  int v5; // eax

  LOBYTE(v2) = a1[2];
  v3 = 0;
  if ( (_BYTE)v2 )
  {
    v4 = a1 + 6;
    do
    {
      HIWORD(v5) = 0;
      if ( *v4 != 0xFFFF )
      {
        LOWORD(v5) = *v4;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x10))(a2, v5);
      }
      v2 = (unsigned __int8)a1[2];
      ++v3;
      v4 += 4;
    }
    while ( v3 < v2 );
  }
  a1[2] = 0;
  *a1 = 0;
  a1[1] = 0;
  return v2;
}
