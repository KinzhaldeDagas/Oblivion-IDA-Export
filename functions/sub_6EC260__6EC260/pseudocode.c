int __thiscall sub_6EC260(void *this, int a2, int a3)
{
  unsigned __int8 v4; // bl

  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xAC))(this, a3);
  return a2 * v4 + (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xA8))(this, a3);
}
