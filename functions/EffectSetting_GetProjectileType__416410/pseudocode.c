int __thiscall EffectSetting_GetProjectileType(_DWORD *this)
{
  return ((*(this + 0x16) >> 0x1A) & 1) + 2 * ((*(this + 0x16) >> 0x19) & 1);
}
