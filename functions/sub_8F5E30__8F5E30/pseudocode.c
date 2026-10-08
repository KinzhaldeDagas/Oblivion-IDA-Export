int __thiscall sub_8F5E30(_DWORD **this)
{
  int v2; // ecx

  v2 = (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0x1C))(*(this + 2)); /*0x8f5e3b*/
  if ( v2 < 0 ) /*0x8f5e3f*/
    return 0xFFFFFFFF; /*0x8f5e48*/
  else
    return (int)*(this + 4) + v2; /*0x8f5e44*/
}
