bool __thiscall sub_5EA640(void *this)
{
  bool v2; // bl
  bool v3; // zf
  bool result; // al

  v2 = 0;
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) != 0x23 )
    v2 = sub_5E1E90(this);
  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x284))(this, 0x37) == 0;
  result = 1;
  if ( v3 )
    return v2;
  return result;
}
