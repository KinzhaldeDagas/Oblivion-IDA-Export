int __thiscall sub_764130(int this)
{
  int i; // eax
  int v2; // esi
  int result; // eax
  int v4; // esi

  for ( i = 0; (unsigned __int16)i < *(_WORD *)(this + 0xAC2); *(_DWORD *)(*(_DWORD *)(this + 0xABC) + 4 * v2) = 0 )
    v2 = (unsigned __int16)i++;
  *(_WORD *)(this + 0xAC2) = 0;
  *(_WORD *)(this + 0xAC4) = 0;
  for ( result = 0; (unsigned __int16)result < *(_WORD *)(this + 0xAD2); *(_DWORD *)(*(_DWORD *)(this + 0xACC) + 4 * v4) = 0 )
    v4 = (unsigned __int16)result++;
  *(_WORD *)(this + 0xAD4) = 0;
  *(_WORD *)(this + 0xAD2) = 0;
  return result;
}
