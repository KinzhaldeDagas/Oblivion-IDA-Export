int __thiscall sub_8FCF20(unsigned __int16 *this)
{
  int v2; // eax

  v2 = *(this + 6); /*0x8fcf25*/
  if ( (_WORD)v2 != 0xFFFF ) /*0x8fcf2d*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v2); /*0x8fcf35*/
    *(this + 6) = 0xFFFF; /*0x8fcf38*/
  }
  return (**(int (__thiscall ***)(unsigned __int16 *, int))this)(this, 1); /*0x8fcf46*/
}
