int __fastcall Actor_MagicCaster_AddAbility(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  int result; // eax

  v4 = *(_DWORD *)(a1 - 4);
  if ( v4 )
    return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v4 + 0x2A0))(v4, a1 != 0x5C ? a1 : 0, a3, a4);
  return result;
}
