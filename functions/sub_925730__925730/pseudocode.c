_DWORD *__thiscall sub_925730(int *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // esi

  result = a2;
  *a2 = 0;
  a2[1] = 0;
  a2[3] = 0;
  a2[2] = 0x18;
  v3 = *(this + 0xF);
  *a2 = 0x30 * v3 + 0x80;
  v4 = 0x30 * (v3 + 2);
  a2[1] = v4;
  a2[2] = 4 * v3 + 0x2C;
  a2[3] = v3 + 2;
  if ( v3 >= 2 )
  {
    a2[1] = v4 + 0x20;
    a2[2] = 4 * v3 + 0x30;
    a2[3] = v3 + 3;
  }
  return result;
}
