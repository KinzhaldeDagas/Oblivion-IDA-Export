int __thiscall sub_8A05E0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  if ( this
    && (v1 = *(this + 2)) != 0
    && *(_DWORD *)(v1 + 8)
    && (v2 = (*(int (__thiscall **)(_DWORD *))(*this + 0x88))(this)) != 0 )
  {
    return *(_DWORD *)(v2 + 8);
  }
  else
  {
    return 0;
  }
}
