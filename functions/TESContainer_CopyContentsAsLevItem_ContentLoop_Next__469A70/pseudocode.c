int __userpurge TESContainer_CopyContentsAsLevItem_::ContentLoop_Next@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        int _C,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  _DWORD *v12; // ebp

  v12 = *(_DWORD **)(a1 + 4);
  if ( v12 )
    return TESContainer_CopyContentsAsLevItem_::ContentLoop(v12, a2, a3, _C, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return TESContainer_CopyContentsAsLevItem_::MarkModified(a2, a3, _C, a5, a6, a7, a8, a9, a10, a11, a12);
}
