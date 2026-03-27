int __thiscall sub_7F2BA0(int this, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = *(_DWORD *)(this + 0x14C);
  *(_DWORD *)(this + 0x84) += a2 % v2;
  result = *(_DWORD *)(this + 0x84);
  if ( *(_BYTE *)(this + 0x180) )
  {
    if ( result >= v2 )
    {
      result -= v2;
      *(_DWORD *)(this + 0x84) = result;
      *(_BYTE *)(this + 0x180) = 0;
    }
  }
  *(_DWORD *)(this + 0x190) -= a2 % v2;
  if ( !*(_BYTE *)(this + 0x180) )
  {
    result = *(_DWORD *)(this + 0x88);
    if ( *(_DWORD *)(this + 0x84) >= result )
      *(_DWORD *)(this + 0x84) = result;
  }
  return result;
}
