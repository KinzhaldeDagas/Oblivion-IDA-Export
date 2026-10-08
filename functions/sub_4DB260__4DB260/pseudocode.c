TESObjectREFR *__cdecl sub_4DB260(char a1, char a2)
{
  TESObjectREFR *result; // eax
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // eax
  TESChildCELL *v5; // eax

  result = 0; /*0x4db285*/
  switch ( a1 ) /*0x4db28a*/
  {
    case '1': /*0x4db28a*/
      v5 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x4db316*/
      if ( v5 ) /*0x4db32c*/
        return (TESObjectREFR *)TESObjectREFR_constr(v5); /*0x4db344*/
      break;
    case '2': /*0x4db28a*/
      v4 = (TESObjectREFR *)FormHeapAlloc(0x10Cu); /*0x4db2e0*/
      if ( v4 ) /*0x4db2f6*/
        return sub_60E540(v4, a2); /*0x4db313*/
      break;
    case '3': /*0x4db28a*/
      v3 = (TESObjectREFR *)FormHeapAlloc(0x108u); /*0x4db2a3*/
      if ( v3 ) /*0x4db2b9*/
        return sub_625100(v3, a2); /*0x4db2da*/
      break;
    default:
      return result; /*0x4db298*/
  }
  return 0; /*0x4db2cb*/
}
