int __userpurge EffectItemList_CopyFrom_::FindLastEntry@<eax>(
        _DWORD *a1@<ebx>,
        int a2@<ebp>,
        _DWORD *edi0@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v11; // esi

  if ( edi0 == a1 ) /*0x414e39*/
    return EffectItemList_CopyFrom_::UpdateHostileCount((int)a1, a2, edi0, a4, a5, a6, a7, a8); /*0x414e39*/
  v11 = (_DWORD *)(a8 + 4); /*0x414e3f*/
  if ( *(_DWORD **)(a8 + 8) == a1 ) /*0x414e45*/
    return EffectItemList_CopyFrom_::AppendNewEffectItem(a1, a2, edi0, v11, a4, a5, a6, a7, a8); /*0x414e45*/
  else
    return EffectItemList_CopyFrom_::FindLastEntry_Loop((int)a1, (int)v11, a4); /*0x414e46*/
}
