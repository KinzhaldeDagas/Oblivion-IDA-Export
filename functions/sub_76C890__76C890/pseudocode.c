NiD3DPass **__thiscall sub_76C890(NiD3DPass **this, NiD3DPass **a2)
{
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax

  v3 = *this; /*0x76c893*/
  if ( v3 != *a2 ) /*0x76c89c*/
  {
    if ( v3 ) /*0x76c8a0*/
    {
      v4 = v3->RefCount-- == 1; /*0x76c8a2*/
      if ( v4 ) /*0x76c8a6*/
        NiD3DPass_ReleaseToPool(v3); /*0x76c8a8*/
    }
    v5 = *a2; /*0x76c8ad*/
    v4 = *a2 == 0; /*0x76c8af*/
    *this = *a2; /*0x76c8b1*/
    if ( !v4 ) /*0x76c8b3*/
      ++v5->RefCount; /*0x76c8b5*/
  }
  return this; /*0x76c8b9*/
}
