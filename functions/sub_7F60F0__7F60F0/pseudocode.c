void __stdcall sub_7F60F0(int a1, int a2, int a3, int a4)
{
  unsigned __int8 i; // bl
  int v5; // ecx
  float v6; // [esp+1Ch] [ebp+Ch]

  v6 = *(float *)(a3 + 0x94);
  for ( i = 0; i < *(_BYTE *)(a2 + 8); ++i )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 4 * i);
    if ( !a4 || i >= *(_BYTE *)(a4 + 8) || v5 != *(_DWORD *)(*(_DWORD *)(a4 + 0xC) + 4 * i) )
      sub_7EE390(i, v5, v6);
  }
}
