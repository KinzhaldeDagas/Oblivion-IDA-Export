void __thiscall sub_6D0370(NiRenderer *this, signed int a2)
{
  _DWORD *v2; // ebp
  void (__cdecl *v4)(int, int *, int, signed int *, int); // edx
  int i; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2; /*0x6d0372*/
  NiInterpController_LoadBinary(this, a2); /*0x6d037b*/
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v2[0x87] + 4); /*0x6d0386*/
  v8 = v2[0x87]; /*0x6d0396*/
  a2 = 2; /*0x6d0397*/
  v4(v8, (int *)&this->members.pad014[0xC], 2, &a2, 1); /*0x6d039f*/
  sub_6D0010(this, this->members.pad014[0xC]); /*0x6d03aa*/
  for ( i = 0; (unsigned __int16)i < LOWORD(this->members.pad014[0xC]); *(_DWORD *)(this->members.pad014[0xB] + 4 * v7) = v6 ) /*0x6d03b1*/
  {
    v6 = sub_712A90(v2); /*0x6d03b8*/
    v7 = (unsigned __int16)i++; /*0x6d03c0*/
  }
}
