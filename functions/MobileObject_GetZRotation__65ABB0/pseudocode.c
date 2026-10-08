// Actor/MobileObject vtable +0x1E0 base implementation. Returns the single-precision reference rotation Z field at +0x28; the prior double return type was an x87 decompiler artifact.
float __thiscall MobileObject_GetZRotation(MobileObject *this)
{
  return this->super.rot.z; /*0x65abb3*/
}
