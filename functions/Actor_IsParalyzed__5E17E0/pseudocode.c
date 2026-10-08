bool __thiscall Actor_IsParalyzed(void *this)
{
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x284))(this, 0x30) != 0; /*0x5e17f1*/
}
