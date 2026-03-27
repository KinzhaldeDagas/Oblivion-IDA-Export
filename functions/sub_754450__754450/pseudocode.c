void __thiscall sub_754450(int *this, signed int a2)
{
  signed int v2; // edi
  int v4; // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // edx

  v2 = a2;
  sub_75E920(this, a2);
  v4 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v4 + 4);
  a2 = 4;
  v5(v4, this + 0xC, 4, &a2, 1);
  if ( *((float *)this + 0xC) >= dbl_A68FE0 )
    *((float *)this + 0xD) = 1.0 / *((float *)this + 0xC);
  else
    *((float *)this + 0xD) = flt_A5A04C;
}
