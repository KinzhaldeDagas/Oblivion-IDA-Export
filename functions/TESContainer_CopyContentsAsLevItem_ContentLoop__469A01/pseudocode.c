int __userpurge TESContainer_CopyContentsAsLevItem_::ContentLoop@<eax>(
        _DWORD *a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  if ( a1[1] || *a1 )
    return TESContainer_CopyContentsAsLevItem_::ContentLoop_NewExtraDataList(
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  else
    return TESContainer_CopyContentsAsLevItem_::MarkModified(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
