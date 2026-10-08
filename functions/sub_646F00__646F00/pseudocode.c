TESWorldSpace *__thiscall sub_646F00(_DWORD *this, TESObjectREFR *a2)
{
  TESPackage *v3; // ecx
  TESWorldSpace *result; // eax
  TESObjectREFR *v5; // ecx

  v3 = (TESPackage *)*(this + 2); /*0x646f02*/
  result = 0; /*0x646f05*/
  if ( v3 ) /*0x646f09*/
  {
    switch ( *(_DWORD *)(*(_DWORD *)(4 * v3->members.procedureArrayIndex + 0xB152B0) + 4 * *(this + 1)) ) /*0x646f2c*/
    {
      case 0: /*0x646f2c*/
      case 4: /*0x646f2c*/
      case 5: /*0x646f2c*/
      case 7: /*0x646f2c*/
        if ( !v3->members.location ) /*0x646f36*/
          goto LABEL_6; /*0x646f36*/
        result = sub_566940(v3, (Actor *)a2); /*0x646f3a*/
        break; /*0x646f3a*/
      case 1: /*0x646f2c*/
      case 2: /*0x646f2c*/
      case 3: /*0x646f2c*/
      case 6: /*0x646f2c*/
      case 8: /*0x646f2c*/
      case 0xD: /*0x646f2c*/
      case 0xE: /*0x646f2c*/
      case 0xF: /*0x646f2c*/
      case 0x20: /*0x646f2c*/
        v5 = (TESObjectREFR *)*(this + 0xB); /*0x646f3f*/
        if ( v5 ) /*0x646f44*/
          goto LABEL_7; /*0x646f44*/
        goto LABEL_6; /*0x646f44*/
      case 0x1D: /*0x646f2c*/
      case 0x2C: /*0x646f2c*/
LABEL_6:
        v5 = a2; /*0x646f46*/
LABEL_7:
        result = TESObjectREFR_GetWorldSpace(v5); /*0x646f4a*/
        break; /*0x646f4a*/
      default:
        return result;
    }
  }
  return result; /*0x646f0b*/
}
