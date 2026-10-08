int __thiscall sub_6E2EA0(int *this, int a2)
{
  unsigned int *v2; // esi
  int (__cdecl *v4)(unsigned int, int *, int, int *, int); // edx
  int result; // eax
  unsigned int v6; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2; /*0x6e2ea1*/
  sub_75E460(this, (_DWORD *)a2); /*0x6e2ea9*/
  v4 = *(int (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4); /*0x6e2eb4*/
  v6 = v2[0x87]; /*0x6e2ec4*/
  a2 = 4; /*0x6e2ec5*/
  result = v4(v6, this + 0x12, 4, &a2, 1); /*0x6e2ecd*/
  if ( v2[0x36] < 0xA010068 ) /*0x6e2edc*/
    return sub_712A20(v2); /*0x6e2ee0*/
  return result; /*0x6e2ee5*/
}
