int __thiscall sub_758D70(int *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // eax
  unsigned int v6; // edi
  int (__cdecl *v7)(unsigned int, int *, int, signed int *, int); // edx
  unsigned int v9; // [esp-28h] [ebp-30h]
  unsigned int v10; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2; /*0x758d72*/
  sub_752DC0((NiRenderer *)this, (unsigned int *)a2); /*0x758d79*/
  sub_712A20(v2); /*0x758d80*/
  sub_709430((char *)this + 0x1C, (signed int)v2); /*0x758d89*/
  v10 = v2[0x87]; /*0x758da1*/
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v10 + 4); /*0x758da2*/
  a2 = 4; /*0x758da5*/
  v4(v10, this + 0xA, 4, &a2, 1); /*0x758dad*/
  v9 = v2[0x87]; /*0x758dc2*/
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v9 + 4); /*0x758dc3*/
  a2 = 4; /*0x758dc6*/
  v5(v9, this + 0xB, 4, &a2, 1); /*0x758dce*/
  v6 = v2[0x87]; /*0x758dd0*/
  v7 = *(int (__cdecl **)(unsigned int, int *, int, signed int *, int))(v6 + 4); /*0x758dd6*/
  a2 = 4; /*0x758de7*/
  return v7(v6, this + 0xC, 4, &a2, 1); /*0x758df4*/
}
