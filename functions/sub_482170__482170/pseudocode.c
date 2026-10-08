TESObjectCELL *__thiscall sub_482170(_DWORD *this, int a2, int a3, TESObjectCELL *a4)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ecx

  if ( !a4 ) /*0x482176*/
    return (TESObjectCELL *)(*(TESObjectREFRMembr *(__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a2, a3); /*0x4821a7*/
  v4 = (_DWORD *)(*(this + 4) + 8 * (a3 + a2 * *(this + 3))); /*0x482188*/
  v5 = (_DWORD *)v4[1]; /*0x48218b*/
  *v4 = a4; /*0x48218e*/
  return sub_49A000(v5, a4); /*0x482195*/
}
