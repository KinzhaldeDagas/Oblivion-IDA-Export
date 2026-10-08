char __thiscall sub_6C5E20(const char **this, const char *a2, _DWORD *a3)
{
  const char *v3; // ebp
  unsigned int v4; // eax

  *a3 = 0; /*0x6c5e28*/
  v3 = *(this + 2); /*0x6c5e32*/
  if ( !*(this + 4) ) /*0x6c5e2e*/
    return 0; /*0x6c5e89*/
  while ( strcmp(v3, a2) ) /*0x6c5e67*/
  {
    v4 = strlen(v3) + 1; /*0x6c5e77*/
    *a3 += v4; /*0x6c5e7e*/
    v3 += v4; /*0x6c5e80*/
    if ( *a3 >= (unsigned int)*(this + 4) ) /*0x6c5e87*/
      return 0; /*0x6c5e87*/
  }
  return 1; /*0x6c5e89*/
}
