int __thiscall sub_7F2B30(int this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // edx
  int v5; // edi

  v2 = *(_DWORD *)(this + 0x14C);
  result = a2 / v2;
  v4 = a2 % v2;
  *(_DWORD *)(this + 0x88) -= a2 % v2;
  v5 = *(_DWORD *)(this + 0x88);
  if ( !*(_BYTE *)(this + 0x180) )
    goto LABEL_5;
  if ( v5 < 0 )
  {
    *(_DWORD *)(this + 0x84) += v2;
    *(_BYTE *)(this + 0x180) = 0;
  }
  if ( *(_BYTE *)(this + 0x180) )
  {
    *(_DWORD *)(this + 0x190) -= v4;
  }
  else
  {
LABEL_5:
    result = *(_DWORD *)(this + 0x84);
    *(_DWORD *)(this + 0x190) -= v4;
    if ( v5 <= result )
      *(_DWORD *)(this + 0x88) = result;
  }
  return result;
}
