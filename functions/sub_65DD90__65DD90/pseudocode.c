int __thiscall sub_65DD90(int this)
{
  int result; // eax
  int v2; // esi

  for ( result = 0; (unsigned __int16)result < *(_WORD *)(this + 0xA); *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v2) = 0 ) /*0x65dd94*/
    v2 = (unsigned __int16)result++; /*0x65dda3*/
  *(_WORD *)(this + 0xC) = 0; /*0x65ddb4*/
  *(_WORD *)(this + 0xA) = 0; /*0x65ddb8*/
  return result; /*0x65ddbc*/
}
