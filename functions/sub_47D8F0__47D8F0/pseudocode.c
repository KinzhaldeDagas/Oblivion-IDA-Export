char __cdecl sub_47D8F0(char *Str1, char *a2)
{
  char *v2; // esi
  size_t v4; // [esp-4h] [ebp-10h]

  v2 = Str1;
  *a2 = 0;
  if ( Str1[1] == 0x3A )
    v2 = Str1 + 3;
  if ( *v2 == 0x5C )
    ++v2;
  LODWORD(v4) = 5;
  if ( !_strnicmp(v2, "data\\", v4) )
    v2 += 5;
  strcat(a2, v2);
  _strlwr(a2);
  return 1;
}
