unsigned int __thiscall sub_4521D0(int this, unsigned int a2)
{
  int v2; // edi
  unsigned __int8 v3; // bl
  int v4; // eax

  v2 = *(_DWORD *)(this + 0x4C);
  if ( !v2 || HIBYTE(a2) == 0xFF )
    return a2;
  v3 = 0xFF;
  v4 = 0;
  if ( !*(_BYTE *)(this + 0x48) )
    return 0;
  do
  {
    if ( *(_BYTE *)(v2 + v4) == HIBYTE(a2) )
      v3 = v4;
    ++v4;
  }
  while ( v4 < *(unsigned __int8 *)(this + 0x48) );
  if ( v3 == 0xFF )
    return 0;
  else
    return (a2 & 0xFFFFFF) + (v3 << 0x18);
}
