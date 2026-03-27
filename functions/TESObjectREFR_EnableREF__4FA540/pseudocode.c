TESChildCELL *__cdecl TESObjectREFR_EnableREF(TESChildCELL *a1)
{
  TESChildCELL *result; // eax

  result = a1;
  if ( a1 )
    return (TESChildCELL *)BSSimpleList_Remove(&dword_B361CC, (int)a1);
  return result;
}
