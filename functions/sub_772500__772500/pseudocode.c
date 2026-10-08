void sub_772500()
{
  unsigned int *v0; // edi
  unsigned int v1; // esi
  unsigned int **v2; // ecx

  v0 = (unsigned int *)unk_B4275C; /*0x772508*/
  if ( unk_B4275C ) /*0x772500*/
  {
    v1 = v0[5]; /*0x77250d*/
    *(_DWORD *)(unk_B4275C + 8) = 0; /*0x772512*/
    if ( v1 ) /*0x772519*/
    {
      if ( *(_DWORD *)v1 ) /*0x77251b*/
        sub_7722B0(*(unsigned int **)v1, 3); /*0x772523*/
      v2 = *(unsigned int ***)(v1 + 8); /*0x772528*/
      if ( v2 ) /*0x77252d*/
        sub_772040(v2, 1); /*0x772531*/
      FormHeapFree(v1); /*0x772537*/
    }
    FormHeapFree(*v0); /*0x772542*/
    FormHeapFree((unsigned int)v0); /*0x772548*/
  }
  unk_B4275C = 0; /*0x772551*/
}
