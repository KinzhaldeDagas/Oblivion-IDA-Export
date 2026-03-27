void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)
{
  int v1; // ecx
  unsigned int v2; // eax

LABEL_4:
  v2 = dword_B30A4C;
  while ( v2 < 0xA )
  {
    v1 = *(_DWORD *)(4 * v2++ + 0xBA9C6C);
    dword_B30A4C = v2;
    if ( v1 )
    {
      (*(void (**)(void))(4 * v2 + 0xBA9C68))();
      goto LABEL_4;
    }
  }
}
