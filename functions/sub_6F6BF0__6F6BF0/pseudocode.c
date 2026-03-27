void __cdecl sub_6F6BF0(int a1, int a2, void **Src, int a4, int a5, int a6, size_t Size)
{
  int v7; // esi
  bool v8; // cf
  void **p_Src; // eax
  size_t v10; // [esp-4h] [ebp-18h]

  if ( !dword_B3F068 )
  {
    v7 = Size;
    v8 = (unsigned int)Size < 0x100;
    dword_B3F068 = a1;
    if ( !v8 )
    {
      sub_6ED6D0(".\\lastError.cpp", 0x41);
      v7 = 0xFF;
    }
    p_Src = Src;
    if ( HIDWORD(Size) < 0x10 )
      p_Src = (void **)&Src;
    LODWORD(v10) = v7;
    memcpy(byte_B3F06C, p_Src, v10);
    byte_B3F06C[v7] = 0;
  }
  if ( HIDWORD(Size) >= 0x10 )
    FormHeapFree((unsigned int)Src);
}
