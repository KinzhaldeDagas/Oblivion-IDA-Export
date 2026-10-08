int __userpurge EffectItemList_CopyFrom_::FindLastEntry_Loop@<eax>(
        _DWORD *a1@<ebx>,
        _DWORD *a2@<esi>,
        int a3@<ebp>,
        _DWORD *a4@<edi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  do /*0x414e4d*/
    a2 = (_DWORD *)a2[1]; /*0x414e47*/
  while ( (_DWORD *)a2[1] != a1 ); /*0x414e4d*/
  return EffectItemList_CopyFrom_::AppendNewEffectItem(a1, a3, a4, a2, a5, a6, a7, a8, a9);
}
