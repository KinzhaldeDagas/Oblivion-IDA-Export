int __thiscall sub_8FA9A0(unsigned __int16 *this)
{
  int v2; // eax

  v2 = *(this + 6); /*0x8fa9a5*/
  if ( (_WORD)v2 != 0xFFFF ) /*0x8fa9ad*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v2); /*0x8fa9b5*/
  return (**(int (__thiscall ***)(unsigned __int16 *, int))this)(this, 1); /*0x8fa9c0*/
}
