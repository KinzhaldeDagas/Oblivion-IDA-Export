int __thiscall sub_6D5890(int *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // edx
  unsigned int v6; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2;
  sub_715F40(this, a2);
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v2[0x87] + 4);
  v6 = v2[0x87];
  a2 = 2;
  v4(v6, this + 0x13, 2, &a2, 1);
  return sub_712A20(v2);
}
