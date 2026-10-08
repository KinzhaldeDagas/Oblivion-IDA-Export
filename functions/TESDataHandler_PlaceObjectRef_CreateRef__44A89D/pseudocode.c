// PlaceObjectRef generic-ref allocation branch: non-Character/non-Creature base forms allocate 0x58 bytes and call TESObjectREFR_constr.
void __stdcall TESDataHandler_PlaceObjectRef_::CreateRef(int a1, int a2, int a3, int a4, int a5, int a6)
{
  TESChildCELL *v6; // eax

  v6 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x44a89f*/
  if ( v6 ) /*0x44a8b5*/
  {
    TESObjectREFR_constr(v6); /*0x44a8b9*/
    JUMPOUT(0x44A90E); /*0x44a90e*/
  }
  JUMPOUT(0x44A90C); /*0x44a90c*/
}
