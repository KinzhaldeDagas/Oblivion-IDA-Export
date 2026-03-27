char *__cdecl sub_947600(_DWORD *a1)
{
  int v1; // eax
  char *v2; // eax

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x44, 0x32);
  *(_WORD *)(v1 + 4) = 0x44;
  v2 = sub_946D90((char *)v1, a1);
  if ( v2 )
    return v2 + 8;
  else
    return 0;
}
