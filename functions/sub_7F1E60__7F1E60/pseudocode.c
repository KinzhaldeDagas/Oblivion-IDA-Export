// Leaf-property virtual clone/copy helper. Allocates 0xB0, copies leaf LOD/STSP/STLSP references, and forwards base property state.
//
// [2026-10-03 clone audit] Verified virtual+0x18 is CreateClone, not a flags-based copy. One stack NiCloningProcess pointer, ret4, returned newly constructed 0xB0 leaf property. GetLevel(+98), STSP(+68), STLSP(+9C) feed native ctor7F1960, then CopyMembers7F1C30. Fallout named CreateClone828CE050 corroborates role, with platform-specific offsets. Plugin adapter must override this slot or cloning restores native type9/vtable and loses its type8 frond behavior. Its replacement checks allocation before construction, installs adapter vptr before CopyMembers, and preserves the native clone-map path.
OB_SpeedTreeLeafShaderProperty_010201A0 *__thiscall OB_SpeedTreeLeafShaderProperty_CreateClone_010201A0(
        OB_SpeedTreeLeafShaderProperty_010201A0 *this,
        void *cloningProcess)
{
  OB_SpeedTreeLeafShaderProperty_010201A0 *v3; // edi
  unsigned __int16 v4; // ax
  OB_SpeedTreeLeafShaderProperty_010201A0 *v5; // edi
  OB_STSPData_010201A0 *v7; // [esp-8h] [ebp-24h]
  OB_STLSPData_010201A0 *v8; // [esp-4h] [ebp-20h]

  v3 = (OB_SpeedTreeLeafShaderProperty_010201A0 *)FormHeapAlloc(0xB0u); /*0x7f1e8f*/
  if ( v3 ) /*0x7f1ea2*/
  {
    v8 = (OB_STLSPData_010201A0 *)(*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0x9C))(this); /*0x7f1eb0*/
    v7 = (OB_STSPData_010201A0 *)(*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 /*0x7f1eba*/
                                                                                                  + 0x68))(this);
    v4 = (*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0x98))(this); /*0x7f1ec5*/
    v5 = SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(v3, v4, v7, v8); /*0x7f1ecf*/
  }
  else
  {
    v5 = 0; /*0x7f1ed3*/
  }
  OB_SpeedTreeLeafShaderProperty_CopyMembers_010201A0(this, v5, cloningProcess); /*0x7f1ee5*/
  return v5; /*0x7f1eec*/
}
