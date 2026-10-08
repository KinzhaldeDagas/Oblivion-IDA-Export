char __thiscall sub_558520(_DWORD *this)
{
  int v2; // edx
  unsigned int v4; // eax

  v2 = *(this + 3); /*0x558523*/
  if ( !v2 ) /*0x558528*/
    return 0; /*0x558528*/
  if ( !*(_DWORD *)(v2 + 8) ) /*0x55852e*/
  {
    LOWORD(v4) = *(_WORD *)(v2 + 4); /*0x558534*/
    if ( (_WORD)v4 == 0xFFFF ) /*0x55853c*/
      v4 = strlen(*(const char **)v2); /*0x55854d*/
    else
      v4 = (unsigned __int16)v4; /*0x558552*/
    if ( !v4 ) /*0x558557*/
      return 0; /*0x55852d*/
    *(_DWORD *)(*(this + 3) + 8) = BSFaceGenEgtData_CreateFromFile(*(const char **)v2); /*0x558567*/
  }
  return 1; /*0x55852c*/
}
