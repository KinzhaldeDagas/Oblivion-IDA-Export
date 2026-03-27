int __userpurge SaveLoad_LoadFormID_::IrefLoop_IrefToFormID@<eax>(
        int a1@<eax>,
        int a2@<edi>,
        int ebx0@<ebx>,
        int esi0@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return SaveLoad_LoadFormID_::IrefLoop_CheckFormID(
           ebx0,
           *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * a2),
           esi0,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
