int __userpurge SaveLoad_LoadFormID_::IrefLoop_Top@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int v9; // edi
  int v10; // eax

  v9 = *(_DWORD *)(a1 + 4 * a3);
  if ( TESDataHandler_IsFormIDCreated_(v9) )
    return SaveLoad_LoadFormID_::IrefLoop_CheckFormID(a1, v9, a3, a4, a5, a6, a7, a8, a9);
  v10 = *(_DWORD *)(a2 + 0x74);
  if ( v9 <= *(_DWORD *)(v10 + 0xC) )
    return SaveLoad_LoadFormID_::IrefLoop_IrefToFormID(v10, v9, a1, a3, a4, a5, a6, a7, a8, a9);
  else
    return SaveLoad_LoadFormID_::IrefLoop_CheckFormID(a1, 0, a3, a4, a5, a6, a7, a8, a9);
}
