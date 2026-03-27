TESWorldSpace *__thiscall sub_646F00(_DWORD *this, TESObjectREFR *a2)
{
  TESPackage *v3; // ecx
  TESWorldSpace *result; // eax
  TESObjectREFR *v5; // ecx

  v3 = (TESPackage *)*(this + 2);
  result = 0;
  if ( v3 )
  {
    switch ( *(_DWORD *)(*(_DWORD *)(4 * v3->members.procedureArrayIndex + 0xB152B0) + 4 * *(this + 1)) )
    {
      case 0:
      case 4:
      case 5:
      case 7:
        if ( !v3->members.location )
          goto LABEL_6;
        result = sub_566940(v3, (Actor *)a2);
        break;
      case 1:
      case 2:
      case 3:
      case 6:
      case 8:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x20:
        v5 = (TESObjectREFR *)*(this + 0xB);
        if ( v5 )
          goto LABEL_7;
        goto LABEL_6;
      case 0x1D:
      case 0x2C:
LABEL_6:
        v5 = a2;
LABEL_7:
        result = TESObjectREFR_GetWorldSpace(v5);
        break;
      default:
        return result;
    }
  }
  return result;
}
