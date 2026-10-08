// Actor_GetArmorRating helper here returns GetAVfCur(0x2B), the DefendBonus actor value added to worn armor by Character_GetArmorRating.
int __thiscall Actor_GetArmorRating(void *this)
{
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x288))(this, 0x2B); /*0x5e0cdc*/
}
