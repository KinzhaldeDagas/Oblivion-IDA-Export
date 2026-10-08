TESChildCELL *__cdecl TESObjectREFR_EnableREF(TESChildCELL *a1)
{
  TESChildCELL *result; // eax

  result = a1; /*0x4fa540*/
  if ( a1 ) /*0x4fa546*/
    BSSimpleList_Remove(dword_B361CC, (int)a1); /*0x4fa54e*/
  return result; /*0x4fa553*/
}
