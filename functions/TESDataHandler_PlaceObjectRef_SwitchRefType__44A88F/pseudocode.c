// New-ref path chooses allocation by base form type: type 0x23 Character -> Character_constr, type 0x24 Creature -> Creature_constr, otherwise TESObjectREFR_constr.
void __userpurge TESDataHandler_PlaceObjectRef_::SwitchRefType(
        TESForm *a1@<esi>,
        TESObjectCELL *CellAtCellCoord@<ebx>,
        TESWorldSpace *a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  if ( a1->member.type == kFormType_NPC ) /*0x44a896*/
  {
    TESDataHandler_PlaceObjectRef_::CreateCharacter( /*0x44a896*/
      CellAtCellCoord,
      a3,
      a1,
      a4,
      a5,
      a6,
      a7,
      (TESForm *)a8,
      (float *)a9,
      (int *)a10,
      a11,
      a12);
  }
  else if ( a1->member.type == kFormType_Creature ) /*0x44a89b*/
  {
    TESDataHandler_PlaceObjectRef_::CreateCreature(a7, a8, a9, a10, a11, a12); /*0x44a89b*/
  }
  else
  {
    TESDataHandler_PlaceObjectRef_::CreateRef(a7, a8, a9, a10, a11, a12); /*0x44a89c*/
  }
}
