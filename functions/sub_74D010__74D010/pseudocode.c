int __thiscall sub_74D010(int *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, int *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x74d012*/
  sub_753010(this, (unsigned int *)a2); /*0x74d019*/
  v4 = *(int (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x74d024*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x74d034*/
  a2 = 4; /*0x74d035*/
  return v4(v6, this + 0x15, 4, &a2, 1); /*0x74d042*/
}
