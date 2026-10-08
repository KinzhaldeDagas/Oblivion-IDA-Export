int __thiscall TESObjectREF_GetFaceGenNiNodeBiped(TESChildCELL *this, int a2)
{
  if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) /*0x4ddfb1*/
    && (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x9F))(this) )
  {
    return NiObjectNET_LookupObjectByName(*((_DWORD **)this + 0xF), "BSFaceGenNiNodeBiped");// ODismemberment: FaceGen biped node is resolved by name under actor root; runtime decap can app-cull this node without a body-part partition. /*0x4ddfc0*/
  }
  else
  {
    return 0; /*0x4ddfa1*/
  }
}
