int __thiscall sub_7584C0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 7);
  if ( result )
    result = (*(int (__cdecl **)(int))(4 * *(this + 8) + 0xB3D2C8))(result);
  if ( a2 && a3 )
  {
    v6 = byte_B3D406[a4];
    *(this + 7) = a2;
    *((_BYTE *)this + 0x24) = v6;
    *(this + 6) = a3;
    *(this + 8) = a4;
    return a4;
  }
  else
  {
    *(this + 6) = 0;
    *(this + 7) = 0;
    *((_BYTE *)this + 0x24) = 0;
  }
  return result;
}
