unsigned int __thiscall sub_8B0FA0(int *this, unsigned int a2)
{
  unsigned int v2; // edi
  int v3; // esi
  int v4; // edx
  unsigned int v5; // eax
  unsigned int result; // eax
  unsigned int v7; // edx
  unsigned int v8; // [esp+14h] [ebp+4h]

  --*(this + 1);
  v2 = a2;
  *(_DWORD *)(*this + 4 * a2) = 0;
  v3 = *(this + 2);
  v4 = *this;
  v5 = v3 & (v3 + a2);
  if ( *(_DWORD *)(*this + 4 * v5) )
  {
    do
      v5 = v3 & (v3 + v5);
    while ( *(_DWORD *)(v4 + 4 * v5) );
  }
  v8 = v3 & (v5 + 1);
  result = v3 & (v2 + 1);
  if ( *(_DWORD *)(v4 + 4 * result) )
  {
    do
    {
      v7 = v3 & (0x9E3779B1 * (*(_DWORD *)(*this + 4 * result) >> 4));
      if ( (result < v8 || v7 <= v2) && (result >= v2 || v7 <= v2 && v7 > result) && (v7 <= v2 || v7 >= v8) )
      {
        *(_DWORD *)(*this + 4 * v2) = *(_DWORD *)(*this + 4 * result);
        *(_DWORD *)(*this + 4 * (v2 + *(this + 2)) + 4) = *(_DWORD *)(*this + 4 * (*(this + 2) + result) + 4);
        *(_DWORD *)(*this + 4 * result) = 0;
        v2 = result;
      }
      v3 = *(this + 2);
      result = v3 & (result + 1);
    }
    while ( *(_DWORD *)(*this + 4 * result) );
  }
  return result;
}
