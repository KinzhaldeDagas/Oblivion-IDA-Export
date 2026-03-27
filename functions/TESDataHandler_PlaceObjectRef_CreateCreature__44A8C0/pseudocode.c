void __stdcall TESDataHandler_PlaceObjectRef_::CreateCreature(int a1, int a2, int a3, int a4, int a5, int a6)
{
  TESObjectREFR *v6; // eax

  v6 = (TESObjectREFR *)FormHeapAlloc(0x108u);
  if ( v6 )
  {
    Creature_constr(v6);
    JUMPOUT(0x44A90E);
  }
  JUMPOUT(0x44A90C);
}
