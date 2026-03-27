bool __thiscall IsWeaponReady(_DWORD *this)
{
  int v2; // eax
  bool result; // al

  result = !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x1A0))(this)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 0x198))(this, 0)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x19C))(this)
        && (v2 = *(this + 0x2C), v2 != 5)
        && v2 != 3
        && (*(int (__thiscall **)(_DWORD *))(*this + 0x18C))(this) == 0;
  return result;
}
