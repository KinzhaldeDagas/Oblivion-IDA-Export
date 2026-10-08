// [Verified] BSShaderPPLightingProperty vtable slot +0x18 (slot 6) CreateClone. Allocates/constructs 0xF0 bytes, then delegates to BSShaderPPLightingProperty_CopyCloneMembers. The derived copier calls the base copier and copies the PP-lighting fields, but neither it nor the base copier copies the inherited DECAL_DATA* list at +0x80. Whether a later path rebuilds that list is Unknown.
BSShaderPPLightingProperty *__thiscall BSShaderPPLightingProperty_CreateClone(
        BSShaderPPLightingProperty *this,
        void *cloneProcess)
{
  BSShaderPPLightingProperty *v3; // eax
  BSShaderPPLightingProperty *v4; // esi

  v3 = (BSShaderPPLightingProperty *)FormHeapAlloc(0xF0u); /*0x7d983a*/
  v4 = 0; /*0x7d9846*/
  if ( v3 ) /*0x7d984e*/
    v4 = BSShaderPPLightingProperty::BSShaderPPLightingProperty(v3); /*0x7d9857*/
  BSShaderPPLightingProperty_CopyCloneMembers(this, v4, cloneProcess); /*0x7d9869*/
  return v4; /*0x7d9870*/
}
