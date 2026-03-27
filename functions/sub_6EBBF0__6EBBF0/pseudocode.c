int __thiscall sub_6EBBF0(_DWORD **this)
{
  if ( !byte_B3F944 && (*(this + 4))[1] > 1u )
    (*(void (__thiscall **)(_DWORD))(**(this + 3) + 0x68))(*(this + 3));
  return ((int (__thiscall *)(_DWORD **))(*this)[0x15])(this);
}
