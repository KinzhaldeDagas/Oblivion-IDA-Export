TESObjectCELL *__thiscall sub_646E60(TESObjectREFR **this, TESChildCELL *a2)
{
  int v3; // ecx
  TESObjectCELL *result; // eax
  TESObjectREFR *v5; // ecx

  v3 = (int)*(this + 2);
  result = 0;
  if ( v3 )
  {
    switch ( *(_DWORD *)(*(_DWORD *)(4 * *(_DWORD *)(v3 + 0x18) + 0xB152B0) + 4 * (_DWORD)*(this + 1)) )
    {
      case 0:
      case 4:
      case 5:
      case 7:
        if ( !*(_DWORD *)(v3 + 0x24) )
          goto LABEL_6;
        result = sub_566A40((char **)v3, (Actor *)a2);
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
        v5 = *(this + 0xB);
        if ( v5 )
          goto LABEL_7;
        goto LABEL_6;
      case 0x1D:
      case 0x2C:
LABEL_6:
        v5 = (TESObjectREFR *)a2;
LABEL_7:
        result = TESObjectREFR_GetParentCell(v5);
        break;
      default:
        return result;
    }
  }
  return result;
}
