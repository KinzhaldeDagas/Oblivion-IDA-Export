bool __thiscall sub_517B20(const char **this, const char **a2)
{
  const char *v2; // ecx

  if ( *a2 && (v2 = *this) != 0 ) /*0x517b2e*/
    return CRT_StricmpLocaleDispatch(v2, *a2) != 0; /*0x517b41*/
  else
    return 2 * (*a2 == 0) != 1; /*0x517b5a*/
}
