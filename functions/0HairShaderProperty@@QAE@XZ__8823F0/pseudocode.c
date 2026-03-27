HairShaderProperty *__thiscall HairShaderProperty::HairShaderProperty(HairShaderProperty *this)
{
  double v2; // st7
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // edi
  int v6; // edi

  BSShaderPPLightingProperty::BSShaderPPLightingProperty(this);
  *(_DWORD *)this = &HairShaderProperty::`vftable';
  *((_DWORD *)this + 0x3C) = 0;
  *((_DWORD *)this + 0x3D) = 0;
  v2 = 0.0;
  *((float *)this + 0x4A) = 0.0;
  *((float *)this + 0x4B) = 0.0;
  *((float *)this + 0x4C) = 0.0;
  *((float *)this + 0x4D) = 0.0;
  *((float *)this + 0x4E) = 0.0;
  *((float *)this + 0x4F) = 0.0;
  *((float *)this + 0x50) = 0.0;
  *((float *)this + 0x51) = 0.0;
  *((float *)this + 0x52) = 0.0;
  *((float *)this + 0x53) = 0.0;
  *((float *)this + 0x54) = 0.0;
  *((float *)this + 0x55) = 0.0;
  *((float *)this + 0x56) = 0.0;
  *((float *)this + 0x57) = 0.0;
  *((float *)this + 0x58) = 0.0;
  *((float *)this + 0x59) = 0.0;
  *((_DWORD *)this + 0x5A) = 0;
  *((_DWORD *)this + 0x5B) = 0;
  v3 = *((_DWORD *)this + 0x5A);
  v4 = InterlockedDecrement;
  if ( v3 )
  {
    if ( !v4((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    v2 = 0.0;
    *((_DWORD *)this + 0x5A) = 0;
  }
  v5 = *((_DWORD *)this + 0x3C);
  if ( v5 )
  {
    if ( !v4((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    v2 = 0.0;
    *((_DWORD *)this + 0x3C) = 0;
  }
  v6 = *((_DWORD *)this + 0x3D);
  if ( v6 )
  {
    if ( !v4((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    v2 = 0.0;
    *((_DWORD *)this + 0x3D) = 0;
  }
  *((float *)this + 0x3E) = Vector3_InitValue_;
  *((float *)this + 0x3F) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x40) = dword_B3F9B0;
  *((float *)this + 0x47) = v2;
  *((float *)this + 0x41) = Vector3_InitValue_;
  *((float *)this + 0x42) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x43) = dword_B3F9B0;
  *((float *)this + 0x48) = v2;
  *((float *)this + 0x44) = Vector3_InitValue_;
  *((float *)this + 0x45) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x46) = dword_B3F9B0;
  *((float *)this + 0x49) = v2;
  return this;
}
