int __thiscall sub_447C50(int *this, char *Str1)
{
  int *v2; // esi
  int v3; // edi

  v2 = this + 0x232; /*0x447c59*/
  if ( Str1 && this != (int *)0xFFFFF738 ) /*0x447c63*/
  {
    do /*0x447c65*/
    {
      v3 = *v2; /*0x447c65*/
      if ( !*v2 ) /*0x447c65*/
        break; /*0x447c65*/
      if ( !CRT_StricmpLocaleDispatch(Str1, (const char *)(v3 + 0x1C)) ) /*0x447c7a*/
        return v3; /*0x447c8b*/
      v2 = (int *)v2[1]; /*0x447c7c*/
    }
    while ( v2 ); /*0x447c65*/
  }
  return 0; /*0x447c83*/
}
