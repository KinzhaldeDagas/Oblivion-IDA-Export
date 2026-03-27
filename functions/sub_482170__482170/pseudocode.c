TESObjectREFRMembr *__thiscall sub_482170(_DWORD *this, int a2, int a3, TESObjectCELL *a4)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ecx

  if ( !a4 )
    return (TESObjectREFRMembr *)(*(TESObjectCELL *(__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a2, a3);
  v4 = (_DWORD *)(*(this + 4) + 8 * (a3 + a2 * *(this + 3)));
  v5 = (_DWORD *)v4[1];
  *v4 = a4;
  return sub_49A000(v5, a4);
}
