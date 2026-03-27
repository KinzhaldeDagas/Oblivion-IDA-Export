int __thiscall sub_6B6AA0(_DWORD **this)
{
  if ( *(this + 0x14) )
    return (*(int (__stdcall **)(_DWORD))(**(this + 0x14) + 0x48))(*(this + 0x14));
  else
    return 0x80004005;
}
