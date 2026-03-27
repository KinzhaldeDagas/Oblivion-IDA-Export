int __thiscall sub_8E8AA0(void **this, void (__thiscall ***a2)(_DWORD, const char *, signed int, void *))
{
  (**a2)(a2, "TransformShp", 1, this);
  (*a2)[2](a2, "ChildShape", 1, *(this + 3));
  return ((int (__thiscall *)(void (__thiscall ***)(_DWORD, const char *, signed int, void *)))(*a2)[5])(a2);
}
