void __thiscall HairShaderProperty::~HairShaderProperty(HairShaderProperty *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi

  *(_DWORD *)this = &HairShaderProperty::`vftable';
  v2 = *((_DWORD *)this + 0x5A);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x5A) = 0;
  }
  v4 = *((_DWORD *)this + 0x3C);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x3C) = 0;
  }
  v5 = *((_DWORD *)this + 0x3D);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x3D) = 0;
  }
  *((float *)this + 0x3E) = Vector3_InitValue_;
  *((float *)this + 0x3F) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x40) = dword_B3F9B0;
  *((float *)this + 0x47) = 0.0;
  *((float *)this + 0x41) = Vector3_InitValue_;
  *((float *)this + 0x42) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x43) = dword_B3F9B0;
  *((float *)this + 0x48) = 0.0;
  *((float *)this + 0x44) = Vector3_InitValue_;
  *((float *)this + 0x45) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x46) = dword_B3F9B0;
  *((float *)this + 0x49) = 0.0;
  v6 = *((_DWORD *)this + 0x5B);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v7 = *((_DWORD *)this + 0x5A);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *((_DWORD *)this + 0x3D);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *((_DWORD *)this + 0x3C);
  if ( v9 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  BSShaderPPLightingProperty::~BSShaderPPLightingProperty(this);
}
