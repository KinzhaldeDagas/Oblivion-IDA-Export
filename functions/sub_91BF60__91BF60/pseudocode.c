_WORD *__cdecl sub_91BF60(_DWORD *a1)
{
  _WORD *v1; // eax
  _WORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x32);
  v1[2] = 0x40;
  v2 = sub_91BD70(v1, a1);
  if ( v2 )
    return v2 + 4;
  else
    return 0;
}
