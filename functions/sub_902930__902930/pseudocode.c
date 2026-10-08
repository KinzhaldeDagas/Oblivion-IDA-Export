_DWORD *__cdecl sub_902930(_DWORD *a1, int **a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  int v7; // eax

  v4 = unk_BA7D98; /*0x902930*/
  if ( a4 ) /*0x90293d*/
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x10))(v4, 0x90, 0x1C); /*0x902956*/
    *(_WORD *)(v5 + 4) = 0x90; /*0x902960*/
    sub_901FF0((_DWORD *)v5, a2, a1, a3, a4); /*0x902966*/
    *(_DWORD *)v5 = &off_A9BC38; /*0x90296b*/
    return (_DWORD *)v5; /*0x902971*/
  }
  else
  {
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x10))(v4, 0x30, 0x1C); /*0x90297c*/
    *(_WORD *)(v7 + 4) = 0x30; /*0x90298d*/
    return sub_93F0E0((_DWORD *)v7, (int)a1, (int)a2, 0); /*0x902993*/
  }
}
