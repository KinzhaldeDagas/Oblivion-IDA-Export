int __thiscall sub_471600(int this)
{
  unsigned int v1; // edx
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 0x6C) )
    return 0;
  v1 = *(unsigned __int16 *)(this + 0x46);
  v2 = 0;
  if ( !*(_WORD *)(this + 0x46) )
    return 0;
  v3 = *(_DWORD **)(this + 0x40);
  for ( i = v3; !*i; ++i )
  {
    if ( ++v2 >= v1 )
      return 0;
  }
  return *(_DWORD *)(v3[v2] + 0x60);
}
