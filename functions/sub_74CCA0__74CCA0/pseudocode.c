int __thiscall sub_74CCA0(int *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_753010(this, (_DWORD *)a2);
  v8 = v2[0x87];
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4);
  a2 = 4;
  v4(v8, this + 0x15, 4, &a2, 1);
  v5 = v2[0x87];
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 4);
  a2 = 4;
  return v6(v5, this + 0x16, 4, &a2, 1);
}
