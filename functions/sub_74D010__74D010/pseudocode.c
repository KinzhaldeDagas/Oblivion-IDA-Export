int __thiscall sub_74D010(int *this, int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, int *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_753010(this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(int, int *, int, int *, int))(v2[0x87] + 4);
  v6 = v2[0x87];
  a2 = 4;
  return v4(v6, this + 0x15, 4, &a2, 1);
}
