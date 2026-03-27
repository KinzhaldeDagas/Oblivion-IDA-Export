char __stdcall sub_8DED40(int a1, float a2)
{
  int v2; // edi
  _BYTE *v3; // eax
  int v4; // ebx
  float v5; // ebp
  int v6; // esi

  v2 = a1;
  LOBYTE(v3) = *(_BYTE *)(a1 + 0xA5);
  if ( (_BYTE)v3 )
  {
    v4 = *(_DWORD *)(a1 + 0x3C) - 1;
    if ( v4 >= 0 )
    {
      v5 = a2;
      do
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v2 + 0x38) + 4 * v4);
        v3 = sub_8DDCD0(v6, &a1, v5);
        if ( *v3 )
          LOBYTE(v3) = sub_8CBBB0(v2, v6);
        --v4;
      }
      while ( v4 >= 0 );
    }
  }
  return (char)v3;
}
