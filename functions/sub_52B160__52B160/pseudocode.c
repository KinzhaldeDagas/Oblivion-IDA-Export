void *__thiscall sub_52B160(char *this, TESForm *a2)
{
  char *v3; // esi
  void *result; // eax

  v3 = this + 4; /*0x52b164*/
  if ( this != (char *)0xFFFFFFFC ) /*0x52b169*/
  {
    do /*0x52b182*/
    {
      if ( *(_DWORD *)v3 ) /*0x52b170*/
        result = sub_52B0C0(*(UInt32 **)v3, a2, this); /*0x52b178*/
      v3 = *((char **)v3 + 1); /*0x52b17d*/
    }
    while ( v3 ); /*0x52b182*/
  }
  return result; /*0x52b185*/
}
