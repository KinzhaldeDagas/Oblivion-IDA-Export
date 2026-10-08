__int16 __thiscall sub_412000(_DWORD **this, char a2)
{
  __int16 v2; // ax

  v2 = 0x20; /*0x412005*/
  if ( !a2 ) /*0x41200a*/
    v2 = 0x22; /*0x41200c*/
  if ( *(this + 0xA) ) /*0x412014*/
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 0xA) + 8))(*(this + 0xA), 1) + v2 + 2; /*0x412032*/
  else
    return v2 + 2; /*0x412038*/
}
