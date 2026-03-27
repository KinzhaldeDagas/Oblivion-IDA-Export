int __usercall sub_8DE600@<eax>(int result@<eax>, int a2@<ecx>)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x60) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a2 + 0x5C);
    v4 = *(_DWORD *)(result + 4 * i);
    if ( v4 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xC))(v4, a2);
  }
  for ( j = *(_DWORD *)(a2 + 0x60) - 1; j >= 0; --j )
  {
    result = *(_DWORD *)(a2 + 0x5C);
    if ( !*(_DWORD *)(result + 4 * j) )
    {
      v6 = *(_DWORD *)(a2 + 0x60) - 1;
      *(_DWORD *)(a2 + 0x60) = v6;
      for ( result = j; result < *(_DWORD *)(a2 + 0x60); ++result )
        *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result + 4);
    }
  }
  return result;
}
