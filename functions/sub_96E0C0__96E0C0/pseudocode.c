void __thiscall sub_96E0C0(_DWORD *this, unsigned int a2, int a3)
{
  if ( a2 < 0xA000106 )
  {
    switch ( *(this + 9) )
    {
      case 0:
        *(this + 9) = 3;
        goto LABEL_4;
      case 1:
        *(this + 9) = 3;
        return;
      case 2:
        *(this + 9) = 0;
        goto LABEL_4;
      case 3:
        *(this + 9) = 2;
LABEL_4:
        if ( *(this + 0xB) )
          sub_95A2B0((int)this, 2);
        else
          sub_95A2B0((int)this, 0);
        return;
      case 4:
        *(this + 9) = 2;
        def_96E0D2(a2, a3);
        return;
      default:
        break;
    }
  }
  JUMPOUT(0x96E11D);
}
