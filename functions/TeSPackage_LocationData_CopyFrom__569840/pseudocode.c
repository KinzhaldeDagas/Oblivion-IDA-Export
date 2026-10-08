// 3DTheft decode: LocationData_CopyFrom preserves type-specific radius/object data and skips copy when source type is 0xFF unless forced.
void __thiscall TeSPackage_LocationData_CopyFrom(TESPackage *this, char *a2, int a3)
{
  int Radius; // eax
  TESForm::FormFlags v5; // esi
  TESForm::FormFlags v6; // esi
  int v7; // eax
  TESForm::FormFlags v8; // esi
  int v9; // eax
  TESForm::FormFlags v10; // esi
  int v11; // eax

  if ( !a2 || !(_BYTE)a3 && *a2 == (char)0xFF ) /*0x56985a*/
TeSPackage_LocationData_CopyFrom___Done:
    JUMPOUT(0x569922); /*0x569922*/
  TESPackage_LocationData_SetType(this, *a2); /*0x569864*/
  switch ( LOBYTE(this->__vftable) ) /*0x569877*/
  {
    case 0: /*0x569877*/
      Radius = TESPackage_LocationData_GetRadius(a2); /*0x569880*/
      TESPackage_LocationData_SetRadius(this, Radius); /*0x569888*/
      if ( *a2 ) /*0x56988d*/
        v5 = 0; /*0x569897*/
      else
        v5 = *((_DWORD *)a2 + 2); /*0x569892*/
      if ( LOBYTE(this->__vftable) ) /*0x569899*/
        goto TeSPackage_LocationData_CopyFrom___Done; /*0x56989c*/
      this->members.super.flags = v5; /*0x5698a2*/
      break; /*0x5698a7*/
    case 1: /*0x569877*/
      if ( *a2 == 1 ) /*0x5698ad*/
        v6 = *((_DWORD *)a2 + 2); /*0x5698af*/
      else
        v6 = 0; /*0x5698b4*/
      if ( LOBYTE(this->__vftable) != 1 ) /*0x5698b9*/
        goto TeSPackage_LocationData_CopyFrom___Done; /*0x5698b9*/
      this->members.super.flags = v6; /*0x5698bb*/
      break; /*0x5698c0*/
    case 2: /*0x569877*/
    case 3: /*0x569877*/
      v11 = TESPackage_LocationData_GetRadius(a2); /*0x569915*/
      TESPackage_LocationData_SetRadius(this, v11); /*0x56991d*/
      TeSPackage_LocationData_CopyFrom_::Done((int)a2, a3); /*0x56991e*/
      return; /*0x56991e*/
    case 4: /*0x569877*/
      v7 = TESPackage_LocationData_GetRadius(a2); /*0x5698c5*/
      TESPackage_LocationData_SetRadius(this, v7); /*0x5698cd*/
      if ( *a2 == 4 ) /*0x5698d5*/
        v8 = *((_DWORD *)a2 + 2); /*0x5698d7*/
      else
        v8 = 0; /*0x5698dc*/
      if ( LOBYTE(this->__vftable) != 4 ) /*0x5698e1*/
        goto TeSPackage_LocationData_CopyFrom___Done; /*0x5698e1*/
      this->members.super.flags = v8; /*0x5698e3*/
      break; /*0x5698e8*/
    case 5: /*0x569877*/
      v9 = TESPackage_LocationData_GetRadius(a2); /*0x5698ed*/
      TESPackage_LocationData_SetRadius(this, v9); /*0x5698f5*/
      if ( *a2 == 5 ) /*0x5698fd*/
        v10 = *((_DWORD *)a2 + 2); /*0x5698ff*/
      else
        v10 = 0; /*0x569904*/
      if ( LOBYTE(this->__vftable) != 5 ) /*0x569909*/
        goto TeSPackage_LocationData_CopyFrom___Done; /*0x569909*/
      this->members.super.flags = v10; /*0x56990b*/
      break; /*0x569910*/
    default:
      goto TeSPackage_LocationData_CopyFrom___Done;
  }
}
