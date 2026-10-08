void __thiscall sub_4027D0(NiD3DPass **this)
{
  NiD3DPass *v1; // ecx

  v1 = *this; /*0x4027d0*/
  if ( v1 ) /*0x4027d4*/
  {
    if ( v1->RefCount-- == 1 ) /*0x4027d6*/
      NiD3DPass_ReleaseToPool(v1); /*0x4027dc*/
  }
}
