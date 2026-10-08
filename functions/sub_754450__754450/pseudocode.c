void __thiscall sub_754450(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  int v4; // eax
  void (__cdecl *v5)(int, UInt32 *, int, signed int *, int); // edx

  v2 = a2; /*0x754452*/
  sub_75E920(this, (unsigned int *)a2); /*0x754459*/
  v4 = *(_DWORD *)(v2 + 0x21C); /*0x75445e*/
  v5 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v4 + 4); /*0x754464*/
  a2 = 4; /*0x754475*/
  v5(v4, &this->members.pad014[7], 4, &a2, 1); /*0x75447d*/
  if ( *(float *)&this->members.pad014[7] >= dbl_A68FE0 ) /*0x75448f*/
    *(float *)&this->members.pad014[8] = 1.0 / *(float *)&this->members.pad014[7]; /*0x7544a6*/
  else
    *(float *)&this->members.pad014[8] = flt_A5A04C; /*0x754498*/
}
