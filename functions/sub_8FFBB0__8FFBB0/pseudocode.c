_DWORD *__cdecl sub_8FFBB0(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  int v7; // eax

  v4 = *(_DWORD *)unk_BA7D98; /*0x8ffbb6*/
  if ( a4 ) /*0x8ffbbf*/
  {
    v5 = (*(int (__stdcall **)(int, int))(v4 + 0x10))(0x80, 0x1C); /*0x8ffbd5*/
    *(_WORD *)(v5 + 4) = 0x80; /*0x8ffbdb*/
    sub_9393B0((_DWORD *)v5, a1, a2, a4); /*0x8ffbe1*/
    *(_DWORD *)v5 = &off_A9BA28; /*0x8ffbe6*/
    return (_DWORD *)v5; /*0x8ffbec*/
  }
  else
  {
    v7 = (*(int (__stdcall **)(int, int))(v4 + 0x10))(0x30, 0x1C); /*0x8ffbf5*/
    *(_WORD *)(v7 + 4) = 0x30; /*0x8ffc06*/
    return sub_93F0E0((_DWORD *)v7, a1, a2, 0); /*0x8ffc0c*/
  }
}
