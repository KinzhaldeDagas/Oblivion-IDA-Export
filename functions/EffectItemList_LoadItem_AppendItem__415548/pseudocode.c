int __userpurge EffectItemList_LoadItem_::AppendItem@<eax>(_DWORD *a1@<ebx>, int a2@<esi>, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-4h]

  BSSimpleList_PushBack((_DWORD *)(a2 + 4), v5);
  if ( EffectItem_IsHostile(a1) )
    ++*(_DWORD *)(a2 + 0xC);
  return EffectItemList_LoadItem_::Done(a3, a4);
}
