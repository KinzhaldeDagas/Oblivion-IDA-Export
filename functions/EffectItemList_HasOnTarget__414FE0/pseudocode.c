// True iff list has an EffectItem with range==2 (Target) and EffectSetting flag 0x400000 clear. Does not require hostile/detrimental.
bool __fastcall EffectItemList_HasOnTarget(int a1)
{
  bool result; // al
  int v2; // edx
  int v3; // ecx

  if ( !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) ) /*0x414fe6*/
    return 0; /*0x414fec*/
  for ( result = 0; a1; a1 = v3 - 4 ) /*0x414ff3*/
  {
    if ( result ) /*0x414ff7*/
      break; /*0x414ff7*/
    v2 = *(_DWORD *)(a1 + 4); /*0x414ff9*/
    if ( v2 ) /*0x414ffe*/
    {
      if ( *(_DWORD *)(v2 + 0x10) == 2 ) /*0x415004*/
        result = (*(_DWORD *)(*(_DWORD *)(v2 + 0x1C) + 0x58) & 0x400000) == 0; /*0x415014*/
    }
    v3 = *(_DWORD *)(a1 + 8); /*0x415016*/
    if ( !v3 ) /*0x41501b*/
      break; /*0x41501b*/
  }
  return result; /*0x414fee*/
}
