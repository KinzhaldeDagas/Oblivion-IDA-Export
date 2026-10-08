int __stdcall sub_534D30(_DWORD *a1)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < a1[1]; ++i ) /*0x534d3e*/
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(_DWORD *)(*a1 + 8 * i)); /*0x534d59*/
  return result; /*0x534d63*/
}
