char __cdecl sub_77EB50(int a1)
{
  int v2; // eax

  if ( !shaderProgramFactory || !a1 )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x38))(a1) )
    return 1;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x20))(a1);
  if ( v2 )
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x20))(v2, a1);
  else
    return 0;
}
