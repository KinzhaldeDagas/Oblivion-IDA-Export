signed int __usercall sub_8BBA80@<eax>(int a1@<ebx>, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // eax

  if ( byte_BA8040 )
    return 0;
  sub_8BA9C0();
  if ( a2 )
  {
    sub_8A70F0(a2);
    v5 = a3;
    if ( !a3 )
    {
      v6 = (_DWORD *)FormHeapAlloc(0x330u);
      if ( v6 )
        v5 = sub_8A72A0(v6, a2, 0);
      else
        v5 = 0;
    }
    sub_8A7260((int)v5);
    sub_8BA9C0();
    v7 = (_DWORD *)FormHeapAlloc(0x330u);
    if ( v7 )
      dword_BA7D9C = (int)sub_8A72A0(v7, a2, 0);
    else
      dword_BA7D9C = 0;
    v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x15);
    *(_WORD *)(v8 + 4) = 8;
    *(_WORD *)(v8 + 6) = 1;
    *(_DWORD *)v8 = &off_A98240;
    sub_534070(v8);
    v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x28, 0x15);
    *(_WORD *)(v9 + 4) = 0x28;
    v10 = sub_8BB560(v9, a1, a4, a5);
    sub_534020((int)v10);
    sub_8BB420();
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_BA803C + 8))(dword_BA803C);
    byte_BA8040 = 1;
    return 0;
  }
  __debugbreak();
  return 1;
}
