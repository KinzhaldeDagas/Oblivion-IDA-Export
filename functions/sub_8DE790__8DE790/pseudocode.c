int __thiscall sub_8DE790(int *this, int a2)
{
  int v3; // eax
  int result; // eax

  sub_8BC870(this, a2); /*0x8de799*/
  v3 = *(this + 0x16); /*0x8de79e*/
  if ( v3 >= 0 ) /*0x8de7a3*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8de7c4*/
      a2,
      "OvrlapLisPtr",
      4,
      *(this + 0x14),
      4 * *(this + 0x15),
      4 * v3);
  result = *(this + 0x19); /*0x8de7c7*/
  if ( result >= 0 ) /*0x8de7cc*/
    return (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8de7ed*/
             a2,
             "PhantmLisPtr",
             4,
             *(this + 0x17),
             4 * *(this + 0x18),
             4 * result);
  return result; /*0x8de7f0*/
}
