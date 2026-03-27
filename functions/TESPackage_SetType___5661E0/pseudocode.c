void __thiscall TESPackage_SetType_(TESPackage *this, signed int a2)
{
  UInt8 v3; // bl
  LocationData *location; // edi
  TargetData *target; // edi
  _DWORD *v6; // eax
  TargetData *v7; // eax
  _DWORD *v8; // eax
  LocationData *v9; // eax
  _DWORD *v10; // eax

  v3 = a2;
  if ( a2 == (char)this->members.type )
  {
    TESPackage_SetType__::Done(a2);
  }
  else
  {
    if ( a2 >= 3 )
    {
      if ( a2 <= 6 )
      {
        target = this->members.target;
        if ( target )
        {
          TESTexture::ClearComponentReferences(this->members.target);
          FormHeapFree((unsigned int)target);
        }
        this->members.target = 0;
      }
      else if ( a2 == 7 )
      {
        location = this->members.location;
        if ( location )
        {
          TESPackage_LocationData_destr(&this->members.location->locationType);
          FormHeapFree((unsigned int)location);
        }
        this->members.location = 0;
      }
    }
    switch ( a2 )
    {
      case 0:
      case 1:
      case 7:
      case 8:
      case 9:
        if ( !this->members.target )
        {
          v10 = (_DWORD *)FormHeapAlloc(0xCu);
          a2 = (signed int)v10;
          if ( v10 )
            this->members.target = (TargetData *)TESPackage_TargetData_constr(v10);
          else
            this->members.target = 0;
        }
        break;
      case 2:
        if ( !this->members.target )
        {
          v6 = (_DWORD *)FormHeapAlloc(0xCu);
          a2 = (signed int)v6;
          if ( v6 )
            v7 = (TargetData *)TESPackage_TargetData_constr(v6);
          else
            v7 = 0;
          this->members.target = v7;
        }
        if ( !this->members.location )
        {
          v8 = (_DWORD *)FormHeapAlloc(0xCu);
          a2 = (signed int)v8;
          if ( !v8 )
            goto LABEL_26;
          goto LABEL_19;
        }
        break;
      case 5:
      case 6:
        if ( !this->members.location )
        {
          v8 = (_DWORD *)FormHeapAlloc(0xCu);
          a2 = (signed int)v8;
          if ( v8 )
LABEL_19:
            v9 = (LocationData *)TESPackage_LocationData_constr(v8);
          else
LABEL_26:
            v9 = 0;
          this->members.location = v9;
        }
        break;
      default:
        break;
    }
    this->members.type = v3;
    TESPackage_SetType__::Done(a2);
  }
}
