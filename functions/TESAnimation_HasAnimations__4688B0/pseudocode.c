bool __thiscall TESAnimation_HasAnimations(_DWORD *this)
{
  return *(this + 2) || *(this + 1);
}
