int __userpurge EffectItemList_GetIndexOfItem_::loop@<eax>(char a1@<al>, int a2@<edx>, _DWORD *a3@<ecx>, int a4)
{
  while ( a2 != *a3 )
  {
    a3 = (_DWORD *)a3[1];
    ++a1;
    if ( !a3 )
      return EffectItemList_GetIndexOfItem_::return_0(a4);
  }
  return EffectItemList_GetIndexOfItem_::done(a4);
}
