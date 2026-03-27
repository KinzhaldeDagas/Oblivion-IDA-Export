TESObjectREFR *__cdecl sub_4DB260(char a1, char a2)
{
  TESObjectREFR *result; // eax
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // eax
  TESChildCELL *v5; // eax

  result = 0;
  switch ( a1 )
  {
    case '1':
      v5 = (TESChildCELL *)FormHeapAlloc(0x58u);
      if ( v5 )
        return (TESObjectREFR *)TESObjectREFR_constr(v5);
      break;
    case '2':
      v4 = (TESObjectREFR *)FormHeapAlloc(0x10Cu);
      if ( v4 )
        return sub_60E540(v4, a2);
      break;
    case '3':
      v3 = (TESObjectREFR *)FormHeapAlloc(0x108u);
      if ( v3 )
        return sub_625100(v3, a2);
      break;
    default:
      return result;
  }
  return 0;
}
