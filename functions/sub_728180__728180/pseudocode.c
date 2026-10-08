int __thiscall sub_728180(const char **this, int a2)
{
  int v2; // ebx
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int result; // eax
  int v6; // edi
  int v7; // ebx
  int (__cdecl *v8)(int, int, int, int *, int); // edx
  int v9; // [esp-14h] [ebp-20h]
  int v10; // [esp-10h] [ebp-1Ch]

  v2 = a2; /*0x728181*/
  sub_6FE000(this, (_DWORD *)a2); /*0x72818a*/
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x728195*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x7281a5*/
  a2 = 4; /*0x7281a6*/
  result = v4(v9, this + 4, 4, &a2, 1); /*0x7281ae*/
  v6 = (int)*(this + 4); /*0x7281b0*/
  if ( v6 ) /*0x7281b7*/
  {
    v7 = *(_DWORD *)(v2 + 0x220); /*0x7281bc*/
    v8 = *(int (__cdecl **)(int, int, int, int *, int))(v7 + 8); /*0x7281c2*/
    v10 = (int)*(this + 3); /*0x7281cd*/
    a2 = 1; /*0x7281cf*/
    return v8(v7, v10, v6, &a2, 1); /*0x7281d7*/
  }
  return result; /*0x7281dc*/
}
