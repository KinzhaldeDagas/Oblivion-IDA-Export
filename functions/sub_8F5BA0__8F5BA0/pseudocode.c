int __thiscall sub_8F5BA0(_DWORD **this)
{
  int v2; // ecx

  v2 = (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0x28))(*(this + 2)); /*0x8f5bab*/
  if ( v2 < 0 ) /*0x8f5baf*/
    return 0xFFFFFFFF; /*0x8f5bbb*/
  else
    return v2 + (char *)*(this + 4) - (char *)*(this + 5); /*0x8f5bb7*/
}
