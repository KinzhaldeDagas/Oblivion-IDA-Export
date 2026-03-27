int __thiscall sub_74D310(int *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, int *, int, int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_753010(this, (_DWORD *)a2);
  v10 = v2[0x87];
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4);
  a2 = 4;
  v4(v10, this + 0x15, 4, &a2, 1);
  v9 = v2[0x87];
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 4);
  a2 = 4;
  v5(v9, this + 0x16, 4, &a2, 1);
  v6 = v2[0x87];
  v7 = *(int (__cdecl **)(int, int *, int, int *, int))(v6 + 4);
  a2 = 4;
  return v7(v6, this + 0x17, 4, &a2, 1);
}
