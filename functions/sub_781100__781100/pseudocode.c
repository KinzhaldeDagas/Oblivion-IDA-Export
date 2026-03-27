char __stdcall sub_781100(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v5; // eax

  v1 = a1;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v5 = sub_783C30(v2);
  if ( !v5 )
    return 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x3C))(v1, v5);
  if ( D3DXGetShaderConstantTable_0(v3, &a1) >= 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x5C))(v1, a1);
  if ( a1 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  return 1;
}
