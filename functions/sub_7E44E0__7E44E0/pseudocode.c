// Verified (Oblivion): checks NiNode property ID 4, removes a non-ParticleShaderProperty occupant, allocates a 0x128-byte ParticleShaderProperty when needed, attaches it, and initializes it for the geometry.
char __thiscall NiD3DShader_EnsureParticleShaderProperty(NiD3DShader *this, NiObjectNET *targetGeometry)
{
  NiObjectNET *v3; // edi
  NiProperty *NiPropertyByID; // eax
  NiObjectNET *v5; // esi
  ParticleShaderProperty *v6; // eax
  ParticleShaderProperty *v7; // esi

  v3 = targetGeometry; /*0x7e4506*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)targetGeometry, 4); /*0x7e450e*/
  if ( NiPropertyByID ) /*0x7e4515*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xE ) /*0x7e452c*/
      return sub_77AA60(this, v3); /*0x7e452c*/
    sub_708560((int ***)v3, (volatile LONG **)&targetGeometry, 4); /*0x7e453b*/
    if ( targetGeometry ) /*0x7e4546*/
    {
      v5 = targetGeometry; /*0x7e4548*/
      if ( !InterlockedDecrement((volatile LONG *)&targetGeometry->members) ) /*0x7e454e*/
        (*(void (__thiscall **)(NiObjectNET *, int))v5->vtbl)(v5, 1); /*0x7e4564*/
    }
  }
  v6 = (ParticleShaderProperty *)FormHeapAlloc(0x128u);// Verified (Oblivion): missing property-ID-4 shader property is allocated with sizeof(ParticleShaderProperty)=0x128, constructed, attached to the NiGeometry, then initialized through its SetupGeometry virtual. /*0x7e456b*/
  if ( v6 ) /*0x7e4581*/
    v7 = ParticleShaderProperty::ParticleShaderProperty(v6); /*0x7e458a*/
  else
    v7 = 0; /*0x7e458e*/
  sub_405680((NiNode *)v3, &v7->super); /*0x7e459b*/
  if ( !(*((unsigned __int8 (__thiscall **)(ParticleShaderProperty *, NiObjectNET *))v7->super.vtbl + 0x16))(v7, v3) )// Verified (Oblivion): after attaching a new ParticleShaderProperty to the node, NiD3DShader_EnsureParticleShaderProperty calls its SetupGeometry virtual with the target geometry; this establishes ParticleShaderProperty::geometry_120. /*0x7e45a8*/
  {
    sub_4A1220((int ***)v3, (int)v7); /*0x7e45b1*/
    return 0; /*0x7e45ca*/
  }
  return sub_77AA60(this, v3); /*0x7e45b8*/
}
