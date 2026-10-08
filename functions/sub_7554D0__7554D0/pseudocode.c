int __thiscall sub_7554D0(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7554d2*/
  sub_75E920(this, (unsigned int *)a2); /*0x7554d9*/
  v4 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x7554e4*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x7554f4*/
  a2 = 4; /*0x7554f5*/
  return v4(v6, &this->members.pad014[7], 4, &a2, 1); /*0x755502*/
}
