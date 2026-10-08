// Returns low-level Havok object position pointer: *(wrapper+0x30 + 0x1C) + 0x30.
int __thiscall bhkCollisionWrapper_GetPositionPtr(_DWORD *this)
{
  return *(_DWORD *)(*(this + 0xC) + 0x1C) + 0x30; /*0x8ac079*/
}
