int __thiscall sub_634720(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int result; // eax
  int (__thiscall *v5)(_DWORD *); // edx

  v2 = 0;
  v3 = this + 0xB2;
  do
  {
    *v3 = 0;
    *((_BYTE *)this + v2++ + 0x2DC) = 0;
    ++v3;
  }
  while ( v2 < 5 );
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x4CC))(this);
  if ( *(this + 0xB9) != result )
  {
    v5 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC);
    *((_BYTE *)this + 0x2E8) = 0;
    result = v5(this);
    *(this + 0xB9) = result;
  }
  return result;
}
