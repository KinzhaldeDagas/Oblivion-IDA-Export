// positive sp value has been detected, the output may be wrong!
_DWORD *__usercall EffectSettingCollection_FilteredEffectList_::InsertNodeFront@<eax>(
        _DWORD *a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>)
{
  _DWORD *v3; // eax

  if ( a2 )
  {
    if ( *a1 )
    {
      v3 = (_DWORD *)FormHeapAlloc(8u);
      if ( v3 )
      {
        *v3 = *a1;
        v3[1] = 0;
      }
      else
      {
        v3 = 0;
      }
      v3[1] = a1[1];
      a1[1] = v3;
    }
    *a1 = a2;
  }
  if ( a3 )
    JUMPOUT(0x417100);
  return a1;
}
