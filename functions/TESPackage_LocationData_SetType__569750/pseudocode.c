void __thiscall TESPackage_LocationData_SetType(TESPackage *this, int a2)
{
  if ( a2 != SLOBYTE(this->__vftable) ) /*0x569759*/
  {
    LOBYTE(this->__vftable) = a2; /*0x56975b*/
    switch ( (char)a2 ) /*0x569765*/
    {
      case 0: /*0x569765*/
      case 2: /*0x569765*/
      case 3: /*0x569765*/
      case 4: /*0x569765*/
      case 5: /*0x569765*/
        this->members.super.flags = 0; /*0x569777*/
        TESPackage_LocationData_SetType_::def_569765(a2); /*0x569778*/
        return; /*0x569778*/
      case 1: /*0x569765*/
        this->members.super.flags = 0; /*0x56976e*/
        *(_DWORD *)&this->members.super.type = 0; /*0x569771*/
        return;
      default:
        break;
    }
  }
  JUMPOUT(0x56977E); /*0x56977e*/
}
