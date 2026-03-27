int __thiscall sub_8A6460(int *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "Entity", 2, this);
  sub_8BC870(this, a2);
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Motion", 4, *(this + 0x14));
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Deactivator", 4, *(this + 0x19));
  v4 = *(this + 0x27);
  if ( v4 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "CollisionListnr",
      4,
      *(this + 0x25),
      4 * *(this + 0x26),
      4 * v4);
  v5 = *(this + 0x2A);
  if ( v5 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "ActLstnrPtrs",
      4,
      *(this + 0x28),
      4 * *(this + 0x29),
      4 * v5);
  v6 = *(this + 0x2D);
  if ( v6 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "ListenerPtrs.",
      4,
      *(this + 0x2B),
      4 * *(this + 0x2C),
      4 * v6);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
