int __thiscall sub_64AE20(_DWORD *this, int a2)
{
  if ( !*(this + 0xB) )
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x558))(this, a2);
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 0x188))(this, a2, 1);
}
