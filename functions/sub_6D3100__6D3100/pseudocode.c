_DWORD *__thiscall sub_6D3100(int *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  _DWORD *result; // eax
  int *v12; // ecx
  int v13; // esi

  sub_6BE490(this);
  *(this + 5) = a3;
  result = this + 8;
  *(this + 8) = a4;
  *(this + 0xC) = a2;
  *(this + 0xD) = a5;
  *(this + 6) = a6;
  *(this + 7) = a9;
  *(this + 9) = a7;
  *(this + 0xA) = a10;
  *(this + 0xE) = a8;
  *(this + 0xF) = 0;
  *(this + 0x10) = 0;
  *(this + 0x11) = 0;
  v12 = this + 0xB;
  v13 = 3;
  do
  {
    if ( result[0xFFFFFFFD] )
      *(_BYTE *)v12 = byte_B3D3E8[*result];
    else
      *(_BYTE *)v12 = 0;
    ++result;
    v12 = (int *)((char *)v12 + 1);
    --v13;
  }
  while ( v13 );
  return result;
}
