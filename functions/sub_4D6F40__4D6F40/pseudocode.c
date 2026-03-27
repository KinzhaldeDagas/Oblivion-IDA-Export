int __thiscall sub_4D6F40(_DWORD *this, char a2)
{
  int result; // eax
  int v4; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x190))(this);
  if ( !(_BYTE)result )
  {
    v4 = *(this + 2);
    if ( a2 )
      result = v4 | 0x100000;
    else
      result = v4 & 0xFFEFFFFF;
    *(this + 2) = result;
  }
  return result;
}
