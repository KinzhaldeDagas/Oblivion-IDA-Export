void __thiscall sub_96E0C0(_DWORD *this, int a2, int a3)
{
  if ( (unsigned int)a2 < 0xA000106 ) /*0x96e0c8*/
  {
    switch ( *(this + 9) ) /*0x96e0d2*/
    {
      case 0: /*0x96e0d2*/
        *(this + 9) = 3; /*0x96e0d9*/
        goto LABEL_4; /*0x96e0d9*/
      case 1: /*0x96e0d2*/
        *(this + 9) = 3; /*0x96e0fa*/
        return; /*0x96e101*/
      case 2: /*0x96e0d2*/
        *(this + 9) = 0; /*0x96e104*/
        goto LABEL_4; /*0x96e10b*/
      case 3: /*0x96e0d2*/
        *(this + 9) = 2; /*0x96e10d*/
LABEL_4:
        if ( *(this + 0xB) ) /*0x96e0e0*/
          sub_95A2B0((int)this, 2u); /*0x96e0e8*/
        else
          sub_95A2B0((int)this, 0); /*0x96e0f2*/
        return; /*0x96e0ed*/
      case 4: /*0x96e0d2*/
        *(this + 9) = 2; /*0x96e116*/
        def_96E0D2(a2, a3); /*0x96e117*/
        return;
      default:
        break;
    }
  }
  JUMPOUT(0x96E11D); /*0x96e11d*/
}
