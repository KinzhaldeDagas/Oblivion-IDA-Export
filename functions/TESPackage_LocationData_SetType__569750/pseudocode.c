int __thiscall TESPackage_LocationData_SetType(TESPackage *this, int a2)
{
  if ( a2 != SLOBYTE(this->__vftable) )
  {
    LOBYTE(this->__vftable) = a2;
    switch ( (char)a2 )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
        this->members.super.flags = 0;
        return TESPackage_LocationData_SetType_::def_569765(a2);
      case 1:
        this->members.super.flags = 0;
        *(_DWORD *)&this->members.super.type = 0;
        return 0;
      default:
        break;
    }
  }
  JUMPOUT(0x56977E);
}
