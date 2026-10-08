int __thiscall sub_6D5890(NiRenderer *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, UInt32 *, int, signed int *, int); // edx
  unsigned int v6; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2; /*0x6d5892*/
  NiTimeController_LoadBinary(this, a2); /*0x6d5899*/
  v4 = *(void (__cdecl **)(unsigned int, UInt32 *, int, signed int *, int))(v2[0x87] + 4); /*0x6d58a4*/
  v6 = v2[0x87]; /*0x6d58b4*/
  a2 = 2; /*0x6d58b5*/
  v4(v6, &this->members.pad014[0xE], 2, &a2, 1); /*0x6d58bd*/
  return sub_712A20(v2); /*0x6d58c9*/
}
