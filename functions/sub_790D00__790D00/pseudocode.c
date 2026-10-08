// Compact CBranch cleanup: frees vertex storage, recursively destroys children, and clears child/flare vectors.
void __thiscall OB_CBranch_cleanup_010201A0(unsigned int *this)
{
  unsigned int v2; // edi
  int i; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax

  FormHeapFree(*(this + 6)); /*0x790d37*/
  v2 = 0; /*0x790d41*/
  *(this + 6) = 0; /*0x790d43*/
  for ( i = 0; ; i += 0xC ) /*0x790d46*/
  {
    v4 = *(this + 3); /*0x790d50*/
    if ( !v4 || v2 >= (int)(*(this + 4) - v4) / 0xC ) /*0x790d72*/
      break; /*0x790d72*/
    v5 = *(this + 3); /*0x790d74*/
    if ( !v5 || v2 >= (int)(*(this + 4) - v5) / 0xC ) /*0x790d92*/
      _invalid_parameter_noinfo(); /*0x790d94*/
    v6 = *(this + 3); /*0x790d99*/
    v7 = *(_DWORD *)(v6 + i + 8); /*0x790d9c*/
    if ( v7 ) /*0x790da2*/
    {
      OB_CBranch_cleanup_010201A0(*(unsigned int **)(v6 + i + 8)); /*0x790da6*/
      FormHeapFree(v7); /*0x790dac*/
    }
    v8 = *(this + 3); /*0x790db4*/
    if ( !v8 || v2 >= (int)(*(this + 4) - v8) / 0xC ) /*0x790dd2*/
      _invalid_parameter_noinfo(); /*0x790dd4*/
    *(_DWORD *)(*(this + 3) + i + 8) = 0; /*0x790ddc*/
    ++v2; /*0x790de4*/
  }
  if ( *(this + 0xD) ) /*0x790df1*/
    FormHeapFree(*(this + 0xD)); /*0x790df9*/
  *(this + 0xD) = 0; /*0x790e01*/
  *(this + 0xE) = 0; /*0x790e04*/
  *(this + 0xF) = 0; /*0x790e07*/
  if ( *(this + 3) ) /*0x790e0a*/
    FormHeapFree(*(this + 3)); /*0x790e12*/
  *(this + 3) = 0; /*0x790e1a*/
  *(this + 4) = 0; /*0x790e1d*/
  *(this + 5) = 0; /*0x790e20*/
}
