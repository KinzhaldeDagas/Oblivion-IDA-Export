int __thiscall sub_7386E0(int *this, int a2)
{
  _DWORD *v3; // edi
  int (__cdecl *v4)(int, int *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v3 = (_DWORD *)a2;
  sub_713620((_DWORD *)a2, (int)(this + 2));
  v4 = *(int (__cdecl **)(int, int *, int, int *, int))(v3[0x87] + 4);
  v6 = v3[0x87];
  a2 = 4;
  return v4(v6, this + 3, 4, &a2, 1);
}
