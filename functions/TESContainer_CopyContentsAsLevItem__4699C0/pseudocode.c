int __thiscall TESContainer_CopyContentsAsLevItem(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  if ( !a3 || this == (_DWORD *)0xFFFFFFF8 )
    return TESContainer_CopyContentsAsLevItem_::Done(a2, a3);
  else
    return TESContainer_CopyContentsAsLevItem_::ContentLoop(this + 2, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
