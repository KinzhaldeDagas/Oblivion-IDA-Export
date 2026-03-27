int __thiscall sub_74E9B0(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  sub_742060(this, a2);
  return (*(int (__thiscall **)(UInt32, _DWORD))(*(_DWORD *)(*(this + 0x2D))[5].members.super.m_uiRefCount + 0x70))(
           (*(this + 0x2D))[5].members.super.m_uiRefCount,
           *(this + 0x2C));
}
