_DWORD *__cdecl sub_919F80(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x48, 0x32);
  v1[2] = 0x48;
  v2 = sub_919D90(v1, a1);
  if ( v2 )
    return v2 + 2;
  else
    return 0;
}
