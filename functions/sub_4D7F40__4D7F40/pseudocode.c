bool __thiscall sub_4D7F40(int *this)
{
  int v2; // ecx
  TESObjectCELL *v4; // eax
  TESWorldSpace *WorldSpace; // eax

  v2 = *(this + 0x10); /*0x4d7f42*/
  if ( v2 ) /*0x4d7f4a*/
    return sub_4CA6F0(v2); /*0x4d7f4d*/
  v4 = (TESObjectCELL *)(*(int (__thiscall **)(int *))*(this + 6))(this + 6); /*0x4d7f59*/
  return v4 && (WorldSpace = TESObjectCELL_GetWorldSpace(v4)) != 0 && sub_4EF150(WorldSpace); /*0x4d7f4c*/
}
