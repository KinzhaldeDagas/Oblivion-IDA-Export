int __cdecl EffectSettingCollection_FilteredEffectList(int a1, int a2, int a3, int a4, char a5, char a6)
{
  _DWORD *v6; // eax

  v6 = (_DWORD *)FormHeapAlloc(8u);
  if ( v6 )
  {
    *v6 = 0;
    v6[1] = 0;
  }
  return EffectSettingCollection_FilteredEffectList_::FindFirstNonEmptyBucket(a1, a2, a3, a4, a5, a6);
}
