int __thiscall TESObjectREF_GetFaceGenNiNodeSkinned(TESChildCELL *this, int a2)
{
  if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) /*0x4ddff1*/
    && (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x9F))(this) )
  {
    return NiObjectNET_LookupObjectByName(*((_DWORD **)this + 0xF), "BSFaceGenNiNodeSkinned");// ODismemberment: FaceGen skinned node is resolved by name under actor root; runtime decap can app-cull this node without NIF edits. /*0x4de000*/
  }
  else
  {
    return 0; /*0x4ddfe1*/
  }
}
