void __thiscall sub_46DE10(unsigned int *this)
{
  unsigned int i; // edi
  int v3; // eax
  unsigned int v4; // ebx

  if ( *(this + 1) ) /*0x46de13*/
  {
    for ( i = 0; i < *this; ++i ) /*0x46de1c*/
    {
      v3 = *(this + 1); /*0x46de21*/
      v4 = *(_DWORD *)(v3 + 4 * i); /*0x46de24*/
      if ( v4 ) /*0x46de29*/
      {
        TESTextureList_Clear(*(TESTextureList **)(v3 + 4 * i)); /*0x46de2d*/
        FormHeapFree(v4); /*0x46de33*/
      }
    }
    FormHeapFree(*(this + 1)); /*0x46de47*/
    *(this + 1) = 0; /*0x46de4f*/
  }
  *this = 0; /*0x46de57*/
}
