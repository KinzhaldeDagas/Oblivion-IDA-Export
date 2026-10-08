int __thiscall sub_8A6460(int *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "Entity", 2, this); /*0x8a6474*/
  sub_8BC870(this, a2); /*0x8a6479*/
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Motion", 4, *(this + 0x14)); /*0x8a648d*/
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Deactivator", 4, *(this + 0x19)); /*0x8a649f*/
  v4 = *(this + 0x27); /*0x8a64a2*/
  if ( v4 >= 0 ) /*0x8a64aa*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8a64d1*/
      a2,
      "CollisionListnr",
      4,
      *(this + 0x25),
      4 * *(this + 0x26),
      4 * v4);
  v5 = *(this + 0x2A); /*0x8a64d4*/
  if ( v5 >= 0 ) /*0x8a64dc*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8a6503*/
      a2,
      "ActLstnrPtrs",
      4,
      *(this + 0x28),
      4 * *(this + 0x29),
      4 * v5);
  v6 = *(this + 0x2D); /*0x8a6506*/
  if ( v6 >= 0 ) /*0x8a650e*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8a6535*/
      a2,
      "ListenerPtrs.",
      4,
      *(this + 0x2B),
      4 * *(this + 0x2C),
      4 * v6);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x8a653f*/
}
