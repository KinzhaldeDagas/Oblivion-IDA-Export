void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)
{
  int v1; // ecx
  unsigned int v2; // eax

LABEL_4:
  v2 = dword_B30A4C; /*0x980dbf*/
  while ( v2 < 0xA ) /*0x980dc7*/
  {
    v1 = *(_DWORD *)(4 * v2++ + 0xBA9C6C); /*0x980da7*/
    dword_B30A4C = v2; /*0x980db1*/
    if ( v1 ) /*0x980db6*/
    {
      (*(void (**)(void))(4 * v2 + 0xBA9C68))(); /*0x980db8*/
      goto LABEL_4; /*0x980db8*/
    }
  }
}
