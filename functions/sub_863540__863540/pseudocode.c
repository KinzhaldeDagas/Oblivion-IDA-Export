// Copies the inherited BSShaderPPLightingProperty state into the clone destination, then copies Lighting30's four floats at +0xF0..+0xFC and refcount-assigns the derived texture/object at +0x104.
void __thiscall Lighting30ShaderProperty__CopyToMembers(
        Lighting30ShaderProperty *this,
        Lighting30ShaderProperty *destination,
        int cloningProcess)
{
  int v4; // edi
  int v5; // esi

  BSShaderPPLightingProperty_CopyCloneMembers(this, destination, (void *)cloningProcess); /*0x86354f*/
  *((_DWORD *)destination + 0x3C) = *((_DWORD *)this + 0x3C); /*0x86355a*/
  *((_DWORD *)destination + 0x3D) = *((_DWORD *)this + 0x3D); /*0x863566*/
  *((_DWORD *)destination + 0x3E) = *((_DWORD *)this + 0x3E); /*0x863572*/
  *((_DWORD *)destination + 0x3F) = *((_DWORD *)this + 0x3F); /*0x86357e*/
  v4 = *((_DWORD *)destination + 0x41); /*0x863584*/
  if ( v4 != *((_DWORD *)this + 0x41) ) /*0x863590*/
  {
    if ( v4 ) /*0x863594*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x86359a*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8635b0*/
    }
    v5 = *((_DWORD *)this + 0x41); /*0x8635b2*/
    *((_DWORD *)destination + 0x41) = v5; /*0x8635ba*/
    if ( v5 ) /*0x8635c0*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x8635c6*/
  }
}
