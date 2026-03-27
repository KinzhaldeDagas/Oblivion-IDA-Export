int __thiscall sub_6AF6F0(unsigned int *this, unsigned int a2)
{
  unsigned int v2; // edi
  int result; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // ecx

  v2 = a2;
  *(this + 1) += a2;
  result = 0;
  if ( a2 )
  {
    do
    {
      if ( !*(this + 4) )
      {
        ++*(this + 2);
        *(this + 4) = 8;
      }
      v5 = *(this + 4);
      if ( v2 < v5 )
        v5 = v2;
      v6 = *(this + 4);
      v7 = *(_DWORD *)(*(this + 5) + 4 * v6) & *(_DWORD *)(*(this + 3) + 4 * (*(this + 2) & 0xFFF));
      v8 = v6 - v5;
      v2 -= v5;
      *(this + 4) = v8;
      result |= v7 >> v8 << v2;
    }
    while ( v2 );
  }
  return result;
}
