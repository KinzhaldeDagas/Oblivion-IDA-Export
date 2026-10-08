BOOL __thiscall MagicProjectile_NotDeleted(_DWORD *this)
{
  return (*(this + 2) & 0x20) == 0; /*0x696bfb*/
}
