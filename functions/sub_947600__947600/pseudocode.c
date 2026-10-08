char *__cdecl sub_947600(_DWORD *a1)
{
  int v1; // eax
  char *v2; // eax

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x44, 0x32); /*0x94760c*/
  *(_WORD *)(v1 + 4) = 0x44; /*0x947616*/
  v2 = sub_946D90((char *)v1, a1); /*0x94761c*/
  if ( v2 ) /*0x947623*/
    return v2 + 8; /*0x947625*/
  else
    return 0; /*0x947629*/
}
