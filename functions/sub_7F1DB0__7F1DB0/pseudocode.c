// Leaf shader-property stream builder. Emits one 0x10-stride STSP stream with four components per vertex.
//
// [2026-10-03 owned-stream correction] Verified same one-stream ABI as Fallout CreateRendererSpecificProperty 0x828CE150: virtual +6C supplies STSPData+8 and +70 supplies ushort count +C through retained property+A4. One 16-byte/4-component stream, copyData=false. The plugin no longer needs a 128-entry auxiliary property cache; native leaf fallback is layout-compatible, not a different declaration. Current adapter reads owner metadata each request and rejects invalid/overflowing spans before allocation. Native lifetime remains governed by the retained STSPData.
unsigned __int16 *__thiscall OB_SpeedTreeLeafShaderProperty_BuildInputStreams_010201A0(
        OB_SpeedTreeLeafShaderProperty_010201A0 *this,
        int geometryData)
{
  int v3; // ebx
  NiObject *v4; // eax
  unsigned __int16 *v5; // esi
  void *v6; // eax

  v3 = (*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0x70))(this); /*0x7f1ddf*/
  v4 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x7f1de1*/
  if ( v4 ) /*0x7f1df7*/
    v5 = (unsigned __int16 *)sub_7E3AE0(v4, v3, 1); /*0x7f1e03*/
  else
    v5 = 0; /*0x7f1e07*/
  OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v5, 1u); /*0x7f1e15*/
  v6 = (void *)(*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0x6C))(this); /*0x7f1e29*/
  OB_NiAdditionalGeometryData_SetDataBlock_010201A0(v5, 0, v6, 0x10 * v3, 0); /*0x7f1e30*/
  OB_NiAdditionalGeometryData_SetDataStream_010201A0(v5, 0, 0, 0, 4u, v3, 0x10u, 0x10u);// Declare the four-component 0x10-stride auxiliary stream which the Oblivion leaf program declaration consumes as BLENDINDICES v3. /*0x7f1e44*/
  return v5; /*0x7f1e4b*/
}
