// Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
void __thiscall Shared_NoOpVirtual_60D0A0(void *this)
{
  ; /*0x60d0a0*/
}
