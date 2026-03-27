void __thiscall sub_731D80(unsigned int **this, unsigned int *a2)
{
  if ( !a2 )
    JUMPOUT(0x731E27);
  if ( (*(int (__thiscall **)(unsigned int *))(*a2 + 0x84))(a2) > 3 )
  {
    switch ( a2[0x52] )
    {
      case 0u:
        sub_731C70(this + 4, (int)a2);
        def_731DBE(a2);
        return;
      case 1u:
        sub_731C70(this + 5, (int)a2);
        def_731DBE(a2);
        return;
      case 2u:
        if ( a2 != *(this + 6) )
          goto LABEL_11;
        *(this + 6) = 0;
        def_731DBE(a2);
        break;
      case 3u:
        if ( a2 != *(this + 7) )
          goto LABEL_11;
        *(this + 7) = 0;
        def_731DBE(a2);
        break;
      default:
LABEL_11:
        JUMPOUT(0x731DFD);
    }
  }
  else
  {
    sub_731C70(this + 3, (int)a2);
  }
}
