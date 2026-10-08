int __userpurge EffectItemList_GetItemByIndex_::Loop@<eax>(int a1@<eax>, char a2@<dl>, char a3@<cl>, int a4)
{
  while ( a2 != a3 ) /*0x414d93*/
  {
    a1 = *(_DWORD *)(a1 + 4); /*0x414d95*/
    ++a2; /*0x414d98*/
    if ( !a1 ) /*0x414d9d*/
      return EffectItemList_GetItemByIndex_::return_0(a4); /*0x414d9e*/
  }
  return EffectItemList_GetItemByIndex_::return_item(a1, a4);
}
