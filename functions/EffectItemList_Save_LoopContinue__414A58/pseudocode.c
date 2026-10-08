int __usercall EffectItemList_Save_::LoopContinue@<eax>(int a1@<esi>, int a2, int a3)
{
  int v3; // esi
  int v4; // esi

  v3 = *(_DWORD *)(a1 + 8); /*0x414a58*/
  if ( v3 && (v4 = v3 - 4) != 0 ) /*0x414a62*/
    return EffectItemList_Save_::LoopBody(v4, a2, a3); /*0x414a62*/
  else
    return EffectItemList_Save_::LoopExit(); /*0x414a63*/
}
