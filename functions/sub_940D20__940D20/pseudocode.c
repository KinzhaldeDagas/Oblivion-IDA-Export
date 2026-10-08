int __thiscall sub_940D20(void *this, char *a2)
{
  int v2; // eax
  int v3; // eax

  v2 = sub_940B80((int)this) - 1; /*0x940d28*/
  if ( !v2 ) /*0x940d29*/
    return *a2; /*0x940d4c*/
  v3 = v2 - 1; /*0x940d2b*/
  if ( !v3 ) /*0x940d2c*/
    return *(__int16 *)a2; /*0x940d41*/
  if ( v3 == 2 ) /*0x940d31*/
    return *(_DWORD *)a2; /*0x940d37*/
  return 0; /*0x940d39*/
}
