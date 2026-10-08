void __userpurge SaveLoad_SaveCreatedObjects_::CountLoop_Next(
        _DWORD *a1@<ebx>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        signed int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  UInt32 *v16; // edi
  void (__cdecl *v17)(int, int *, int, signed int *, int); // eax

  v16 = *(UInt32 **)(a2 + 4); /*0x45ded8*/
  if ( v16 ) /*0x45dedd*/
  {
    SaveLoad_SaveCreatedObjects_::CountLoop_Body(v16, a1, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16); /*0x45dedd*/
  }
  else
  {
    if ( (a1[6] & 0x200) != 0 ) /*0x45deeb*/
    {
      a1[0x24] += 4; /*0x45deed*/
    }
    else
    {
      v17 = *(void (__cdecl **)(int, int *, int, signed int *, int))(a16 + 8); /*0x45df09*/
      a7 = 1; /*0x45df0c*/
      v17(a16, &a6, 4, &a7, 1); /*0x45df14*/
    }
    if ( !a6 || (a7 = (signed int)(a1 + 0xA), a1 == (_DWORD *)0xFFFFFFD8) ) /*0x45df2d*/
      SaveLoad_SaveCreatedObjects_::Done(a3); /*0x45df1e*/
    else
      SaveLoad_SaveCreatedObjects_::SaveLoop_Body(a1, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16); /*0x45df2e*/
  }
}
