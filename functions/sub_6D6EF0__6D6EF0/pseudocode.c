void __thiscall sub_6D6EF0(_DWORD *this, float *a2)
{
  float *v3; // eax

  if ( !sub_6D6C80((int)this) ) /*0x6d6efd*/
LABEL_10:
    JUMPOUT(0x6D6FB2); /*0x6d6fb2*/
  v3 = *(float **)(*(this + 0x11) + 0xC); /*0x6d6f06*/
  if ( v3 ) /*0x6d6f0b*/
  {
    switch ( *(this + 0x14) ) /*0x6d6f28*/
    {
      case 0: /*0x6d6f28*/
        *a2 = *v3; /*0x6d6f40*/
        return; /*0x6d6f4a*/
      case 1: /*0x6d6f28*/
        *a2 = v3[1]; /*0x6d6f5e*/
        return; /*0x6d6f68*/
      case 2: /*0x6d6f28*/
        *a2 = v3[2]; /*0x6d6f72*/
        return; /*0x6d6f78*/
      case 3: /*0x6d6f28*/
        *a2 = v3[3]; /*0x6d6f8d*/
        return; /*0x6d6f97*/
      case 4: /*0x6d6f28*/
        *a2 = v3[4]; /*0x6d6fac*/
        def_6D6F28((int)a2); /*0x6d6faf*/
        return; /*0x6d6faf*/
      default:
        goto LABEL_10;
    }
  }
  *a2 = 0.0; /*0x6d6f13*/
}
