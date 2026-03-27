int __usercall EffectItemList_Clear_::DestroyEffectItem@<eax>(int a1@<esi>)
{
  unsigned int v1; // edi
  _DWORD *v2; // eax

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    return EffectItemList_Clear_::NextEntryNode(a1);
  EffectItem_destr(*(unsigned int **)(a1 + 4));
  FormHeapFree(v1);
  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
    return EffectItemList_Clear_::RemoveEntryNode(a1, v2);
  else
    return EffectItemList_Clear_::ClearEntryData(a1);
}
