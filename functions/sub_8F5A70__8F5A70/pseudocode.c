int __thiscall sub_8F5A70(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi

  v3 = *(this + 5) - *(this + 4);
  v4 = a2;
  if ( a2 <= v3 )
  {
LABEL_4:
    *(this + 4) += v4;
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v4 -= v3;
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x2C))(this) )
        return a2 - v4;
      v3 = *(this + 5) - *(this + 4);
      if ( v4 <= v3 )
        goto LABEL_4;
    }
  }
}
