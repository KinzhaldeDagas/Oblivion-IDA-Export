int __thiscall sub_6E2EA0(int *this, int a2)
{
  unsigned int *v2; // esi
  int (__cdecl *v4)(unsigned int, int *, int, int *, int); // edx
  int result; // eax
  unsigned int v6; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2;
  sub_75E460(this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4);
  v6 = v2[0x87];
  a2 = 4;
  result = v4(v6, this + 0x12, 4, &a2, 1);
  if ( v2[0x36] < 0xA010068 )
    return sub_712A20(v2);
  return result;
}
