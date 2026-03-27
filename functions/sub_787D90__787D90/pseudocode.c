int __thiscall sub_787D90(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 0x16);
  result = 0;
  if ( v1 )
  {
    result = *(_DWORD *)(v1 + 4);
    if ( result )
      return (*(_DWORD *)(v1 + 8) - result) / 0x1C;
  }
  return result;
}
