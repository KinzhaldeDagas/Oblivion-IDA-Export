int __thiscall sub_534280(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int (__cdecl *v4)(int, int, int, int *, int); // edx
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x534280*/
  v3 = *(this + 2); /*0x534281*/
  v4 = *(int (__cdecl **)(int, int, int, int *, int))(v3 + 4); /*0x534294*/
  v6 = 1; /*0x534299*/
  return v4(v3, a2, a3, &v6, 1); /*0x5342a6*/
}
