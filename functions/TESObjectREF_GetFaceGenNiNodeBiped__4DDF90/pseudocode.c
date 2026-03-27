int __thiscall TESObjectREF_GetFaceGenNiNodeBiped(TESChildCELL *this, int a2)
{
  if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this)
    && (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x9F))(this) )
  {
    return NiObjectNET_LookupObjectByName(*((_DWORD **)this + 0xF), "BSFaceGenNiNodeBiped");
  }
  else
  {
    return 0;
  }
}
