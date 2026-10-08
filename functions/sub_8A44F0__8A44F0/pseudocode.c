int __thiscall sub_8A44F0(_DWORD *this, signed int a2)
{
  unsigned int *v2; // ebx
  int v4; // eax
  int v5; // edi
  int (__cdecl *v6)(unsigned int, _DWORD *, int, signed int *, int); // edx
  unsigned int v8; // [esp-14h] [ebp-20h]

  v2 = (unsigned int *)a2; /*0x8a44f1*/
  sub_8B0010((unsigned int *)a2); /*0x8a44fa*/
  v4 = (*(int (__thiscall **)(_DWORD *, signed int *))(*this + 0x74))(this, &a2); /*0x8a450b*/
  v5 = v4; /*0x8a450d*/
  if ( v4 ) /*0x8a4511*/
  {
    if ( *(float *)(v4 + 0xC4) > dbl_A529C0 ) /*0x8a4524*/
      *(float *)(v4 + 0xC4) = flt_A2FE78; /*0x8a452c*/
    if ( 0.0 == *(float *)(v4 + 0xB0) && sub_535AC0(this) == *(float *)&SrcStr && (*(_DWORD *)v5 & 0x3F) != 2 ) /*0x8a455b*/
      *(_BYTE *)(v5 + 0xD0) = 7; /*0x8a455d*/
  }
  sub_712AE0(v2); /*0x8a4566*/
  v6 = *(int (__cdecl **)(unsigned int, _DWORD *, int, signed int *, int))(v2[0x87] + 4); /*0x8a4571*/
  v8 = v2[0x87]; /*0x8a4581*/
  a2 = 4; /*0x8a4582*/
  return v6(v8, this + 6, 4, &a2, 1); /*0x8a458f*/
}
