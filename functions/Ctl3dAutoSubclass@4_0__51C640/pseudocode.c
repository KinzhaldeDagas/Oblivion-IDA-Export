BOOL __stdcall Ctl3dAutoSubclass(HINSTANCE a1)
{
  TESBoundObject *v1; // ecx

  return (BOOL)TESBoundObject_Create3DImpl(v1, (TESObjectREFR *)a1, 0); /*0x51c64c*/
}
