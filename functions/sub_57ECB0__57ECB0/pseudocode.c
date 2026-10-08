Ni2DBuffer *__usercall sub_57ECB0@<eax>(_DWORD **this@<ecx>, double a2@<st2>, double a3@<st1>)
{
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v6; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD, int *, NiNode *))(**(this + 0x18) + 0x88))( /*0x57ecd1*/
    *(this + 0x18),
    &v6,
    reference->inventoryPC);
  if ( v6 ) /*0x57ecd9*/
  {
    v4 = (void (__thiscall ***)(_DWORD, int))v6; /*0x57ecdc*/
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x57ece2*/
      (**v4)(v4, 1); /*0x57ecf8*/
  }
  *((_WORD *)*(this + 0x18) + 0xC) |= 1u; /*0x57ecfe*/
  return ObservedActorRef_InitDefaultIdleVariants((TESObjectREFR *)reference, a2, a3, 0); /*0x57ed10*/
}
