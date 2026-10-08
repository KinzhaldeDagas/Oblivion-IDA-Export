int __thiscall sub_740830(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  sub_742060(this, a2); /*0x740838*/
  return (*(int (__thiscall **)(UInt32, _DWORD))(*(_DWORD *)(*(this + 0x2D))[4].members.height + 0x70))(
           (*(this + 0x2D))[4].members.height,
           *(this + 0x2C));
}
