_DWORD *__usercall sub_57ECB0@<eax>(_DWORD **this@<ecx>, double a2@<st2>, double a3@<st1>)
{
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v6; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD, int *, NiNode *))(**(this + 0x18) + 0x88))(
    *(this + 0x18),
    &v6,
    TESDataHandler_g_PlayerRef->inventoryPC);
  if ( v6 )
  {
    v4 = (void (__thiscall ***)(_DWORD, int))v6;
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**v4)(v4, 1);
  }
  *((_WORD *)*(this + 0x18) + 0xC) |= 1u;
  return sub_668D00((int)TESDataHandler_g_PlayerRef, a2, a3, 0);
}
