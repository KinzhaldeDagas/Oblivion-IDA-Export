void __userpurge EffectItemList_LoadItem_::AppendItem(_DWORD *a1@<ebx>, int a2@<esi>, int a3, int a4)
{
  int v4; // [esp+0h] [ebp-4h]

  BSSimpleList_PushBack((_DWORD *)(a2 + 4), v4); /*0x41554c*/
  if ( EffectItem_IsHostile(a1) ) /*0x415553*/
    ++*(_DWORD *)(a2 + 0xC); /*0x415560*/
  EffectItemList_LoadItem_::Done(a3, a4); /*0x415564*/
}
