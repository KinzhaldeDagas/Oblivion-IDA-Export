int __thiscall sub_6FAD90(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6fad92*/
  sub_752DC0(this, (unsigned int *)a2); /*0x6fad99*/
  v4 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6fada4*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6fadb4*/
  a2 = 4; /*0x6fadb5*/
  return v4(v6, &this->members.pad014[1], 4, &a2, 1); /*0x6fadc2*/
}
