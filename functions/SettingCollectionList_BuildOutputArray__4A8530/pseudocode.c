int __thiscall SettingCollectionList_BuildOutputArray(char *this, unsigned __int16 *a2)
{
  char *v2; // esi
  int v3; // edi

  v2 = this + 0x10C; /*0x4a8532*/
  v3 = 0; /*0x4a8538*/
  if ( this != (char *)0xFFFFFEF4 ) /*0x4a853c*/
  {
    do /*0x4a8553*/
    {
      Setting_BuildOutputArray(*(char **)v2, a2); /*0x4a8546*/
      v2 = *((char **)v2 + 1); /*0x4a854b*/
      ++v3; /*0x4a854e*/
    }
    while ( v2 ); /*0x4a8553*/
  }
  return v3; /*0x4a8558*/
}
