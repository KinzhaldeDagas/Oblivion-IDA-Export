int __cdecl sub_6BCE70(signed int a1, int a2, int a3)
{
  int v3; // ebx
  char *v4; // esi
  int result; // eax

  v3 = a3;
  if ( a3 )
  {
    v4 = (char *)(a2 + 0x1C);
    do
    {
      sub_6BC1E0(a1, (int)(v4 + 0xFFFFFFE4));
      sub_7094A0(v4 + 0xFFFFFFF4, a1);
      result = sub_7094A0(v4, a1);
      v4 += 0x40;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
