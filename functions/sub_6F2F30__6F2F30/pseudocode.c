int __cdecl sub_6F2F30(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 0x2C;
    v4 -= 0x2C;
    sub_414420(v4, (_DWORD *)v3, 0, 0xFFFFFFFF);
    sub_6F2610((char **)(v4 + 0x1C), (char **)(v3 + 0x1C));
  }
  while ( v3 != a1 );
  return v4;
}
