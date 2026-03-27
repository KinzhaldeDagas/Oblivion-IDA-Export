int __thiscall sub_8A7220(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int result; // eax

  v3 = a2;
  v4 = a2 & 0xF;
  *(this + 0xA) = 0xFFFFFFFF;
  if ( (a2 & 0xF) != 0 )
  {
    v5 = a2 - v4 + 0x10;
    *(this + 8) = v5;
    v3 = v5 - v4;
  }
  else
  {
    *(this + 8) = a2;
  }
  result = a3 + v3;
  *(this + 0xB) = result;
  return result;
}
