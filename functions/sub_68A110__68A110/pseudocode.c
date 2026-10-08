char __thiscall sub_68A110(char **this)
{
  char *v2; // ecx
  int v3; // eax

  v2 = *(this + 1); /*0x68a114*/
  if ( !v2 || (v3 = DName::status(v2), v3 != 1) || !*(this + 2) ) /*0x68a127*/
    LOBYTE(v3) = 0; /*0x68a12f*/
  return v3; /*0x68a131*/
}
