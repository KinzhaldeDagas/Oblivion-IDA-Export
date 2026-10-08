char __thiscall sub_6FF820(const void **this, char *Src, unsigned int *a3)
{
  if ( !Src ) /*0x6ff82a*/
    return 0; /*0x6ff830*/
  if ( a3 ) /*0x6ff83a*/
  {
    if ( !Shared_GetPointerAtOffset08((Atmosphere *)a3) ) /*0x6ff83e*/
    {
      sub_721440(a3, Src); /*0x6ff84a*/
      return sub_6FF570(this, (int)a3); /*0x6ff85a*/
    }
    if ( !strcmp(Src, (const char *)Shared_GetPointerAtOffset08((Atmosphere *)a3)) ) /*0x6ff88b*/
      return sub_6FF570(this, (int)a3); /*0x6ff88b*/
  }
  return 0; /*0x6ff82c*/
}
