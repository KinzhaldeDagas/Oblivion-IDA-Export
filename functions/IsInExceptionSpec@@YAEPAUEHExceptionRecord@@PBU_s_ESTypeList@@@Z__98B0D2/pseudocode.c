char __usercall IsInExceptionSpec@<al>(_DWORD *a1@<edi>, struct EHExceptionRecord *a2)
{
  CatchableTypeArray *pCatchableTypeArray; // eax
  int nCatchableTypes; // ebx
  int *arrayOfCatchableTypes; // esi
  int v6; // [esp+4h] [ebp-8h]
  char i; // [esp+Bh] [ebp-1h]

  if ( !a1 ) /*0x98b0da*/
    _inconsistency(); /*0x98b0dc*/
  v6 = 0; /*0x98b0e6*/
  for ( i = 0; v6 < *a1; ++v6 ) /*0x98b0f1*/
  {
    pCatchableTypeArray = a2->params.pThrowInfo->pCatchableTypeArray; /*0x98b0fb*/
    nCatchableTypes = pCatchableTypeArray->nCatchableTypes; /*0x98b0fe*/
    arrayOfCatchableTypes = (int *)pCatchableTypeArray->arrayOfCatchableTypes; /*0x98b102*/
    if ( pCatchableTypeArray->nCatchableTypes > 0 ) /*0x98b105*/
    {
      while ( !__TypeMatch(0x10 * v6 + a1[1], *arrayOfCatchableTypes, &a2->params.pThrowInfo->attributes) ) /*0x98b12a*/
      {
        --nCatchableTypes; /*0x98b12c*/
        ++arrayOfCatchableTypes; /*0x98b12d*/
        if ( nCatchableTypes <= 0 ) /*0x98b132*/
          goto LABEL_9; /*0x98b132*/
      }
      i = 1; /*0x98b136*/
    }
LABEL_9:
    ; /*0x98b13a*/
  }
  return i; /*0x98b149*/
}
