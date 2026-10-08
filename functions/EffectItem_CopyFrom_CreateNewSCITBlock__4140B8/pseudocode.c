void __userpurge EffectItem_CopyFrom_::CreateNewSCITBlock(
        int *a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // eax

  if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x98) != 0x46464553 || *(int **)(a2 + 0x18) == a1 ) /*0x4140ce*/
  {
    EffectItem_CopyFrom_::Done(a3, a4, a5); /*0x4140c5*/
  }
  else
  {
    __asm { fstp    st } /*0x4140d6*/
    v9 = FormHeapAlloc(0x18u); /*0x4140d8*/
    if ( (int *)v9 == a1 ) /*0x4140e2*/
    {
      v9 = 0; /*0x4140f1*/
    }
    else
    {
      *(_DWORD *)(v9 + 8) = a1; /*0x4140e4*/
      *(_WORD *)(v9 + 0xC) = (_WORD)a1; /*0x4140e7*/
      *(_WORD *)(v9 + 0xE) = (_WORD)a1; /*0x4140eb*/
    }
    *(_DWORD *)(a3 + 0x18) = v9; /*0x4140f3*/
    EffectItem_CopyFrom_::CopySCITScript((int *)v9, a1, a2, a5, a6, a7, a8, a9); /*0x4140f4*/
  }
}
