// Generic shader load thunk: calls virtual +0xA8. For SpeedTreeFrondShader vtable 0xA9443C this dispatches to 0x80E0C0.
int __thiscall sub_80DD90(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this);
}
