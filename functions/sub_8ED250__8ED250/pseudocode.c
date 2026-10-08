int __thiscall sub_8ED250(int *this, int a2)
{
  int v3; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "SimplePhantm", 2, this); /*0x8ed264*/
  sub_8DE790(this, a2); /*0x8ed269*/
  v3 = *(this + 0x4A); /*0x8ed26e*/
  if ( v3 >= 0 ) /*0x8ed276*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8ed29d*/
      a2,
      "OverlapPtr",
      8,
      *(this + 0x48),
      4 * *(this + 0x49),
      4 * v3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x8ed2a7*/
}
