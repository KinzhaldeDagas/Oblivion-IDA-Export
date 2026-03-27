int __thiscall sub_8FA9A0(unsigned __int16 *this)
{
  int v2; // eax

  v2 = *(this + 6);
  if ( (_WORD)v2 != 0xFFFF )
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v2);
  return (**(int (__thiscall ***)(void *, int))this)(this, 1);
}
