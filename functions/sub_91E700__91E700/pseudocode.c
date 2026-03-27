_DWORD *__cdecl sub_91E700(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x38, 0xE);
  v1[2] = 0x38;
  v2 = sub_91E3F0(v1, a1);
  if ( v2 )
    return v2 + 2;
  else
    return 0;
}
