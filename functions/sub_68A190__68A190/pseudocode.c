TESObjectCELL *__thiscall sub_68A190(_DWORD *this)
{
  int v1; // ecx
  TESObjectREFR *v3; // ecx

  v1 = *(this + 1);
  if ( !v1 )
    return 0;
  if ( *(_BYTE *)(v1 + 4) )
    return 0;
  v3 = *(TESObjectREFR **)v1;
  if ( !v3 )
    return 0;
  return TESObjectREFR_GetParentCell(v3);
}
