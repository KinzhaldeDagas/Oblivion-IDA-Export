unsigned int __usercall _input_l_::_assign_num_25677@<eax>(int a1@<ebp>, int a2@<edi>, _DWORD *a3@<esi>)
{
  int v3; // edi
  _BYTE *v4; // edi

  if ( *(_DWORD *)(a1 - 0x48) ) /*0x99686d*/
  {
    *a3 = *(_DWORD *)(a1 - 0x34); /*0x996876*/
    a3[1] = *(_DWORD *)(a1 - 0x30); /*0x99687b*/
  }
  else if ( *(_BYTE *)(a1 - 0xE) ) /*0x996880*/
  {
    *a3 = a2; /*0x996886*/
  }
  else
  {
    *(_WORD *)a3 = a2; /*0x99688a*/
  }
  v3 = *(_DWORD *)(a1 - 0x28); /*0x99688d*/
  ++*(_BYTE *)(a1 - 0x15); /*0x996890*/
  v4 = (_BYTE *)(v3 + 1); /*0x996893*/
  *(_DWORD *)(a1 - 0x28) = v4; /*0x996894*/
  if ( *(_DWORD *)(a1 - 4) != 0xFFFFFFFF ) /*0x9968df*/
    goto LABEL_10; /*0x9968df*/
  if ( *v4 == 0x25 && *(_BYTE *)(*(_DWORD *)(a1 - 0x28) + 1) == 0x6E ) /*0x9968ed*/
  {
    v4 = *(_BYTE **)(a1 - 0x28); /*0x9968ef*/
LABEL_10:
    if ( *v4 ) /*0x9968f1*/
      JUMPOUT(0x995E6B); /*0x995e6b*/
  }
  return _input_l_::_error_return_25524(a1);
}
