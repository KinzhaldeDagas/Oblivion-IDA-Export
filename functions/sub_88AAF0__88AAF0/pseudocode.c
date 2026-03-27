int __cdecl sub_88AAF0(int a1, int a2)
{
  _DWORD *v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edx

  v2 = *(_DWORD **)(a1 + 0x10);
  v3 = *(_DWORD *)(a2 + 0x10);
  v4 = *(_DWORD *)(a2 + 0xC);
  if ( v2 && (v5 = v2[2]) != 0 && (v6 = v5 + 0x14) != 0 )
    v7 = *(_DWORD *)(v6 + 0x1C);
  else
    v7 = 0;
  result = v7 & 0x3F;
  if ( v3 != result && (!v4 || v4 == result) )
  {
    v9 = v7 ^ ((unsigned __int8)v3 ^ (unsigned __int8)v7) & 0x3F;
    if ( v2 )
    {
      v10 = v2[2];
      if ( v10 )
      {
        v11 = v10 + 0x14;
        if ( v11 )
          *(_DWORD *)(v11 + 0x1C) = v9;
      }
    }
    return (*(int (__thiscall **)(_DWORD *))(*v2 + 0x80))(v2);
  }
  return result;
}
