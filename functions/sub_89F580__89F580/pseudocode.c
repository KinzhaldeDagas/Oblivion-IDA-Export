int __thiscall sub_89F580(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int result; // eax

  if ( this )
  {
    v2 = *(this + 2);
    if ( v2 )
    {
      v3 = v2 + 0x14;
      if ( v3 )
      {
        *(_DWORD *)(a2 + 4) = *(_DWORD *)v3;
        *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 0x18);
      }
    }
  }
  *(_DWORD *)(a2 + 0x10) = 0;
  if ( this && (v4 = *(this + 2)) != 0 && v4 != 0xFFFFFFEC )
  {
    result = *(_DWORD *)(v4 + 0x30);
    *(_DWORD *)a2 = result;
  }
  else
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  return result;
}
