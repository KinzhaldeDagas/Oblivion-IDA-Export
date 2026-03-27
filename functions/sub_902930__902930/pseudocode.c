_DWORD *__cdecl sub_902930(_DWORD *a1, int **a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  int v7; // eax

  v4 = dword_BA7D98;
  if ( a4 )
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x10))(v4, 0x90, 0x1C);
    *(_WORD *)(v5 + 4) = 0x90;
    sub_901FF0((_DWORD *)v5, a2, a1, a3, a4);
    *(_DWORD *)v5 = &off_A9BC38;
    return (_DWORD *)v5;
  }
  else
  {
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x10))(v4, 0x30, 0x1C);
    *(_WORD *)(v7 + 4) = 0x30;
    return sub_93F0E0((_DWORD *)v7, (int)a1, (int)a2, 0);
  }
}
