char __cdecl sub_9A47E0(char *Src, unsigned __int8 **a2, int a3)
{
  char result; // al
  int v4; // esi
  unsigned __int8 **i; // edi
  rsize_t v6; // [esp-8h] [ebp-114h]
  char Str1[260]; // [esp+4h] [ebp-108h] BYREF

  HIDWORD(v6) = a3;
  LODWORD(v6) = 0x104;
  result = sub_9A2480(Src, Str1, v6);
  if ( result )
  {
    v4 = 0;
    if ( dword_B32584 )
    {
      for ( i = (unsigned __int8 **)&unk_B32590; _strcmp((unsigned __int8 *)Str1, i[1]); i += 2 )
      {
        if ( ++v4 >= (unsigned int)dword_B32584 )
          return 0;
      }
      *a2 = *i;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
