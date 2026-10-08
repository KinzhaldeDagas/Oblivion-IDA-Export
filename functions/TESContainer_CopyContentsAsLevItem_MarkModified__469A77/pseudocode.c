void __userpurge TESContainer_CopyContentsAsLevItem_::MarkModified(
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

  if ( HIBYTE(a4) ) /*0x469a7c*/
  {
    v11 = *(_DWORD *)(a11 + 4); /*0x469a82*/
    if ( v11 ) /*0x469a87*/
      (*(void (__cdecl **)(int))(*(_DWORD *)v11 + 0x48))(0x8000000); /*0x469a93*/
  }
  TESContainer_CopyContentsAsLevItem_::Done(a1, a2); /*0x469a94*/
}
