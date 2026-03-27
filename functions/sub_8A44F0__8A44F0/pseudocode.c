int __thiscall sub_8A44F0(_DWORD *this, signed int a2)
{
  unsigned int *v2; // ebx
  int v4; // eax
  int v5; // edi
  int (__cdecl *v6)(unsigned int, _DWORD *, int, signed int *, int); // edx
  unsigned int v8; // [esp-14h] [ebp-20h]

  v2 = (unsigned int *)a2;
  sub_8B0010(a2);
  v4 = (*(int (__thiscall **)(_DWORD *, signed int *))(*this + 0x74))(this, &a2);
  v5 = v4;
  if ( v4 )
  {
    if ( *(float *)(v4 + 0xC4) > dbl_A529C0 )
      *(float *)(v4 + 0xC4) = flt_A2FE78;
    if ( 0.0 == *(float *)(v4 + 0xB0) && sub_535AC0(this) == *(float *)&SrcStr && (*(_DWORD *)v5 & 0x3F) != 2 )
      *(_BYTE *)(v5 + 0xD0) = 7;
  }
  sub_712AE0(v2);
  v6 = *(int (__cdecl **)(unsigned int, _DWORD *, int, signed int *, int))(v2[0x87] + 4);
  v8 = v2[0x87];
  a2 = 4;
  return v6(v8, this + 6, 4, &a2, 1);
}
