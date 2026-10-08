// Shared Lighting30/Hair SetupGeometry wrapper. Calls the native PP-lighting parser at 0x7DA220, then removes NiProperty ID 7. This proves both exact classes inherit Refract/RefractF name decoding.
bool __thiscall Lighting30HairShaderProperty_SetupGeometry(BSShaderProperty *this, NiAVObject *geometry)
{
  bool v2; // bl
  NiProperty *NiPropertyByID; // eax

  v2 = BSShaderPPLightingProperty_SetupGeometry(this, geometry); /*0x864410*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)geometry, 7); /*0x864412*/
  if ( NiPropertyByID ) /*0x864419*/
    sub_4A1220((int ***)geometry, (int)NiPropertyByID); /*0x86441e*/
  return v2; /*0x864423*/
}
