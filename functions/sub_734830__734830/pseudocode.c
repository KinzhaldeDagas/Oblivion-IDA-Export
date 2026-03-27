unsigned int __thiscall sub_734830(int this, _BYTE *a2, _BYTE *a3)
{
  unsigned int v3; // edx
  unsigned int result; // eax

  v3 = 0;
  if ( *(_WORD *)(this + 0x10E) )
  {
    do
    {
      ++v3;
      *a3 = *a2 - *(_BYTE *)(this + 0x104);
      result = *(unsigned __int16 *)(this + 0x10E);
      ++a2;
      ++a3;
    }
    while ( v3 < result );
  }
  return result;
}
