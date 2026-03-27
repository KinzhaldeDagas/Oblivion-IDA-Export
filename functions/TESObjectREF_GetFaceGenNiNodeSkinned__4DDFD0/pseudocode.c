int __thiscall TESObjectREF_GetFaceGenNiNodeSkinned(TESChildCELL *this, int a2)
{
  if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this)
    && (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x9F))(this) )
  {
    return NiObjectNET_LookupObjectByName(*((_DWORD **)this + 0xF), "BSFaceGenNiNodeSkinned");
  }
  else
  {
    return 0;
  }
}
