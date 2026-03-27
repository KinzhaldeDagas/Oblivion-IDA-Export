int __thiscall sub_6B7CF0(const char ***this)
{
  int v1; // eax
  const char ***v2; // esi
  __int16 v3; // ax
  int v5; // [esp+4h] [ebp-4h]

  v1 = 1;
  v5 = 1;
  v2 = this;
  if ( this )
  {
    do
    {
      if ( !v2[1] && !*v2 )
        break;
      v3 = sub_6B8460(*v2);
      v2 = (const char ***)v2[1];
      LOWORD(v5) = v3 + v5;
    }
    while ( v2 );
    v1 = v5;
  }
  return v1 + 0x11;
}
