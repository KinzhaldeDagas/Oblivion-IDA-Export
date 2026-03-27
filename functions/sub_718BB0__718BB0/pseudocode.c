int __thiscall sub_718BB0(float *this, int a2)
{
  signed int v2; // edi
  int v4; // edi
  int (__cdecl *v5)(int, float *, int, int *, int); // ecx

  v2 = a2;
  sub_711BF0(this, a2);
  sub_7094A0((char *)this + 0x24, v2);
  v4 = *(_DWORD *)(v2 + 0x220);
  v5 = *(int (__cdecl **)(int, float *, int, int *, int))(v4 + 8);
  a2 = 4;
  return v5(v4, this + 0xC, 4, &a2, 1);
}
