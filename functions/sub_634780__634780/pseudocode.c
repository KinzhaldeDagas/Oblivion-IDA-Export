int __thiscall sub_634780(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // edx

  v3 = 0;
  v4 = this + 0xB2;
  do
  {
    if ( *v4 == a2 )
    {
      *v4 = 0;
      *((_BYTE *)this + v3 + 0x2DC) = 0;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x4CC))(this);
  if ( *(this + 0xB9) != result )
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC);
    *((_BYTE *)this + 0x2E8) = 0;
    result = v6(this);
    *(this + 0xB9) = result;
  }
  return result;
}
