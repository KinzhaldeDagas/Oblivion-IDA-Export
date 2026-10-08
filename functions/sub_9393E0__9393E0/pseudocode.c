_DWORD *__cdecl sub_9393E0(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  int v7; // eax

  v4 = *(_DWORD *)unk_BA7D98; /*0x9393e6*/
  if ( a4 ) /*0x9393ef*/
  {
    v5 = (*(int (__stdcall **)(int, int))(v4 + 0x10))(0x80, 0x1C); /*0x939405*/
    *(_WORD *)(v5 + 4) = 0x80; /*0x93940b*/
    sub_93F0E0((_DWORD *)v5, a1, a2, a4); /*0x939411*/
    *(_DWORD *)v5 = &off_AA1D60; /*0x939416*/
    *(_DWORD *)(v5 + 0x30) = 0; /*0x93941c*/
    return (_DWORD *)v5; /*0x939423*/
  }
  else
  {
    v7 = (*(int (__stdcall **)(int, int))(v4 + 0x10))(0x30, 0x1C); /*0x93942c*/
    *(_WORD *)(v7 + 4) = 0x30; /*0x93943d*/
    return sub_93F0E0((_DWORD *)v7, a1, a2, 0); /*0x939443*/
  }
}
