unsigned int __userpurge sub_440120@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectCELL *a1)
{
  unsigned int result; // eax
  unsigned int i; // esi
  int v8; // edx

  result = uInteriorCellBuffer; /*0x440120*/
  for ( i = 0; ; ++i ) /*0x44012d*/
  {
    if ( i >= result ) /*0x440132*/
      goto LABEL_7; /*0x440132*/
    if ( a1 == *(TESObjectCELL **)(*(this + 0xE) + 4 * i) ) /*0x44013a*/
      break; /*0x44013a*/
  }
  TESObjectCELL_Deactivate(st5_0, a3, a4, a1); /*0x440148*/
  *(_DWORD *)(*(this + 0xE) + 4 * i) = 0; /*0x440150*/
  while ( 1 ) /*0x440157*/
  {
    result = uInteriorCellBuffer; /*0x440157*/
LABEL_7:
    v8 = *(this + 0xE); /*0x440160*/
    if ( i >= result - 1 ) /*0x440168*/
      break; /*0x440168*/
    *(_DWORD *)(v8 + 4 * i) = *(_DWORD *)(v8 + 4 * i + 4); /*0x440171*/
    ++i; /*0x440173*/
  }
  *(_DWORD *)(v8 + 4 * result - 4) = 0; /*0x440178*/
  *((_BYTE *)this + 0x69) = 1; /*0x440180*/
  return result; /*0x440184*/
}
