int __thiscall sub_92A1E0(int *this, int a2)
{
  int v3; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "MeshShape", 1, this); /*0x92a1f4*/
  v3 = *(this + 0xB); /*0x92a1f6*/
  if ( v3 >= 0 ) /*0x92a1fb*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x92a222*/
      a2,
      "SubParts",
      1,
      *(this + 9),
      0x30 * *(this + 0xA),
      0x30 * (v3 & 0x3FFFFFFF));
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x92a22c*/
}
