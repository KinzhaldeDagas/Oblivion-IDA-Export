int __usercall EffectItem_CopyFrom_::CopySCITScript@<eax>(
        int *a1@<eax>,
        int *a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int *v8; // ecx
  int v9; // ecx

  v8 = *(int **)(a3 + 0x18); /*0x4140f6*/
  if ( v8 == a2 ) /*0x4140fb*/
    v9 = 0; /*0x414101*/
  else
    v9 = *v8; /*0x4140fd*/
  if ( a1 != a2 ) /*0x414105*/
    *a1 = v9; /*0x414107*/
  return EffectItem_CopyFrom_::CopySCITName(a4, a5, a6, a7, a8);
}
