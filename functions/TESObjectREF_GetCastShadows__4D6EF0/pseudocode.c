bool __thiscall TESObjectREF_GetCastShadows(TESChildCELL *this)
{
  return (*(_DWORD *)(this + 2) & 0x200) != 0;
}
