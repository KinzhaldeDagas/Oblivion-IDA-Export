char __cdecl Cmd_SkipAnim(int a1, int a2, int a3)
{
  _BYTE *v3; // eax

  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x164))(a3) )
    {
      v3 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x164))(a3);
      sub_4706D0(v3, 5);
    }
  }
  return 1;
}
