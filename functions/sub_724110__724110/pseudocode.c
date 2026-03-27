_DWORD *__thiscall sub_724110(int this, _DWORD *a2, unsigned int a3)
{
  unsigned int v4; // eax
  int v5; // eax

  v4 = *(unsigned __int16 *)(this + 0xB6);
  *(_DWORD *)(this + 0xE8) = 1;
  if ( a3 < v4 )
    sub_405020(this + 0xEC, a3);
  NiNode::RemoveObjectAt(this, a2, a3);
  v5 = *(_DWORD *)(this + 0xE0);
  if ( v5 > (int)0xFFFFFFFF
    && (v5 >= *(unsigned __int16 *)(this + 0xB6) || !*(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * v5)) )
  {
    *(_DWORD *)(this + 0xE0) = 0xFFFFFFFF;
  }
  return a2;
}
