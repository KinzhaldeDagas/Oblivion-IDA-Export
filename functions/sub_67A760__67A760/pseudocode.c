void __thiscall sub_67A760(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer **v3; // ecx
  Ni2DBuffer **v4; // eax
  int v5; // edi
  LONG v6; // eax
  int *v7; // [esp-4h] [ebp-20h]

  if ( !a2 || sub_677CA0(this) ) /*0x67a795*/
  {
    if ( !a2 ) /*0x67a818*/
      return; /*0x67a818*/
  }
  else
  {
    v3 = this; /*0x67a7a0*/
    v4 = this; /*0x67a7a2*/
    if ( this ) /*0x67a7a4*/
    {
      while ( *v3 != a2 ) /*0x67a7a8*/
      {
        v4 = v3; /*0x67a7aa*/
        v3 = (Ni2DBuffer **)v3[1]; /*0x67a7ac*/
        if ( !v3 ) /*0x67a7b1*/
          goto LABEL_15; /*0x67a7b1*/
      }
      if ( v3 == this ) /*0x67a7c3*/
      {
        v5 = (int)*(this + 1); /*0x67a7c5*/
        if ( !v5 ) /*0x67a7cc*/
        {
          NiSmartPointer_Set__(this, 0); /*0x67a7e0*/
          v6 = InterlockedDecrement((volatile LONG *)&a2->members); /*0x67a7f1*/
          goto LABEL_16; /*0x67a7f1*/
        }
        v7 = (int *)*(this + 1); /*0x67a7d1*/
        *(this + 1) = *(Ni2DBuffer **)(v5 + 4); /*0x67a7d2*/
        OB_NiSmartPointer_Assign_010201A0((int *)this, v7); /*0x67a7d5*/
        v3 = (Ni2DBuffer **)v5; /*0x67a7da*/
      }
      else
      {
        v4[1] = v3[1]; /*0x67a7f6*/
      }
      sub_67A1F0((int *)v3, 1); /*0x67a7fb*/
    }
  }
LABEL_15:
  v6 = InterlockedDecrement((volatile LONG *)&a2->members); /*0x67a81a*/
LABEL_16:
  if ( !v6 ) /*0x67a826*/
    (*(void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable)(a2, 1); /*0x67a830*/
}
