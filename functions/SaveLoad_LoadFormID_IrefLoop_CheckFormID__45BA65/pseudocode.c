int __userpurge SaveLoad_LoadFormID_::IrefLoop_CheckFormID@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  if ( !*(_DWORD *)(a1 + 4 * a3) || a2 )
    return SaveLoad_LoadFormID_::IrefLoop_Next(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  HIBYTE(a7) = 1;
  return SaveLoad_LoadFormID_::IrefLoop_Next(a1, 0, a3, a4, a5, a6, a7, a8, a9);
}
