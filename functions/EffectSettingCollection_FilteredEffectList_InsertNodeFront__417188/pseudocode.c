// positive sp value has been detected, the output may be wrong!
_DWORD *__usercall EffectSettingCollection_FilteredEffectList_::InsertNodeFront@<eax>(
        _DWORD *a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>)
{
  _DWORD *v3; // eax

  if ( a2 ) /*0x41718a*/
  {
    if ( *a1 ) /*0x41718c*/
    {
      v3 = (_DWORD *)FormHeapAlloc(8u); /*0x417194*/
      if ( v3 ) /*0x41719e*/
      {
        *v3 = *a1; /*0x4171a3*/
        v3[1] = 0; /*0x4171a5*/
      }
      else
      {
        v3 = 0; /*0x4171ae*/
      }
      v3[1] = a1[1]; /*0x4171b3*/
      a1[1] = v3; /*0x4171b6*/
    }
    *a1 = a2; /*0x4171b9*/
  }
  if ( a3 ) /*0x4171be*/
    JUMPOUT(0x417100); /*0x417100*/
  return a1; /*0x4171c9*/
}
