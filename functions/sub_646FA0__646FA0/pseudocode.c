double __thiscall sub_646FA0(TESPackage **this, TESObjectREFR *a2)
{
  double result; // st7
  TESPackage *v4; // ecx
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]

  result = flt_A2FFE8;
  v4 = *(this + 2);
  v5 = flt_A2FFE8;
  if ( v4 )
  {
    switch ( *(_DWORD *)(*(_DWORD *)(4 * v4->members.procedureArrayIndex + 0xB152B0) + 4 * (_DWORD)*(this + 1)) )
    {
      case 0:
        if ( !v4->members.location )
          goto LABEL_9;
        v6 = sub_5677B0(v4, result, a2, 1);
        result = v6;
        break;
      case 1:
      case 2:
      case 3:
      case 8:
      case 0xE:
      case 0xF:
        if ( !v4->members.target )
          goto LABEL_9;
        v7 = sub_5677B0(v4, result, a2, 2);
        result = v7;
        break;
      case 6:
      case 7:
      case 0xD:
      case 0x20:
        if ( v4->members.target )
          v5 = sub_5677B0(v4, result, a2, 2);
        goto LABEL_9;
      default:
LABEL_9:
        result = v5;
        break;
    }
  }
  return result;
}
