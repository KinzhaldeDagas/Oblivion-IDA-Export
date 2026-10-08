// TESActorBase_SetAVfBase converts the float value through Double_To_SInt32, then delegates to vtbl +0x134 SetAViBase. Player_Actor_SetAVfBase reaches this through baseform vtbl +0x130; because it funnels into integer byte-backed storage, a future AVU hook can share the same storage guard if a report targets float SetAV paths.
int __thiscall TESActorBase_SetAVfBase(int *this, int a2, float a3)
{
  int v4; // edi
  int v5; // eax

  v4 = *this; /*0x51e7b8*/
  v5 = Double_To_SInt32(a3); /*0x51e7ba*/
  return (*(int (__thiscall **)(int *, int, int))(v4 + 0x134))(this, a2, v5); /*0x51e7d1*/
}
