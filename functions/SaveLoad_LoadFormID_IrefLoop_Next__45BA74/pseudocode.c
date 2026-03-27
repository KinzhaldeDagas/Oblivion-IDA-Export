int __userpurge SaveLoad_LoadFormID_::IrefLoop_Next@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4@<ebp>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  unsigned int v10; // esi

  *(_DWORD *)(a1 + 4 * a3) = a2;
  v10 = a3 + 1;
  if ( v10 < a10 )
    return SaveLoad_LoadFormID_::IrefLoop_Top(a1, a4, v10, a5, a6, a7, a8, a9, a10);
  else
    return SaveLoad_LoadFormID_::AdvanceBuffer__(a5, a6);
}
