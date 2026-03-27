bool __thiscall TESActorBase_IsAutoCalc(int this)
{
  return *(_BYTE *)(this + 4) == 0x23 && (*(_DWORD *)(this + 0x28) & 0x10) != 0;
}
