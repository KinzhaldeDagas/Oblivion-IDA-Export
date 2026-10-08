void __thiscall sub_731D80(unsigned int **this, unsigned int *a2)
{
  if ( !a2 ) /*0x731d8a*/
    JUMPOUT(0x731E27); /*0x731e27*/
  if ( (*(int (__thiscall **)(unsigned int *))(*a2 + 0x84))(a2) > 3 ) /*0x731d9f*/
  {
    switch ( a2[0x52] ) /*0x731dbe*/
    {
      case 0u: /*0x731dbe*/
        sub_731C70(this + 4, (int)a2); /*0x731dca*/
        def_731DBE((int)this, (int)a2); /*0x731dd2*/
        return; /*0x731dd2*/
      case 1u: /*0x731dbe*/
        sub_731C70(this + 5, (int)a2); /*0x731dd9*/
        def_731DBE((int)this, (int)a2); /*0x731de1*/
        return; /*0x731de1*/
      case 2u: /*0x731dbe*/
        if ( a2 != *(this + 6) ) /*0x731de6*/
          goto LABEL_11; /*0x731de6*/
        *(this + 6) = 0; /*0x731de8*/
        def_731DBE((int)this, (int)a2); /*0x731def*/
        break; /*0x731def*/
      case 3u: /*0x731dbe*/
        if ( a2 != *(this + 7) ) /*0x731df4*/
          goto LABEL_11; /*0x731df4*/
        *(this + 7) = 0; /*0x731df6*/
        def_731DBE((int)this, (int)a2); /*0x731df7*/
        break; /*0x731df7*/
      default:
LABEL_11:
        JUMPOUT(0x731DFD); /*0x731dfd*/
    }
  }
  else
  {
    sub_731C70(this + 3, (int)a2); /*0x731da6*/
  }
}
