int __thiscall sub_74D310(int *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, int *, int, int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x74d312*/
  sub_753010(this, (unsigned int *)a2); /*0x74d319*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x74d331*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4); /*0x74d332*/
  a2 = 4; /*0x74d335*/
  v4(v10, this + 0x15, 4, &a2, 1); /*0x74d33d*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x74d352*/
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 4); /*0x74d353*/
  a2 = 4; /*0x74d356*/
  v5(v9, this + 0x16, 4, &a2, 1); /*0x74d35e*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x74d360*/
  v7 = *(int (__cdecl **)(int, int *, int, int *, int))(v6 + 4); /*0x74d366*/
  a2 = 4; /*0x74d377*/
  return v7(v6, this + 0x17, 4, &a2, 1); /*0x74d384*/
}
