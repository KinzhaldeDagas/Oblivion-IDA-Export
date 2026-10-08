char *__thiscall sub_8CB070(const void **this, const void **a2)
{
  int v3; // ecx
  const void **v4; // esi
  char *result; // eax
  const void ***v6; // edx
  const void **v7; // eax
  int i; // esi
  void (__thiscall ***v9)(_DWORD, const void **); // ecx

  v3 = (int)*(this + 0x18); /*0x8cb079*/
  v4 = this + 0x17; /*0x8cb07c*/
  result = 0; /*0x8cb07f*/
  if ( v3 <= 0 ) /*0x8cb083*/
    goto LABEL_7; /*0x8cb083*/
  v6 = (const void ***)*v4; /*0x8cb085*/
  while ( *v6 != a2 ) /*0x8cb089*/
  {
    ++result; /*0x8cb08b*/
    ++v6; /*0x8cb08c*/
    if ( (int)result >= v3 ) /*0x8cb091*/
      goto LABEL_7; /*0x8cb091*/
  }
  if ( (int)result < 0 ) /*0x8cb097*/
  {
LABEL_7:
    if ( this ) /*0x8cb09b*/
      v7 = this + 0x12; /*0x8cb09d*/
    else
      v7 = 0; /*0x8cb0a2*/
    sub_899DA0(a2, (int)v7); /*0x8cb0a7*/
    if ( *(this + 0x18) == (const void *)((unsigned int)*(this + 0x19) & 0x3FFFFFFF) ) /*0x8cb0b9*/
      sub_8A6EE0(this + 0x17, 4); /*0x8cb0be*/
    *((_DWORD *)*v4 + (_DWORD)*(this + 0x18)) = a2; /*0x8cb0cb*/
    *(this + 0x18) = (char *)*(this + 0x18) + 1; /*0x8cb0ce*/
    for ( i = 0; i < (int)*(this + 0x1B); ++i ) /*0x8cb0d8*/
    {
      v9 = *((void (__thiscall ****)(_DWORD, const void **))*(this + 0x1A) + i); /*0x8cb0e3*/
      (**v9)(v9, a2); /*0x8cb0e9*/
    }
    return (char *)sub_8CAD40(this, a2); /*0x8cb0f6*/
  }
  return result; /*0x8cb0fb*/
}
