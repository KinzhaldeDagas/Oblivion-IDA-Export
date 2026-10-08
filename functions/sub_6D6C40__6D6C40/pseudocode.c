bool __thiscall sub_6D6C40(_DWORD *this, int a2)
{
  return j_NiSingleInterpController_IsEqual(this, a2) /*0x6d6c72*/
      && *(_DWORD *)(a2 + 0x40) == *(this + 0x10)
      && *(_BYTE *)(a2 + 0x48) == *((_BYTE *)this + 0x48)
      && *(_DWORD *)(a2 + 0x4C) == *(this + 0x13)
      && *(_DWORD *)(a2 + 0x50) == *(this + 0x14);
}
