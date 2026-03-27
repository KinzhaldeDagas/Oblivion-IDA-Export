int __thiscall sub_7640C0(int this)
{
  int i; // eax
  int v2; // esi
  int result; // eax
  int v4; // esi

  for ( i = 0; (unsigned __int16)i < *(_WORD *)(this + 0xAA2); *(_DWORD *)(*(_DWORD *)(this + 0xA9C) + 4 * v2) = 0 )
    v2 = (unsigned __int16)i++;
  *(_WORD *)(this + 0xAA2) = 0;
  *(_WORD *)(this + 0xAA4) = 0;
  for ( result = 0; (unsigned __int16)result < *(_WORD *)(this + 0xAB2); *(_DWORD *)(*(_DWORD *)(this + 0xAAC) + 4 * v4) = 0 )
    v4 = (unsigned __int16)result++;
  *(_WORD *)(this + 0xAB4) = 0;
  *(_WORD *)(this + 0xAB2) = 0;
  return result;
}
