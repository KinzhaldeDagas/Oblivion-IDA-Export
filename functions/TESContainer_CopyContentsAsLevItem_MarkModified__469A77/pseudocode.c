int __userpurge TESContainer_CopyContentsAsLevItem_::MarkModified@<eax>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ecx

  if ( HIBYTE(a4) )
  {
    v11 = *(_DWORD *)(a11 + 4);
    if ( v11 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v11 + 0x48))(0x8000000);
  }
  return TESContainer_CopyContentsAsLevItem_::Done(a1, a2);
}
