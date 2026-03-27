char __cdecl sub_7383F0(int a1, int a2, int a3)
{
  if ( a1 && dword_B40120 )
    return (*(int (__thiscall **)(NiD3DShaderFactory *, int, int, int))(*(_DWORD *)dword_B40120 + 0x10))(
             dword_B40120,
             a1,
             a2,
             a3);
  else
    return 0;
}
