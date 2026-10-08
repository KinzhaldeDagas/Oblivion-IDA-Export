void __cdecl sub_6F6BF0(int a1, int a2, void ***Src, int a4, int a5, int a6, size_t Size)
{
  unsigned int v7; // esi
  bool v8; // cf
  void ***p_Src; // eax

  if ( !unk_B3F068 ) /*0x6f6c11*/
  {
    v7 = Size; /*0x6f6c22*/
    v8 = (unsigned int)Size < 0x100; /*0x6f6c26*/
    unk_B3F068 = a1; /*0x6f6c30*/
    if ( !v8 ) /*0x6f6c35*/
    {
      FaceGen_ReportAssertionViolation(".\\lastError.cpp", 0x41); /*0x6f6c3e*/
      v7 = 0xFF; /*0x6f6c46*/
    }
    p_Src = Src; /*0x6f6c50*/
    if ( HIDWORD(Size) < 0x10 ) /*0x6f6c54*/
      p_Src = (void ***)&Src; /*0x6f6c56*/
    memcpy(destination, p_Src, v7); /*0x6f6c61*/
    destination[v7] = 0; /*0x6f6c69*/
  }
  if ( HIDWORD(Size) >= 0x10 ) /*0x6f6c75*/
    FormHeapFree((unsigned int)Src); /*0x6f6c7c*/
}
