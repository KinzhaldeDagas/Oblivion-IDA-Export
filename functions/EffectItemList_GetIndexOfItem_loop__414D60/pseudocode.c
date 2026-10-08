void __userpurge EffectItemList_GetIndexOfItem_::loop(char a1@<al>, int a2@<edx>, _DWORD *a3@<ecx>, int a4)
{
  while ( a2 != *a3 ) /*0x414d62*/
  {
    a3 = (_DWORD *)a3[1]; /*0x414d64*/
    ++a1; /*0x414d67*/
    if ( !a3 ) /*0x414d6b*/
    {
      EffectItemList_GetIndexOfItem_::return_0(a4); /*0x414d6c*/
      return; /*0x414d6c*/
    }
  }
  EffectItemList_GetIndexOfItem_::done(a4); /*0x414d62*/
}
