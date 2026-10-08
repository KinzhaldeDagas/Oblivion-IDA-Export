int __thiscall sub_5E0A90(_DWORD **this, int a2)
{
  int result; // eax

  result = 0; /*0x5e0a90*/
  if ( *(this + 0x16) ) /*0x5e0a92*/
    return (*(int (__thiscall **)(_DWORD, _DWORD **, int))(**(this + 0x16) + 0x218))(*(this + 0x16), this, a2); /*0x5e0aab*/
  return result; /*0x5e0aae*/
}
