int __thiscall sub_92A6D0(void **this, void (__thiscall ***a2)(_DWORD, const char *, signed int, void *))
{
  (**a2)(a2, "CvxTranslate", 1, this); /*0x92a6e4*/
  (*a2)[2](a2, "Child", 1, *(this + 4)); /*0x92a6f5*/
  return ((int (__thiscall *)(void (__thiscall ***)(_DWORD, const char *, signed int, void *)))(*a2)[5])(a2); /*0x92a6ff*/
}
