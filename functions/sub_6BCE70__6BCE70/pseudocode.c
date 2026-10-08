int __cdecl sub_6BCE70(signed int a1, int a2, int a3)
{
  int v3; // ebx
  char *v4; // esi
  int result; // eax

  v3 = a3; /*0x6bce71*/
  if ( a3 ) /*0x6bce77*/
  {
    v4 = (char *)(a2 + 0x1C); /*0x6bce83*/
    do /*0x6bceaa*/
    {
      sub_6BC1E0(a1, (int)(v4 + 0xFFFFFFE4)); /*0x6bce8b*/
      sub_7094A0(v4 + 0xFFFFFFF4, a1); /*0x6bce97*/
      result = sub_7094A0(v4, a1); /*0x6bce9f*/
      v4 += 0x40; /*0x6bcea4*/
      --v3; /*0x6bcea7*/
    }
    while ( v3 ); /*0x6bceaa*/
  }
  return result; /*0x6bceae*/
}
