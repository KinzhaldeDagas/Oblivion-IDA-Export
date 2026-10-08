void __thiscall sub_731CE0(_DWORD **this, _DWORD *a2)
{
  if ( !a2 ) /*0x731cea*/
    JUMPOUT(0x731D60); /*0x731d60*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 0x84))(a2) > 3 ) /*0x731cfb*/
  {
    switch ( a2[0x52] ) /*0x731d1a*/
    {
      case 0: /*0x731d1a*/
        sub_731BF0(this + 4, (int)a2); /*0x731d26*/
        *((_BYTE *)this + 8) = 1; /*0x731d2e*/
        break; /*0x731d34*/
      case 1: /*0x731d1a*/
        sub_731BF0(this + 5, (int)a2); /*0x731d3c*/
        *((_BYTE *)this + 8) = 1; /*0x731d44*/
        break; /*0x731d4a*/
      case 2: /*0x731d1a*/
        *(this + 6) = a2; /*0x731d4d*/
        *((_BYTE *)this + 8) = 1; /*0x731d50*/
        break; /*0x731d56*/
      case 3: /*0x731d1a*/
        *(this + 7) = a2; /*0x731d59*/
        def_731D1A((int)this, (int)a2); /*0x731d5a*/
        break; /*0x731d5a*/
      default:
        JUMPOUT(0x731D5C); /*0x731d5c*/
    }
  }
  else
  {
    sub_731BF0(this + 3, (int)a2); /*0x731d02*/
  }
}
