int __thiscall sub_8A0200(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax

  v3 = *(this + 1); /*0x8a0203*/
  if ( v3 ) /*0x8a0208*/
  {
    *(_DWORD *)(v3 + 8) = 0; /*0x8a020a*/
    v4 = *(this + 1); /*0x8a0211*/
    if ( *(_WORD *)(v4 + 4) ) /*0x8a0214*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x8a0220*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8a022f*/
    }
  }
  result = a2; /*0x8a0231*/
  if ( a2 ) /*0x8a0237*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x8a0239*/
      ++*(_WORD *)(a2 + 6); /*0x8a0240*/
    *(_DWORD *)(a2 + 8) = this; /*0x8a0245*/
  }
  *(this + 1) = a2; /*0x8a0248*/
  return result; /*0x8a024b*/
}
