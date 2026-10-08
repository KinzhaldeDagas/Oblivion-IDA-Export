int __thiscall sub_71A6D0(int *this, int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x71a6d2*/
  sub_708EB0(this, (unsigned int *)a2); /*0x71a6d9*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x71a6f4*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v6 + 4); /*0x71a6f5*/
  a2 = 4; /*0x71a6f8*/
  v4(v6, this + 0x37, 4, &a2, 1); /*0x71a700*/
  sub_709430((char *)this + 0xE0, v2); /*0x71a70c*/
  sub_709430((char *)this + 0xEC, v2); /*0x71a718*/
  return sub_709430((char *)this + 0xF8, v2); /*0x71a729*/
}
