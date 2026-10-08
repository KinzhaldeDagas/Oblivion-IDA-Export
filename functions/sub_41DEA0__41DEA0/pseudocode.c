void sub_41DEA0()
{
  void *v0; // esi
  int v1; // edi

  v0 = *((void **)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x41dead*/
  v1 = unk_B33780; /*0x41deb1*/
  if ( *((_DWORD *)v0 + 3) != unk_B33780 ) /*0x41debd*/
  {
    *((_DWORD *)v0 + 2) = 0; /*0x41decd*/
    _memset((int)v0 + 0x10, 0, 0x174u); /*0x41ded7*/
    *((_DWORD *)v0 + 3) = v1; /*0x41dedf*/
  }
}
