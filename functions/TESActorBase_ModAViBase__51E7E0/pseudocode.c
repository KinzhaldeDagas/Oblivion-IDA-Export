// TESActorBase_ModAViBase reads current base AV via vtbl +0x128, adds the signed delta, then calls vtbl +0x134 SetAViBase. AVU clamps the delta so player skill/attribute bases cannot underflow below 0 or overflow past the safe cap.
int __thiscall TESActorBase_ModAViBase(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  v4 = *this; /*0x51e7e9*/
  v5 = (*(int (__thiscall **)(int *, int))(*this + 0x128))(this, a2); /*0x51e7f2*/
  return (*(int (__thiscall **)(int *, int, int))(v4 + 0x134))(this, a2, a3 + v5); /*0x51e804*/
}
