signed int __usercall sub_8BBA80@<eax>(int a1@<ebx>, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // eax

  if ( unk_BA8040 ) /*0x8bba80*/
    return 0; /*0x8bba88*/
  sub_8BA9C0(); /*0x8bba8e*/
  if ( a2 ) /*0x8bba99*/
  {
    sub_8A70F0(a2); /*0x8bbaa0*/
    v5 = a3; /*0x8bbaa5*/
    if ( !a3 ) /*0x8bbaae*/
    {
      v6 = (_DWORD *)FormHeapAlloc(0x330u); /*0x8bbab5*/
      if ( v6 ) /*0x8bbabf*/
        v5 = sub_8A72A0(v6, a2, 0); /*0x8bbac6*/
      else
        v5 = 0; /*0x8bbacd*/
    }
    sub_8A7260((int)v5); /*0x8bbad0*/
    sub_8BA9C0(); /*0x8bbad5*/
    v7 = (_DWORD *)FormHeapAlloc(0x330u); /*0x8bbadf*/
    if ( v7 ) /*0x8bbae9*/
      unk_BA7D9C = (int)sub_8A72A0(v7, a2, 0); /*0x8bbaf5*/
    else
      unk_BA7D9C = 0; /*0x8bbafc*/
    v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x15); /*0x8bbb12*/
    *(_WORD *)(v8 + 4) = 8; /*0x8bbb16*/
    *(_WORD *)(v8 + 6) = 1; /*0x8bbb1c*/
    *(_DWORD *)v8 = &off_A98240; /*0x8bbb22*/
    sub_534070(v8); /*0x8bbb28*/
    v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x15); /*0x8bbb3c*/
    *(_WORD *)(v9 + 4) = 0x28; /*0x8bbb4b*/
    v10 = sub_8BB560(v9, a1, a4, a5); /*0x8bbb51*/
    sub_534020((int)v10); /*0x8bbb57*/
    sub_8BB420(); /*0x8bbb5f*/
    (*(void (__thiscall **)(int))(*(_DWORD *)unk_BA803C + 8))(unk_BA803C); /*0x8bbb6c*/
    unk_BA8040 = 1; /*0x8bbb6f*/
    return 0; /*0x8bbb79*/
  }
  __debugbreak(); /*0x8bbb7a*/
  return 1; /*0x8bbb78*/
}
