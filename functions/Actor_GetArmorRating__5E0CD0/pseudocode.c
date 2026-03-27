int __thiscall Actor_GetArmorRating(void *this)
{
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x288))(this, 0x2B);
}
