int __thiscall sub_914660(void **this, void (__thiscall ***a2)(_DWORD, const char *, signed int, void *))
{
  (**a2)(a2, "MoppShape", 1, this);
  (*a2)[2](a2, "Mesh", 1, *(this + 3));
  ((void (__thiscall *)(void (__thiscall ***)(_DWORD, const char *, signed int, void *), const char *, int, _DWORD, _DWORD, _DWORD))(*a2)[1])(
    a2,
    "Mopp",
    1,
    *(this + 4),
    *((_DWORD *)*(this + 4) + 9),
    0);
  return ((int (__thiscall *)(void (__thiscall ***)(_DWORD, const char *, signed int, void *)))(*a2)[5])(a2);
}
