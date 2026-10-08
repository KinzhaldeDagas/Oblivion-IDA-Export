// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_16_::unknown_libname_37@<eax>(
        char a1@<dl>,
        unsigned int a2@<ecx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  int result; // eax

  v5 = a2 + a5 - 4; /*0x985684*/
  v6 = a2 + a4 - 4; /*0x985688*/
  if ( (v6 & 3) != 0 ) /*0x985692*/
    return unknown_libname_38_::unknown_libname_39(a2, v6); /*0x985692*/
  v7 = a2 >> 2; /*0x985694*/
  v8 = a1 & 3; /*0x985697*/
  if ( v7 < 8 ) /*0x98569d*/
    return unknown_libname_38(v7); /*0x98569d*/
  while ( v7 ) /*0x9856a0*/
  {
    *(_DWORD *)v6 = *(_DWORD *)v5; /*0x9856a0*/
    v5 -= 4; /*0x9856a0*/
    v6 -= 4; /*0x9856a0*/
    --v7; /*0x9856a0*/
  }
  switch ( v8 ) /*0x9856a3*/
  {
    case 0: /*0x9856a3*/
      result = *(_DWORD *)(a3 + 8); /*0x9857e0*/
      break; /*0x9857e6*/
    case 1: /*0x9856a3*/
      *(_BYTE *)(v6 + 3) = *(_BYTE *)(v5 + 3); /*0x9857eb*/
      result = *(_DWORD *)(a3 + 8); /*0x9857ee*/
      break; /*0x9857f4*/
    case 2: /*0x9856a3*/
      *(_BYTE *)(v6 + 3) = *(_BYTE *)(v5 + 3); /*0x9857fb*/
      *(_BYTE *)(v6 + 2) = *(_BYTE *)(v5 + 2); /*0x985801*/
      result = *(_DWORD *)(a3 + 8); /*0x985804*/
      break; /*0x98580a*/
    case 3: /*0x9856a3*/
      *(_BYTE *)(v6 + 3) = *(_BYTE *)(v5 + 3); /*0x98580f*/
      *(_BYTE *)(v6 + 2) = *(_BYTE *)(v5 + 2); /*0x985815*/
      *(_BYTE *)(v6 + 1) = *(_BYTE *)(v5 + 1); /*0x98581b*/
      result = *(_DWORD *)(a3 + 8); /*0x98581e*/
      break; /*0x985824*/
  }
  return result; /*0x9857e6*/
}
