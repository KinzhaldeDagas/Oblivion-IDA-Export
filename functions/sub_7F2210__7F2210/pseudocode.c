// Branch shader-property stream builder. Emits position, normal, and 0x10-stride STSP streams; rejects shapes whose vertex count exceeds STSP count.
unsigned __int16 *__thiscall OB_SpeedTreeBranchShaderProperty_BuildInputStreams_010201A0(
        OB_SpeedTreeBranchShaderProperty_010201A0 *this,
        int geometryData)
{
  unsigned __int16 v3; // di
  int v4; // edi
  NiObject *v5; // eax
  unsigned __int16 *v6; // esi
  void *v7; // eax

  if ( !geometryData ) /*0x7f223c*/
    return 0; /*0x7f223c*/
  v3 = *(_WORD *)(*(_DWORD *)(geometryData + 0xB4) + 8); /*0x7f2248*/
  if ( v3 > (*(unsigned __int16 (__thiscall **)(OB_SpeedTreeBranchShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 /*0x7f225a*/
                                                                                            + 0xA8))(this) )
    return 0; /*0x7f233a*/
  v4 = *(unsigned __int16 *)(*(_DWORD *)(geometryData + 0xB4) + 8); /*0x7f226c*/
  v5 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x7f226f*/
  if ( v5 ) /*0x7f2285*/
    v6 = (unsigned __int16 *)sub_7E3AE0(v5, v4, 3); /*0x7f2291*/
  else
    v6 = 0; /*0x7f2295*/
  OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v6, 3u); /*0x7f22a3*/
  OB_NiAdditionalGeometryData_SetDataBlock_010201A0( /*0x7f22c0*/
    (int)v6,
    v4,
    0,
    *(void **)(*(_DWORD *)&this->gap0[0xD4] + 0xC),
    (_DWORD *)(0xC * v4),
    0);                                         // 2026-05-30 SpeedTreeOBSE: branch shader input stream 0 uses tangent-space owner +0xD4 field +0x0C as positions.
  OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v6, 0, 0, 0, 3, v4, 0xC, 0xC); /*0x7f22d4*/
  OB_NiAdditionalGeometryData_SetDataBlock_010201A0( /*0x7f22ea*/
    (int)v6,
    v4,
    1u,
    *(void **)(*(_DWORD *)&this->gap0[0xD4] + 0x10),
    (_DWORD *)(0xC * v4),
    0);                                         // 2026-05-30 SpeedTreeOBSE: branch shader input stream 1 uses tangent-space owner +0xD4 field +0x10 as normals; texture arrays are separate PPLighting state.
  OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v6, 1u, 1u, 0, 3, v4, 0xC, 0xC); /*0x7f22fe*/
  v7 = (void *)(*(int (__thiscall **)(OB_SpeedTreeBranchShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0xA4))(this); /*0x7f2316*/
  OB_NiAdditionalGeometryData_SetDataBlock_010201A0((int)v6, v4, 2u, v7, (_DWORD *)(0x10 * v4), 0); /*0x7f231d*/
  OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v6, 2u, 2u, 0, 4, v4, 0x10, 0x10); /*0x7f2331*/
  return v6; /*0x7f233c*/
}
