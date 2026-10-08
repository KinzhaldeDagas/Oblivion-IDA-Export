// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_38_::unknown_libname_42@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>)
{
  unsigned int v5; // edx
  unsigned int v6; // ecx
  _BYTE *v7; // esi
  _BYTE *v8; // edi
  int result; // eax

  v5 = a2 & a1; /*0x98570b*/
  *(_BYTE *)(a4 + 3) = *(_BYTE *)(a5 + 3); /*0x98570d*/
  v6 = a2 >> 2; /*0x985713*/
  *(_BYTE *)(a4 + 2) = *(_BYTE *)(a5 + 2); /*0x985716*/
  v7 = (_BYTE *)(a5 - 2); /*0x985719*/
  v8 = (_BYTE *)(a4 - 2); /*0x98571c*/
  if ( v6 < 8 ) /*0x985722*/
    return unknown_libname_38(v6, v5, a3, v8, v7); /*0x985722*/
  while ( v6 ) /*0x985725*/
  {
    *(_DWORD *)v8 = *(_DWORD *)v7; /*0x985725*/
    v7 += 0xFFFFFFFC; /*0x985725*/
    v8 += 0xFFFFFFFC; /*0x985725*/
    --v6; /*0x985725*/
  }
  switch ( v5 ) /*0x985728*/
  {
    case 0u: /*0x985728*/
      result = *(_DWORD *)(a3 + 8); /*0x9857e0*/
      break; /*0x9857e6*/
    case 1u: /*0x985728*/
      v8[3] = v7[3]; /*0x9857eb*/
      result = *(_DWORD *)(a3 + 8); /*0x9857ee*/
      break; /*0x9857f4*/
    case 2u: /*0x985728*/
      v8[3] = v7[3]; /*0x9857fb*/
      v8[2] = v7[2]; /*0x985801*/
      result = *(_DWORD *)(a3 + 8); /*0x985804*/
      break; /*0x98580a*/
    case 3u: /*0x985728*/
      v8[3] = v7[3]; /*0x98580f*/
      v8[2] = v7[2]; /*0x985815*/
      v8[1] = v7[1]; /*0x98581b*/
      result = *(_DWORD *)(a3 + 8); /*0x98581e*/
      break; /*0x985824*/
  }
  return result; /*0x9857e6*/
}
