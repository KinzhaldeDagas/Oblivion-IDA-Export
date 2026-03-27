int __usercall CPtoLCID@<eax>(int a1@<eax>)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = a1 - 0x3A4;
  if ( !v1 )
    return 0x411;
  v2 = v1 - 4;
  if ( !v2 )
    return 0x804;
  v3 = v2 - 0xD;
  if ( !v3 )
    return 0x412;
  if ( v3 == 1 )
    return 0x404;
  return 0;
}
