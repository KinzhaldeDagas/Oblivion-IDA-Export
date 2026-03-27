bool __thiscall sub_5E12E0(TESObjectREFR *this)
{
  TESObjectREFR *v2; // eax
  TESWorldSpace *WorldSpace; // edi
  TESObjectREFR *v4; // eax
  TESObjectCELL *ParentCell; // edi
  bool result; // al

  if ( !((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].IsMobileObject)(this)
    || !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)) )
  {
    return 0;
  }
  v2 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16));
  WorldSpace = TESObjectREFR_GetWorldSpace(v2);
  result = 1;
  if ( WorldSpace == TESObjectREFR_GetWorldSpace(this) )
  {
    v4 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16));
    ParentCell = TESObjectREFR_GetParentCell(v4);
    if ( ParentCell == TESObjectREFR_GetParentCell(this) )
      return 0;
  }
  return result;
}
