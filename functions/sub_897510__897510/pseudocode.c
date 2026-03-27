int __thiscall sub_897510(_BYTE *this)
{
  int result; // eax

  result = dword_BA7A8C;
  if ( dword_BA7A8C != 3 )
  {
    if ( (*(this + 0xC) & 0x40) != 0 )
    {
      if ( result != 2 )
      {
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x6C))(this);
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x68))(this);
        *((_WORD *)this + 6) &= ~0x40u;
      }
    }
    else if ( (*(this + 0xC) & 1) != 0 )
    {
      result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x74))(this);
      if ( (_BYTE)result )
      {
        if ( dword_BA7A8C != 2 )
          return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x68))(this);
      }
      else if ( dword_BA7A8C != 1 )
      {
        return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x64))(this);
      }
    }
  }
  return result;
}
