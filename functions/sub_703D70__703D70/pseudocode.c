char __thiscall sub_703D70(int this, int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // edx

  LOBYTE(v2) = a2 != 0;
  if ( a2 )
  {
LABEL_7:
    *(_WORD *)(this + 0x18) |= 1u;
    return (char)v2;
  }
  v3 = *(unsigned __int16 *)(this + 0x26);
  v4 = 1;
  if ( v3 > 1 )
  {
    v2 = (_DWORD *)(*(_DWORD *)(this + 0x20) + 4);
    while ( !*v2 )
    {
      ++v4;
      ++v2;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  *(_WORD *)(this + 0x18) &= ~1u;
  return (char)v2;
}
