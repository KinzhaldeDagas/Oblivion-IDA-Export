int __thiscall sub_92B210(void **this, void (__thiscall ***a2)(_DWORD, const char *, signed int, void *))
{
  (**a2)(a2, "BvShape", 1, this);
  (*a2)[2](a2, "Child", 1, *(this + 4));
  return ((int (__thiscall *)(void (__thiscall ***)(_DWORD, const char *, signed int, void *)))(*a2)[5])(a2);
}
