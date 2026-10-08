void __thiscall sub_642880(float *this, Actor *a2, float a3)
{
  if ( sub_572EA0(2) <= *(float *)&SrcStr /*0x6428c0*/
    && !a2->vtbl->super.super.GetKnockedState((TESObjectREFR *)a2)
    && (Actor::GetDeadState(a2) != 4 || !Actor_IsGhost(a2)) )
  {
    ((void (__thiscall *)(float *, Actor *))loc_6411E0)(this, a2); /*0x6428cc*/
    BSSimpleList_Clear(&stru_B3B94C); /*0x6428d6*/
    *(this + 0x81) = MEMORY[0xB378A8] + a3; /*0x6428e5*/
  }
}
