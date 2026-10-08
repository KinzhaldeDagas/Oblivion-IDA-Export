int __usercall EffectItemList_Clear_::DestroyEffectItem@<eax>(int a1@<esi>)
{
  unsigned int v1; // edi
  _DWORD *v2; // eax

  v1 = *(_DWORD *)(a1 + 4); /*0x414c78*/
  if ( !v1 ) /*0x414c7d*/
    return EffectItemList_Clear_::NextEntryNode(a1); /*0x414c7d*/
  EffectItem_destr(*(unsigned int **)(a1 + 4)); /*0x414c81*/
  FormHeapFree(v1); /*0x414c87*/
  v2 = *(_DWORD **)(a1 + 8); /*0x414c8c*/
  if ( v2 ) /*0x414c94*/
    return EffectItemList_Clear_::RemoveEntryNode(a1, v2); /*0x414c95*/
  else
    return EffectItemList_Clear_::ClearEntryData(a1); /*0x414c94*/
}
