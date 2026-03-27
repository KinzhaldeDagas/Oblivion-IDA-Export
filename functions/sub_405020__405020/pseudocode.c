int __thiscall sub_405020(int this, unsigned int a2)
{
  int result; // eax
  int v3; // edx
  unsigned __int16 v4; // dx

  if ( a2 >= *(unsigned __int16 *)(this + 0xA) )
    return 0;
  v3 = *(_DWORD *)(this + 4);
  result = *(_DWORD *)(v3 + 4 * a2);
  *(_DWORD *)(v3 + 4 * a2) = 0;
  if ( result )
    --*(_WORD *)(this + 0xC);
  v4 = *(_WORD *)(this + 0xA);
  if ( a2 == v4 - 1 )
    *(_WORD *)(this + 0xA) = v4 - 1;
  return result;
}
