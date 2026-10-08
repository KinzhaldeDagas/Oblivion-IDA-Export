void __userpurge EffectItem_CopyFrom_::CopySCIT_Hostile(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        double a4@<st0>,
        int a5)
{
  int v5; // ecx

  v5 = *(_DWORD *)(a3 + 0x18); /*0x414172*/
  if ( v5 != a1 ) /*0x414177*/
    *(_BYTE *)(v5 + 0x14) = *(_BYTE *)(*(_DWORD *)(a2 + 0x1C) + 0x58) & 1; /*0x414179*/
  EffectItem_CopyFrom_::Done(a3, a4, a5); /*0x41417a*/
}
