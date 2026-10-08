signed int __cdecl sub_8B17C0(int a1, char *a2)
{
  char *i; // esi
  char v3; // al
  char v4; // bl
  char v5; // cl
  char v6; // dl

  for ( i = a2; ; ++i ) /*0x8b17cb*/
  {
    v3 = i[a1 - (_DWORD)a2]; /*0x8b17d0*/
    if ( !v3 && !*i ) /*0x8b17da*/
      return 0; /*0x8b1829*/
    if ( v3 < 0x41 || v3 > 0x5A ) /*0x8b17e2*/
      v4 = i[a1 - (_DWORD)a2]; /*0x8b17eb*/
    else
      v4 = v3 + 0x20; /*0x8b17e6*/
    v5 = *i; /*0x8b17ed*/
    if ( *i < 0x41 || v5 > 0x5A ) /*0x8b17f7*/
      v6 = *i; /*0x8b1800*/
    else
      v6 = v5 + 0x20; /*0x8b17fb*/
    if ( v4 < v6 ) /*0x8b1804*/
      return 0xFFFFFFFF; /*0x8b1830*/
    if ( v3 >= 0x41 && v3 <= 0x5A ) /*0x8b180c*/
      v3 += 0x20; /*0x8b180e*/
    if ( v5 >= 0x41 && v5 <= 0x5A ) /*0x8b1818*/
      v5 += 0x20; /*0x8b181a*/
    if ( v3 > v5 ) /*0x8b181f*/
      break; /*0x8b181f*/
  }
  return 1; /*0x8b1824*/
}
