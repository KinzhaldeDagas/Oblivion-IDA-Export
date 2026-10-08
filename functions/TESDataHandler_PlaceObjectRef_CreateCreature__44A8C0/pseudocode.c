// PlaceObjectRef Creature allocation branch: base form type 0x24 allocates 0x108 bytes and calls Creature_constr.
void __stdcall TESDataHandler_PlaceObjectRef_::CreateCreature(int a1, int a2, int a3, int a4, int a5, int a6)
{
  TESObjectREFR *v6; // eax

  v6 = (TESObjectREFR *)FormHeapAlloc(0x108u); /*0x44a8c5*/
  if ( v6 ) /*0x44a8db*/
  {
    Creature_constr(v6); /*0x44a8df*/
    JUMPOUT(0x44A90E); /*0x44a90e*/
  }
  JUMPOUT(0x44A90C); /*0x44a90c*/
}
