void __stdcall TESDataHandler_PlaceObjectRef_::CreateRef(int a1, int a2, int a3, int a4, int a5, int a6)
{
  TESChildCELL *v6; // eax

  v6 = (TESChildCELL *)FormHeapAlloc(0x58u);
  if ( v6 )
  {
    TESObjectREFR_constr(v6);
    JUMPOUT(0x44A90E);
  }
  JUMPOUT(0x44A90C);
}
