bool __thiscall sub_5E3290(void *this)
{
  int v2; // eax
  bool result; // al

  result = 0; /*0x5e32bc*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x24 ) /*0x5e32a1*/
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e32ad*/
    if ( v2 ) /*0x5e32b1*/
    {
      if ( *(_BYTE *)(v2 + 0x104) == 4 ) /*0x5e32ba*/
        return 1; /*0x5e32a1*/
    }
  }
  return result; /*0x5e32be*/
}
