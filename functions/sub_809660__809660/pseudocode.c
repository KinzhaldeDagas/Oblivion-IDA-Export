// MoonSugarEffect decode: shared Parallax/Skin program-load wrapper. Calls vtable +0xA8 (vertex/pixel loader thunk) and then +0xC0 class-specific detailed pass population.
int __thiscall sub_809660(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this); /*0x80966b*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC0))(this);
}
