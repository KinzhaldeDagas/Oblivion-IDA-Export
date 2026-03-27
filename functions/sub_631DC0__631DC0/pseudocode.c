void __stdcall sub_631DC0(Actor *a1, int a2)
{
  TESPackage *v2; // eax
  TESPackage *v3; // edi
  _DWORD *v4; // eax
  TESPackage *v5; // esi

  v2 = (TESPackage *)FormHeapAlloc(0x3Cu);
  if ( v2 )
    v3 = TESPackage::TESPackage(v2);
  else
    v3 = 0;
  TESPackage_SetType_(v3, kPackageType_Travel);
  v3->members.packageFlags &= 0xFFFFFFF9;
  v4 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v4 )
    v5 = (TESPackage *)TESPackage_LocationData_constr(v4);
  else
    v5 = 0;
  TESPackage_LocationData_SetType(v5, 0);
  TESPackage_LocationData_SetReference(v5, a2);
  TESPackage_LocationData_SetRadius(v5, 0);
  TESPackage_SetLocation(v3, (char *)v5);
  if ( v5 )
  {
    TESPackage_LocationData_destr(v5);
    FormHeapFree((unsigned int)v5);
  }
  sub_5672A0(v3);
  Actor_AddPackage_(a1, v3, 1, 1);
}
