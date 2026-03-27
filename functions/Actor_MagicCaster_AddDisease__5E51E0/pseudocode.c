int __fastcall Actor_MagicCaster_AddDisease(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  int result; // eax

  v5 = *(_DWORD *)(a1 - 4);
  if ( v5 )
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v5 + 0x2A4))(v5, a1 != 0x5C ? a1 : 0, a3, a4, a5);
  return result;
}
