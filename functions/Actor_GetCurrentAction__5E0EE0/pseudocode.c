// Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
int __thiscall Actor_GetCurrentAction(_DWORD **this)
{
  if ( *(this + 0x16) ) /*0x5e0ee0*/
    return (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x2D0))(*(this + 0x16)); /*0x5e0ef1*/
  else
    return 0xFFFFFFFF; /*0x5e0ef3*/
}
