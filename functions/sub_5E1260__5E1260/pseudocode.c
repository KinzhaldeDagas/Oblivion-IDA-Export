char __cdecl sub_5E1260(TESChildCELL *a1)
{
  TESObjectCELL *DwordAtOffset40; // eax

  if ( (TESForm *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5C))(a1) != MEMORY[0xB35ED4] /*0x5e128d*/
    || Shared_GetDwordAtOffset40(a1)
    && (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1), TESObjectCELL_IsInterior(DwordAtOffset40)) )
  {
    dword_B3B744[0xD] = 0; /*0x5e12a0*/
    return 0; /*0x5e12aa*/
  }
  else
  {
    dword_B3B744[0xD] = (int)a1; /*0x5e1296*/
    return 1; /*0x5e129c*/
  }
}
