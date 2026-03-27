int __userpurge EffectItemList_GetItemByIndex_::Loop@<eax>(int a1@<eax>, char a2@<dl>, char a3@<cl>, int a4)
{
  while ( a2 != a3 )
  {
    a1 = *(_DWORD *)(a1 + 4);
    ++a2;
    if ( !a1 )
      return EffectItemList_GetItemByIndex_::return_0(a4);
  }
  return EffectItemList_GetItemByIndex_::return_item(a1, a4);
}
