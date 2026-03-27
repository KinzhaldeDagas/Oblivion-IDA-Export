void __userpurge TESDataHandler_PlaceObjectRef_::SwitchRefType(
        void *a1@<esi>,
        TESObjectCELL *a2@<ebx>,
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
  if ( *((_BYTE *)a1 + 4) == 0x23 )
  {
    TESDataHandler_PlaceObjectRef_::CreateCharacter(
      a2,
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
  else if ( *((_BYTE *)a1 + 4) == 0x24 )
  {
    TESDataHandler_PlaceObjectRef_::CreateCreature(a7, a8, a9, a10, a11, a12);
  }
  else
  {
    TESDataHandler_PlaceObjectRef_::CreateRef(a7, a8, a9, a10, a11, a12);
  }
}
