void __thiscall TESSpellList_ClearLists(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax

  v2 = this + 1; /*0x46f2e4*/
  if ( this != (_DWORD *)0xFFFFFFFC ) /*0x46f2e9*/
  {
    while ( *v2 ) /*0x46f2f3*/
    {
      v3 = (_DWORD *)v2[1]; /*0x46f2f5*/
      if ( v3 ) /*0x46f2fa*/
      {
        v2[1] = v3[1]; /*0x46f2ff*/
        *v2 = *v3; /*0x46f305*/
        FormHeapFree((unsigned int)v3); /*0x46f307*/
      }
      else
      {
        *v2 = 0; /*0x46f311*/
      }
    }
  }
  v4 = this + 3; /*0x46f319*/
  if ( this != (_DWORD *)0xFFFFFFF4 ) /*0x46f31e*/
  {
    while ( *v4 ) /*0x46f323*/
    {
      v5 = (_DWORD *)*(this + 4); /*0x46f325*/
      if ( v5 ) /*0x46f32a*/
      {
        *(this + 4) = v5[1]; /*0x46f32f*/
        *v4 = *v5; /*0x46f335*/
        FormHeapFree((unsigned int)v5); /*0x46f337*/
      }
      else
      {
        *v4 = 0; /*0x46f341*/
      }
    }
  }
}
