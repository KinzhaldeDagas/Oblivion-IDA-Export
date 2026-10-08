// positive sp value has been detected, the output may be wrong!
// attributes: thunk
int __usercall unknown_libname_38_::unknown_libname_51@<eax>(
        int a1@<edx>,
        int a2@<ebp>,
        _BYTE *a3@<edi>,
        _BYTE *a4@<esi>)
{
  int result; // eax

  switch ( a1 ) /*0x9857c7*/
  {
    case 0: /*0x9857c7*/
      result = *(_DWORD *)(a2 + 8); /*0x9857e0*/
      break; /*0x9857e6*/
    case 1: /*0x9857c7*/
      a3[3] = a4[3]; /*0x9857eb*/
      result = *(_DWORD *)(a2 + 8); /*0x9857ee*/
      break; /*0x9857f4*/
    case 2: /*0x9857c7*/
      a3[3] = a4[3]; /*0x9857fb*/
      a3[2] = a4[2]; /*0x985801*/
      result = *(_DWORD *)(a2 + 8); /*0x985804*/
      break; /*0x98580a*/
    case 3: /*0x9857c7*/
      a3[3] = a4[3]; /*0x98580f*/
      a3[2] = a4[2]; /*0x985815*/
      a3[1] = a4[1]; /*0x98581b*/
      result = *(_DWORD *)(a2 + 8); /*0x98581e*/
      break; /*0x98581e*/
  }
  return result; /*0x9857e6*/
}
