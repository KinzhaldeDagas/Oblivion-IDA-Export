int __usercall EffectItemList_Clear_::NextEntryNode@<eax>(int a1@<esi>)
{
  int v1; // esi

  v1 = *(_DWORD *)(a1 + 8); /*0x414cb5*/
  if ( v1 ) /*0x414cba*/
    return EffectItemList_Clear_::LoopContinue(v1 - 4); /*0x414cbd*/
  else
    return EffectItemList_Clear_::Done_(); /*0x414cba*/
}
