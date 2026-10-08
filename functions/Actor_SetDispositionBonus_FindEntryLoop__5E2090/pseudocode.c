void __userpurge Actor_SetDispositionBonus_::FindEntryLoop(
        int **a1@<esi>,
        _DWORD *a2@<ebp>,
        int a3@<ebx>,
        int a4,
        float a5,
        int a6,
        int a7,
        int a8)
{
  int *v8; // edi

  while ( 1 ) /*0x5e2090*/
  {
    v8 = *a1; /*0x5e2090*/
    if ( !*a1 ) /*0x5e2094*/
    {
LABEL_4:
      Actor_SetDispositionBonus_::NewDispositionEntry(a2, a4, a5); /*0x5e20a4*/
      return; /*0x5e20a5*/
    }
    if ( v8[1] == a8 ) /*0x5e209d*/
      break; /*0x5e209d*/
    a1 = (int **)a1[1]; /*0x5e209f*/
    if ( !a1 ) /*0x5e20a4*/
      goto LABEL_4; /*0x5e20a4*/
  }
  Actor_SetDispositionBonus_::ChangeExistingModifier(a8, a3, v8, a4, a5); /*0x5e209d*/
}
