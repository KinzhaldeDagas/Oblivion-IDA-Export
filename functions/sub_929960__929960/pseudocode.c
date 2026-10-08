int __thiscall sub_929960(int *this, int a2)
{
  int v3; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "MultiRay", 1, this); /*0x929974*/
  v3 = *(this + 5); /*0x929976*/
  if ( v3 >= 0 ) /*0x92997b*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x92999c*/
      a2,
      "Rays",
      1,
      *(this + 3),
      0x20 * *(this + 4),
      0x20 * v3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x9299a6*/
}
