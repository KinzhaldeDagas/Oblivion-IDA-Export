int __thiscall sub_917900(void **this, void (__thiscall ***a2)(_DWORD, const char *, signed int, void *))
{
  (**a2)(a2, "CvxTransform", 1, this); /*0x917914*/
  (*a2)[2](a2, "Child", 1, *(this + 4)); /*0x917925*/
  return ((int (__thiscall *)(void (__thiscall ***)(_DWORD, const char *, signed int, void *)))(*a2)[5])(a2); /*0x91792f*/
}
