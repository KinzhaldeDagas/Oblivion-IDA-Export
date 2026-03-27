char __thiscall TeSPackage_LocationData_CopyFrom(TESPackage *this, char *a2, int a3)
{
  char result; // al
  int Radius; // eax
  TESForm::FormFlags v6; // esi
  TESForm::FormFlags v7; // esi
  int v8; // eax
  TESForm::FormFlags v9; // esi
  int v10; // eax
  TESForm::FormFlags v11; // esi
  int v12; // eax

  if ( !a2 || !(_BYTE)a3 && *a2 == (char)0xFF )
TeSPackage_LocationData_CopyFrom___Done:
    JUMPOUT(0x569922);
  TESPackage_LocationData_SetType(this, *a2);
  result = (char)this->__vftable;
  switch ( LOBYTE(this->__vftable) )
  {
    case 0:
      Radius = TESPackage_LocationData_GetRadius(a2);
      result = TESPackage_LocationData_SetRadius(this, Radius);
      if ( *a2 )
        v6 = 0;
      else
        v6 = *((_DWORD *)a2 + 2);
      if ( LOBYTE(this->__vftable) )
        goto TeSPackage_LocationData_CopyFrom___Done;
      this->members.super.flags = v6;
      break;
    case 1:
      if ( *a2 == 1 )
        v7 = *((_DWORD *)a2 + 2);
      else
        v7 = 0;
      if ( LOBYTE(this->__vftable) != 1 )
        goto TeSPackage_LocationData_CopyFrom___Done;
      this->members.super.flags = v7;
      break;
    case 2:
    case 3:
      v12 = TESPackage_LocationData_GetRadius(a2);
      TESPackage_LocationData_SetRadius(this, v12);
      return TeSPackage_LocationData_CopyFrom_::Done(a2, a3);
    case 4:
      v8 = TESPackage_LocationData_GetRadius(a2);
      result = TESPackage_LocationData_SetRadius(this, v8);
      if ( *a2 == 4 )
        v9 = *((_DWORD *)a2 + 2);
      else
        v9 = 0;
      if ( LOBYTE(this->__vftable) != 4 )
        goto TeSPackage_LocationData_CopyFrom___Done;
      this->members.super.flags = v9;
      break;
    case 5:
      v10 = TESPackage_LocationData_GetRadius(a2);
      result = TESPackage_LocationData_SetRadius(this, v10);
      if ( *a2 == 5 )
        v11 = *((_DWORD *)a2 + 2);
      else
        v11 = 0;
      if ( LOBYTE(this->__vftable) != 5 )
        goto TeSPackage_LocationData_CopyFrom___Done;
      this->members.super.flags = v11;
      break;
    default:
      goto TeSPackage_LocationData_CopyFrom___Done;
  }
  return result;
}
