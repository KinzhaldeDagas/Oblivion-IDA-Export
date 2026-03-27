_DWORD *__cdecl sub_8FFBB0(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  int v7; // eax

  v4 = *(_DWORD *)dword_BA7D98;
  if ( a4 )
  {
    v5 = (*(int (__stdcall **)(int, int))(v4 + 0x10))(0x80, 0x1C);
    *(_WORD *)(v5 + 4) = 0x80;
    sub_9393B0((_DWORD *)v5, a1, a2, a4);
    *(_DWORD *)v5 = &off_A9BA28;
    return (_DWORD *)v5;
  }
  else
  {
    v7 = (*(int (__stdcall **)(int, int))(v4 + 0x10))(0x30, 0x1C);
    *(_WORD *)(v7 + 4) = 0x30;
    return sub_93F0E0((_DWORD *)v7, a1, a2, 0);
  }
}
