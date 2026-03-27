int __usercall EffectItemList_GetItemByIndex2_::GetRemainingEffectCount@<eax>(
        int a1@<eax>,
        int a2@<ebx>,
        int a3@<ebp>,
        _DWORD *a4@<edi>,
        int a5@<esi>)
{
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // ecx

  v5 = a4;
  v6 = 0;
  if ( !a4 )
    return EffectItemList_GetItemByIndex2_::Done____();
  do
  {
    if ( *v5 )
      ++v6;
    v5 = (_DWORD *)v5[1];
  }
  while ( v5 );
  if ( !v6 || a2 > a3 || a1 )
    return EffectItemList_GetItemByIndex2_::Done____();
  if ( a2 != a3 )
  {
    v7 = *(_DWORD *)(a5 + 8);
    if ( !v7 )
      return EffectItemList_GetItemByIndex2_::Done____();
    a5 = v7 - 4;
  }
  if ( !a5 )
    return EffectItemList_GetItemByIndex2_::Done____();
  return EffectItemList_GetItemByIndex2_::EffectLoop();
}
