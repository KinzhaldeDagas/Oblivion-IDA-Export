int __cdecl ExtraDataList_CompareListForContainer(int a1, int a2, int a3)
{
  int v3; // esi

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)"ExtraDataList::CompareListForContainer");
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
    return ExtraDataList_CompareListForContainer_::ExtraDataLoop(v3, a1, a2, a3);
  else
    return ExtraDataList_CompareListForContainer_::Return_0(a1);
}
