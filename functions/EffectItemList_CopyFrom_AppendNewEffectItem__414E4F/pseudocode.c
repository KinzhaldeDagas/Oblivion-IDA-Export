int __userpurge EffectItemList_CopyFrom_::AppendNewEffectItem@<eax>(
        _DWORD *a1@<ebx>,
        int a2@<ebp>,
        _DWORD *edi0@<edi>,
        _DWORD *a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD *v9; // eax

  if ( (_DWORD *)*a4 == a1 ) /*0x414e51*/
  {
    *a4 = edi0; /*0x414e72*/
    return EffectItemList_CopyFrom_::UpdateHostileCount((int)a1, a2, edi0, a5, a6, a7, a8, a9); /*0x414e73*/
  }
  else
  {
    v9 = (_DWORD *)FormHeapAlloc(8u); /*0x414e55*/
    if ( v9 == a1 ) /*0x414e5f*/
    {
      a4[1] = 0; /*0x414e6d*/
    }
    else
    {
      *v9 = edi0; /*0x414e61*/
      v9[1] = a1; /*0x414e63*/
      a4[1] = v9; /*0x414e66*/
    }
    return EffectItemList_CopyFrom_::UpdateHostileCount((int)a1, a2, edi0, a5, a6, a7, a8, a9); /*0x414e69*/
  }
}
