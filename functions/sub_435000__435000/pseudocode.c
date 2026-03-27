int __thiscall sub_435000(_DWORD *this)
{
  int v1; // eax
  int v2; // edx

  v1 = *(this + 0xB);
  v2 = 0;
  if ( v1 )
    v2 = v1 + 0x10;
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x30))(this, v2);
}
