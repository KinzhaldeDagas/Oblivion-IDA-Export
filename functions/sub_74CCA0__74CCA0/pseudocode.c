int __thiscall sub_74CCA0(int *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x74cca2*/
  sub_753010(this, (unsigned int *)a2); /*0x74cca9*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x74ccc1*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4); /*0x74ccc2*/
  a2 = 4; /*0x74ccc5*/
  v4(v8, this + 0x15, 4, &a2, 1); /*0x74cccd*/
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x74cccf*/
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 4); /*0x74ccd5*/
  a2 = 4; /*0x74cce6*/
  return v6(v5, this + 0x16, 4, &a2, 1); /*0x74ccf3*/
}
