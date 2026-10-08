bool __thiscall sub_5EA640(void *this)
{
  bool v2; // bl
  bool v3; // zf
  bool result; // al

  v2 = 0; /*0x5ea64c*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) != 0x23 ) /*0x5ea654*/
    v2 = sub_5E1E90(this); /*0x5ea661*/
  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x284))(this, 0x37) == 0; /*0x5ea671*/
  result = 1; /*0x5ea673*/
  if ( v3 ) /*0x5ea675*/
    return v2; /*0x5ea677*/
  return result; /*0x5ea679*/
}
