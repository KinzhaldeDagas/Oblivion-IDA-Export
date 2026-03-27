int __thiscall sub_89D730(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax

  if ( this )
    result = *(this + 2);
  else
    result = 0;
  if ( a2 != result )
  {
    if ( result )
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this);
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 0x2B0) )
          (*(void (__thiscall **)(_DWORD *))(*this + 0x60))(this);
      }
    }
    return sub_89D400(this, a2);
  }
  return result;
}
