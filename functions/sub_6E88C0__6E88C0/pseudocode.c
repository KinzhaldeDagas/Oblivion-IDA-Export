int __thiscall sub_6E88C0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 3);
  if ( result )
    result = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D340))(result);
  if ( a2 && a3 )
  {
    v6 = byte_B3D406[a4];
    *(this + 3) = a2;
    *((_BYTE *)this + 0x14) = v6;
    *(this + 2) = a3;
    *(this + 4) = a4;
    return a4;
  }
  else
  {
    *(this + 2) = 0;
    *(this + 3) = 0;
    *(this + 4) = 0;
    *((_BYTE *)this + 0x14) = 0;
  }
  return result;
}
