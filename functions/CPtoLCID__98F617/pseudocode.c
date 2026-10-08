int __usercall CPtoLCID@<eax>(int a1@<eax>)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = a1 - 0x3A4; /*0x98f617*/
  if ( !v1 ) /*0x98f61c*/
    return 0x411; /*0x98f640*/
  v2 = v1 - 4; /*0x98f61e*/
  if ( !v2 ) /*0x98f621*/
    return 0x804; /*0x98f63a*/
  v3 = v2 - 0xD; /*0x98f623*/
  if ( !v3 ) /*0x98f626*/
    return 0x412; /*0x98f634*/
  if ( v3 == 1 ) /*0x98f629*/
    return 0x404; /*0x98f62e*/
  return 0; /*0x98f62d*/
}
