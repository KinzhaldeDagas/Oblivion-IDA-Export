_DWORD *__cdecl sub_902100(int **a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  int v7; // eax

  v4 = unk_BA7D98; /*0x902100*/
  if ( a4 ) /*0x90210f*/
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x10))(v4, 0x90, 0x1C); /*0x902118*/
    *(_WORD *)(v5 + 4) = 0x90; /*0x90212d*/
    return sub_901FF0((_DWORD *)v5, a1, a2, a3, a4); /*0x902133*/
  }
  else
  {
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x10))(v4, 0x30, 0x1C); /*0x90213e*/
    *(_WORD *)(v7 + 4) = 0x30; /*0x90214f*/
    return sub_93F0E0((_DWORD *)v7, (int)a1, (int)a2, 0); /*0x902155*/
  }
}
