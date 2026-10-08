void __thiscall TESFile_destr(CHAR *this)
{
  unsigned int *v2; // ebx
  int v3; // ebx
  unsigned int *v4; // ebx
  int v5; // ebx

  TESFile_Close((Data *)this); /*0x450b13*/
  v2 = (unsigned int *)(this + 0x3E0); /*0x450b1e*/
  if ( this != (CHAR *)0xFFFFFC20 ) /*0x450b24*/
  {
    do /*0x450b3a*/
    {
      if ( *v2 ) /*0x450b26*/
        FormHeapFree(*v2); /*0x450b2d*/
      v2 = (unsigned int *)v2[1]; /*0x450b35*/
    }
    while ( v2 ); /*0x450b3a*/
  }
  if ( *((_DWORD *)this + 0xF9) ) /*0x450b3c*/
  {
    do /*0x450b55*/
    {
      v3 = *(_DWORD *)(*((_DWORD *)this + 0xF9) + 4); /*0x450b44*/
      FormHeapFree(*((_DWORD *)this + 0xF9)); /*0x450b48*/
      *((_DWORD *)this + 0xF9) = v3; /*0x450b52*/
    }
    while ( v3 ); /*0x450b55*/
  }
  *((_DWORD *)this + 0xF8) = 0; /*0x450b57*/
  v4 = (unsigned int *)(this + 0x3E8); /*0x450b5f*/
  if ( this != (CHAR *)0xFFFFFC18 ) /*0x450b63*/
  {
    do /*0x450b79*/
    {
      if ( *v4 ) /*0x450b65*/
        FormHeapFree(*v4); /*0x450b6c*/
      v4 = (unsigned int *)v4[1]; /*0x450b74*/
    }
    while ( v4 ); /*0x450b79*/
  }
  if ( *((_DWORD *)this + 0xFB) ) /*0x450b7b*/
  {
    do /*0x450b94*/
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 0xFB) + 4); /*0x450b83*/
      FormHeapFree(*((_DWORD *)this + 0xFB)); /*0x450b87*/
      *((_DWORD *)this + 0xFB) = v5; /*0x450b91*/
    }
    while ( v5 ); /*0x450b94*/
  }
  *((_DWORD *)this + 0xFA) = 0; /*0x450b96*/
  FormHeapFree(*((_DWORD *)this + 0x89)); /*0x450b9f*/
  FormHeapFree(*((_DWORD *)this + 0xFD)); /*0x450bab*/
  *((_DWORD *)this + 0xFD) = 0; /*0x450bb5*/
  TESFile_ClearThreadSafeFiles((NiTMap_TESCELL **)this); /*0x450bbb*/
  FormHeapFree(*((_DWORD *)this + 0x103)); /*0x450bc7*/
  *((_DWORD *)this + 0x103) = 0; /*0x450bcc*/
  *((_WORD *)this + 0x209) = 0; /*0x450bd2*/
  *((_WORD *)this + 0x208) = 0; /*0x450bd9*/
  FormHeapFree(*((_DWORD *)this + 0x101)); /*0x450be7*/
  *((_DWORD *)this + 0x101) = 0; /*0x450bef*/
  *((_WORD *)this + 0x205) = 0; /*0x450bf5*/
  *((_WORD *)this + 0x204) = 0; /*0x450bfc*/
}
