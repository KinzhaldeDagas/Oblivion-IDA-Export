void __thiscall sub_523220(TESNPC *this, NiObjectNET **outBipedNode, NiObjectNET **outSkinnedNode)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  BSFaceGenNiNode *face0; // edi
  BSFaceGenNiNode *face1; // edi
  TESRace *race; // ecx

  v3 = InterlockedDecrement; /*0x523221*/
  face0 = this->member.face0; /*0x52322b*/
  if ( face0 ) /*0x523233*/
  {
    if ( !v3((volatile LONG *)face0 + 1) ) /*0x523239*/
      (**(void (__thiscall ***)(BSFaceGenNiNode *, int))face0)(face0, 1); /*0x52324b*/
    this->member.face0 = 0; /*0x52324d*/
  }
  face1 = this->member.face1; /*0x523257*/
  if ( face1 ) /*0x52325f*/
  {
    if ( !v3((volatile LONG *)face1 + 1) ) /*0x523265*/
      (**(void (__thiscall ***)(BSFaceGenNiNode *, int))face1)(face1, 1); /*0x523277*/
    this->member.face1 = 0; /*0x523279*/
  }
  if ( !this->member.face0 && !this->member.face1 ) /*0x52328c*/
  {
    race = this->member.form.race; /*0x523295*/
    if ( race ) /*0x52329d*/
    {
      TESRace_CreateFaceGenNodes(race, outBipedNode, outSkinnedNode, this, 1, 0); /*0x5232ae*/
      LOWORD(this->member.unk7) = this->member.form.race->unk13; /*0x5232c0*/
    }
  }
}
