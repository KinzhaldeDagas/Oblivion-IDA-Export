int __usercall sub_8DC800@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int (__thiscall ***v4)(_DWORD, int); // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 0xC) = 0;
  for ( i = *(_DWORD *)(a2 + 0x14C) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a2 + 0x148);
    v4 = *(int (__thiscall ****)(_DWORD, int))(result + 4 * i);
    if ( v4 )
      result = (**v4)(v4, a3);
  }
  for ( j = *(_DWORD *)(a2 + 0x14C) - 1; j >= 0; --j )
  {
    result = *(_DWORD *)(a2 + 0x148);
    if ( !*(_DWORD *)(result + 4 * j) )
    {
      v6 = *(_DWORD *)(a2 + 0x14C) - 1;
      *(_DWORD *)(a2 + 0x14C) = v6;
      for ( result = j; result < *(_DWORD *)(a2 + 0x14C); ++result )
        *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result + 4);
    }
  }
  return result;
}
