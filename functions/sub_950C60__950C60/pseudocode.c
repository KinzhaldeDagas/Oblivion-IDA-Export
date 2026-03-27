int __thiscall sub_950C60(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // edi

  result = a2;
  v3 = 0;
  v4 = a2;
  if ( (int)*(this + 5) > 0 )
  {
    v5 = 0;
    do
    {
      *(_OWORD *)v4 = *(_OWORD *)(*(this + 4) + v5);
      *(_DWORD *)(v4 + 0xC) = *(this + 3);
      v4 += 0x10;
      ++v3;
      v5 += 0x10;
    }
    while ( v3 < *(this + 5) );
  }
  return result;
}
