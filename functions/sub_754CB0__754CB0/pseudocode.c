int __thiscall sub_754CB0(int *this, signed int a2)
{
  unsigned int *v2; // esi
  int result; // eax
  int (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // edx
  unsigned int v6; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2;
  sub_75EFA0(this, a2);
  result = sub_712A20(v2);
  if ( v2[0x36] >= 0xA000113 )
  {
    v5 = *(int (__cdecl **)(unsigned int, int *, int, signed int *, int))(v2[0x87] + 4);
    v6 = v2[0x87];
    a2 = 4;
    return v5(v6, this + 0xC, 4, &a2, 1);
  }
  return result;
}
