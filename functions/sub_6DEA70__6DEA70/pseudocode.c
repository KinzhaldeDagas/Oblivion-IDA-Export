int __thiscall sub_6DEA70(_BYTE *this, float a2)
{
  switch ( *(this + 0x40) & 7 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      return def_6DEA8F(a2);
    default:
      JUMPOUT(0x6DEACB);
  }
}
