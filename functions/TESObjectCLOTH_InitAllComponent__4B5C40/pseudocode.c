void __thiscall TESObjectCLOTH_InitAllComponent(TESForm *this)
{
  j_TESForm_InitializeComponents(this);
  *((_DWORD *)this + 0x12) = 3;
}
