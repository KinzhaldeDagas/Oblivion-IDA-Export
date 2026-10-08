int __userpurge EffectItemList_GetItemByIndex2_::GetRemainingEffectCount@<eax>(
        int a1@<eax>,
        int a2@<ebx>,
        int a3@<ebp>,
        int *a4@<edi>,
        int a5@<esi>,
        int a6)
{
  int *v6; // ecx
  int v7; // edx
  int v8; // ecx

  v6 = a4; /*0x414b44*/
  v7 = 0; /*0x414b46*/
  if ( !a4 ) /*0x414b4a*/
    return EffectItemList_GetItemByIndex2_::Done____(a6); /*0x414b4a*/
  do /*0x414b5d*/
  {
    if ( *v6 ) /*0x414b50*/
      ++v7; /*0x414b55*/
    v6 = (int *)v6[1]; /*0x414b58*/
  }
  while ( v6 ); /*0x414b5d*/
  if ( !v7 || a2 > a3 || a1 ) /*0x414b69*/
    return EffectItemList_GetItemByIndex2_::Done____(a6); /*0x414b69*/
  if ( a2 == a3 ) /*0x414b6d*/
  {
    a1 = *a4; /*0x414b6f*/
  }
  else
  {
    v8 = *(_DWORD *)(a5 + 8); /*0x414b73*/
    ++a2; /*0x414b76*/
    if ( !v8 ) /*0x414b7b*/
      return EffectItemList_GetItemByIndex2_::Done____(a6); /*0x414b7b*/
    a5 = v8 - 4; /*0x414b7d*/
  }
  if ( !a5 ) /*0x414b82*/
    return EffectItemList_GetItemByIndex2_::Done____(a6); /*0x414b83*/
  return EffectItemList_GetItemByIndex2_::EffectLoop(a1, a2, a3, a5);
}
