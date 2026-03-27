int __thiscall sub_45BB00(void *this, int a2, int a3, int a4)
{
  int (__cdecl *v4)(int, int, int, int *, int); // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this;
  v4 = *(int (__cdecl **)(int, int, int, int *, int))(a2 + 4);
  v6 = 1;
  return v4(a2, a3, a4, &v6, 1);
}
