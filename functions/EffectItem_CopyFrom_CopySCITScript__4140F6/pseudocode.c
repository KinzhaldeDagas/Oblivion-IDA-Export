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

  v8 = *(int **)(a3 + 0x18);
  if ( v8 == a2 )
    v9 = 0;
  else
    v9 = *v8;
  if ( a1 != a2 )
    *a1 = v9;
  return EffectItem_CopyFrom_::CopySCITName(a4, a5, a6, a7, a8);
}
