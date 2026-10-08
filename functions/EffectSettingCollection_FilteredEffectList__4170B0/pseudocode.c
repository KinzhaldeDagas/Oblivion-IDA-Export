int __cdecl EffectSettingCollection_FilteredEffectList(int a1, int a2, int a3, int a4, char a5, char a6)
{
  _DWORD *v6; // eax

  v6 = (_DWORD *)FormHeapAlloc(8u); /*0x4170b4*/
  if ( v6 ) /*0x4170be*/
  {
    *v6 = 0; /*0x4170c0*/
    v6[1] = 0; /*0x4170c6*/
  }
  return EffectSettingCollection_FilteredEffectList_::FindFirstNonEmptyBucket(a1, a2, a3, a4, a5, a6);
}
