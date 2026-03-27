int __thiscall sub_728180(const char **this, int a2)
{
  _DWORD *v2; // ebx
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int result; // eax
  int v6; // edi
  int v7; // ebx
  int (__cdecl *v8)(int, int, int, int *, int); // edx
  int v9; // [esp-14h] [ebp-20h]
  int v10; // [esp-10h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_6FE000(this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(v2[0x88] + 8);
  v9 = v2[0x88];
  a2 = 4;
  result = v4(v9, this + 4, 4, &a2, 1);
  v6 = (int)*(this + 4);
  if ( v6 )
  {
    v7 = v2[0x88];
    v8 = *(int (__cdecl **)(int, int, int, int *, int))(v7 + 8);
    v10 = (int)*(this + 3);
    a2 = 1;
    return v8(v7, v10, v6, &a2, 1);
  }
  return result;
}
