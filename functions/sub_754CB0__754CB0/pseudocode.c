int __thiscall sub_754CB0(NiRenderer *this, signed int a2)
{
  unsigned int *v2; // esi
  int result; // eax
  int (__cdecl *v5)(unsigned int, UInt32 *, int, signed int *, int); // edx
  unsigned int v6; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2; /*0x754cb1*/
  sub_75EFA0(this, (unsigned int *)a2); /*0x754cb9*/
  result = sub_712A20(v2); /*0x754cc0*/
  if ( v2[0x36] >= 0xA000113 ) /*0x754ccf*/
  {
    v5 = *(int (__cdecl **)(unsigned int, UInt32 *, int, signed int *, int))(v2[0x87] + 4); /*0x754cd7*/
    v6 = v2[0x87]; /*0x754ce7*/
    a2 = 4; /*0x754ce8*/
    return v5(v6, &this->members.pad014[7], 4, &a2, 1); /*0x754cf0*/
  }
  return result; /*0x754cf5*/
}
