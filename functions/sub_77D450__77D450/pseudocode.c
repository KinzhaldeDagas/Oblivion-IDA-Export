void sub_77D450()
{
  unsigned int *v0; // esi
  unsigned int *v1; // edi

  sub_782810(); /*0x77d451*/
  v0 = (unsigned int *)unk_B4289C; /*0x77d456*/
  if ( unk_B4289C ) /*0x77d456*/
  {
    do /*0x77d478*/
    {
      v1 = (unsigned int *)v0[0xF]; /*0x77d461*/
      sub_7826E0(v0); /*0x77d466*/
      FormHeapFree((unsigned int)v0); /*0x77d46c*/
      v0 = v1; /*0x77d476*/
    }
    while ( v1 ); /*0x77d478*/
  }
  unk_B4289C = 0; /*0x77d47b*/
}
