void __stdcall sub_631DC0(Actor *a1, int a2)
{
  TESPackage *v2; // eax
  TESPackage *v3; // edi
  _DWORD *v4; // eax
  TESPackage *v5; // esi

  v2 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x631de5*/
  if ( v2 ) /*0x631dfb*/
    v3 = TESPackage::TESPackage(v2); /*0x631e04*/
  else
    v3 = 0; /*0x631e08*/
  TESPackage_SetType_(v3, 6); /*0x631e16*/
  v3->members.packageFlags &= 0xFFFFFFF9; /*0x631e1b*/
  v4 = (_DWORD *)FormHeapAlloc(0xCu); /*0x631e21*/
  if ( v4 ) /*0x631e37*/
    v5 = (TESPackage *)TESPackage_LocationData_constr(v4); /*0x631e40*/
  else
    v5 = 0; /*0x631e44*/
  TESPackage_LocationData_SetType(v5, 0); /*0x631e52*/
  TESPackage_LocationData_SetReference(v5, a2); /*0x631e5e*/
  TESPackage_LocationData_SetRadius(v5, 0); /*0x631e67*/
  TESPackage_SetLocation(v3, (char *)v5); /*0x631e6f*/
  if ( v5 ) /*0x631e76*/
  {
    TESPackage_LocationData_destr(v5); /*0x631e7a*/
    FormHeapFree((unsigned int)v5); /*0x631e80*/
  }
  sub_5672A0(v3); /*0x631e8a*/
  Actor_AddPackage_(a1, v3, 1, 1); /*0x631e98*/
}
