int __thiscall sub_447C50(int *this, char *Str1)
{
  int *v2; // esi
  int v3; // edi

  v2 = this + 0x232;
  if ( Str1 && this != (int *)0xFFFFF738 )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( !_strcmp(Str1, (char *)(v3 + 0x1C)) )
        return v3;
      v2 = (int *)v2[1];
    }
    while ( v2 );
  }
  return 0;
}
