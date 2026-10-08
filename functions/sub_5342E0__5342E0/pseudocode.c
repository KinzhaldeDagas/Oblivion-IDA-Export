int __thiscall sub_5342E0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int (__cdecl *v4)(int, int, int, int *, int); // edx
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x5342e0*/
  v3 = *(this + 2); /*0x5342e1*/
  v4 = *(int (__cdecl **)(int, int, int, int *, int))(v3 + 8); /*0x5342f4*/
  v6 = 1; /*0x5342f9*/
  return v4(v3, a2, a3, &v6, 1); /*0x534306*/
}
