signed int __cdecl sub_8B17C0(int a1, char *a2)
{
  char *i; // esi
  char v3; // al
  char v4; // bl
  char v5; // cl
  char v6; // dl

  for ( i = a2; ; ++i )
  {
    v3 = i[a1 - (_DWORD)a2];
    if ( !v3 && !*i )
      return 0;
    if ( v3 < 0x41 || v3 > 0x5A )
      v4 = i[a1 - (_DWORD)a2];
    else
      v4 = v3 + 0x20;
    v5 = *i;
    if ( *i < 0x41 || v5 > 0x5A )
      v6 = *i;
    else
      v6 = v5 + 0x20;
    if ( v4 < v6 )
      return 0xFFFFFFFF;
    if ( v3 >= 0x41 && v3 <= 0x5A )
      v3 += 0x20;
    if ( v5 >= 0x41 && v5 <= 0x5A )
      v5 += 0x20;
    if ( v3 > v5 )
      break;
  }
  return 1;
}
