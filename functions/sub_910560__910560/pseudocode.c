int __thiscall sub_910560(_DWORD **this, int a2, int a3)
{
  _DWORD **v4; // [esp-8h] [ebp-8h]

  v4 = this; /*0x910565*/
  LOBYTE(v4) = 1; /*0x910568*/
  return (*(int (__thiscall **)(_DWORD, _DWORD **, int))(**(this + 3) + 0x10))(*(this + 3), v4, a3); /*0x910573*/
}
