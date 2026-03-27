int __cdecl sub_77F7E0(int a1)
{
  int v1; // esi
  int result; // eax

  dword_B428C4 = a1;
  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 0x280);
    result = dword_B428C0;
    if ( dword_B428C0 )
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(dword_B428C0);
    dword_B428C0 = v1;
    if ( v1 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 4))(v1);
  }
  else
  {
    result = dword_B428C0;
    if ( dword_B428C0 )
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(dword_B428C0);
    dword_B428C0 = 0;
  }
  return result;
}
