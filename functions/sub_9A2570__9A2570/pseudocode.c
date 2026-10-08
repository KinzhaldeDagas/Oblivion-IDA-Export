char __cdecl sub_9A2570(char *Src, const char **a2, int a3)
{
  char result; // al
  int v4; // esi
  const char **i; // edi
  rsize_t v6; // [esp-8h] [ebp-114h]
  char Str1[260]; // [esp+4h] [ebp-108h] BYREF

  HIDWORD(v6) = a3; /*0x9a259a*/
  LODWORD(v6) = 0x104; /*0x9a259b*/
  result = sub_9A2480(Src, Str1, v6); /*0x9a25a6*/
  if ( result ) /*0x9a25b0*/
  {
    v4 = 0; /*0x9a25c9*/
    if ( dword_B3245C ) /*0x9a25d2*/
    {
      for ( i = (const char **)&unk_B32460; CRT_StricmpLocaleDispatch(Str1, i[1]); i += 2 ) /*0x9a25d4*/
      {
        if ( ++v4 >= (unsigned int)dword_B3245C ) /*0x9a2601*/
          return 0; /*0x9a2601*/
      }
      *a2 = *i; /*0x9a2620*/
      return 1; /*0x9a262d*/
    }
    else
    {
      return 0; /*0x9a2603*/
    }
  }
  return result; /*0x9a25b2*/
}
