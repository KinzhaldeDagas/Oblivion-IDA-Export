int __stdcall sub_534D30(_DWORD *a1)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < a1[1]; ++i )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, *(_DWORD *)(*a1 + 8 * i));
  return result;
}
