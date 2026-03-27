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

  if ( (_DWORD *)*a4 == a1 )
  {
    *a4 = edi0;
    return EffectItemList_CopyFrom_::UpdateHostileCount((int)a1, a2, edi0, a5, a6, a7, a8, a9);
  }
  else
  {
    v9 = (_DWORD *)FormHeapAlloc(8u);
    if ( v9 == a1 )
    {
      a4[1] = 0;
    }
    else
    {
      *v9 = edi0;
      v9[1] = a1;
      a4[1] = v9;
    }
    return EffectItemList_CopyFrom_::UpdateHostileCount((int)a1, a2, edi0, a5, a6, a7, a8, a9);
  }
}
