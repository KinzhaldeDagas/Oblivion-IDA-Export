void __thiscall sub_4A5960(_DWORD *this, int a2, int a3)
{
  char v3; // bl
  int v4; // esi
  bool v5; // cc
  const char *v6; // eax

  v3 = bDisableWarning_MESSAGES;
  v4 = dword_B34D88;
  bDisableWarning_MESSAGES = 1;
  sub_4EEDD0(this + 2, a2, a3);
  v5 = dword_B34D88 <= v4;
  bDisableWarning_MESSAGES = v3;
  if ( !v5 )
  {
    if ( a3 )
    {
      v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0xD4))(a3);
      PrintError("Warnings were encountered while loading weather list chunk from region %s", v6);
    }
  }
}
