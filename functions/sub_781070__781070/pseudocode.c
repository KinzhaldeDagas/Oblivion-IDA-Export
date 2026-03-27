char __stdcall sub_781070(int a1)
{
  int v1; // esi
  int v2; // edi
  int v4; // eax
  int v5; // eax
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v1 = a1;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1);
  if ( !v2 )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x48))(v1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x38))(v1);
  v5 = sub_783BF0(v2, (int)&v6, v4, 0, 0, 0);
  if ( !v5 )
    return 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x44))(v1, v5);
  if ( D3DXGetShaderConstantTable_0(v2, &a1) >= 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x74))(v1, a1);
  if ( a1 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  return 1;
}
