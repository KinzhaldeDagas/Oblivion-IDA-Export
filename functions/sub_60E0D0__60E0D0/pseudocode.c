// Linker-shared trivial setter: writes one UInt32/pointer-sized value at object+0x40 and returns it. Call-site semantics differ. ClassMenu uses it to store TESClass specialization; BSPlayerDistanceCheckController and HUD UI code use the same folded body for their own +0x40 field.
UInt32 __thiscall Shared_SetDwordAtOffset40(void *this, UInt32 value)
{
  *((_DWORD *)this + 0x10) = value; /*0x60e0d4*/
  return value; /*0x60e0d7*/
}
