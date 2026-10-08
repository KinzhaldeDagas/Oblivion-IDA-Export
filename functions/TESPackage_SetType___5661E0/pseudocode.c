void __thiscall TESPackage_SetType_(TESPackage *this, signed int a2)
{
  TESPackageType v3; // bl
  LocationData *location; // edi
  TargetData *target; // edi
  _DWORD *v6; // eax
  TargetData *v7; // eax
  _DWORD *v8; // eax
  LocationData *v9; // eax
  _DWORD *v10; // eax

  v3 = (char)a2; /*0x566209*/
  if ( a2 == this->members.type ) /*0x56620f*/
  {
    TESPackage_SetType__::Done(a2); /*0x56620f*/
  }
  else
  {
    if ( a2 >= 3 ) /*0x566218*/
    {
      if ( a2 <= 6 ) /*0x56621d*/
      {
        target = this->members.target; /*0x566244*/
        if ( target ) /*0x566249*/
        {
          Shared_NoOpVirtual_60D0A0(this->members.target); /*0x56624d*/
          FormHeapFree((unsigned int)target); /*0x566253*/
        }
        this->members.target = 0; /*0x56625b*/
      }
      else if ( a2 == 7 ) /*0x566222*/
      {
        location = this->members.location; /*0x566224*/
        if ( location ) /*0x566229*/
        {
          TESPackage_LocationData_destr(&this->members.location->locationType); /*0x56622d*/
          FormHeapFree((unsigned int)location); /*0x566233*/
        }
        this->members.location = 0; /*0x56623b*/
      }
    }
    switch ( a2 ) /*0x566272*/
    {
      case 0: /*0x566272*/
      case 1: /*0x566272*/
      case 7: /*0x566272*/
      case 8: /*0x566272*/
      case 9: /*0x566272*/
        if ( !this->members.target )            // 3DTheft decode 2026-05-16: TESPackage_SetType allocates TargetData for package types 0,1,7,8,9; direct Follow (type 1) has package->target allocated before target rewrite. /*0x5662dd*/
        {
          v10 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5662e5*/
          a2 = (signed int)v10; /*0x5662ed*/
          if ( v10 ) /*0x5662fb*/
            this->members.target = (TargetData *)TESPackage_TargetData_constr(v10); /*0x566304*/
          else
            this->members.target = 0; /*0x56630b*/
        }
        break; /*0x566307*/
      case 2: /*0x566272*/
        if ( !this->members.target ) /*0x566279*/
        {
          v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x566282*/
          a2 = (signed int)v6; /*0x56628a*/
          if ( v6 ) /*0x566298*/
            v7 = (TargetData *)TESPackage_TargetData_constr(v6); /*0x56629c*/
          else
            v7 = 0; /*0x5662a3*/
          this->members.target = v7; /*0x5662ad*/
        }
        if ( !this->members.location ) /*0x5662b0*/
        {
          v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5662bc*/
          a2 = (signed int)v8; /*0x5662c4*/
          if ( !v8 ) /*0x5662d2*/
            goto LABEL_26; /*0x5662d2*/
          goto LABEL_19; /*0x5662d2*/
        }
        break; /*0x5662d2*/
      case 5: /*0x566272*/
      case 6: /*0x566272*/
        if ( !this->members.location ) /*0x566310*/
        {
          v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x566318*/
          a2 = (signed int)v8; /*0x566320*/
          if ( v8 ) /*0x56632e*/
LABEL_19:
            v9 = (LocationData *)TESPackage_LocationData_constr(v8); /*0x5662d4*/
          else
LABEL_26:
            v9 = 0; /*0x566339*/
          this->members.location = v9; /*0x56633b*/
        }
        break; /*0x56633b*/
      default:
        break;                                  // TESPackage_SetType switch: package types 0,1,7,8,9 allocate target data; type 9 is Ambush and is target-driven.
    }
    this->members.type = v3; /*0x56633e*/
    TESPackage_SetType__::Done(a2); /*0x56633f*/
  }
}
