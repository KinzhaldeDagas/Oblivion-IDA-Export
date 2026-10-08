// Leaf-property clone helper. Allocates 0xB0, copies leaf LOD/STSP/STLSP references through virtual accessors, then preserves texture/ref +0x9C.
//
// [2026-10-03 copy audit] Verified virtual+0x90 is no-argument CreateCopy (ret0), distinct from CreateClone+18. Constructs a new 0xB0 native leaf retaining STSP/STLSP and Level, then SetTexture(+7C) retains source texture+9C. It does not call CopyMembers or register a NiCloningProcess mapping. Fallout named CreateCopy828CDF20 confirms these roles. Plugin overrides +90 to preserve the type8 adapter and adds a null allocation guard before texture transfer.
OB_SpeedTreeLeafShaderProperty_010201A0 *__thiscall OB_SpeedTreeLeafShaderProperty_CreateCopy_010201A0(
        OB_SpeedTreeLeafShaderProperty_010201A0 *this)
{
  OB_SpeedTreeLeafShaderProperty_010201A0 *v2; // edi
  unsigned __int16 v3; // ax
  OB_SpeedTreeLeafShaderProperty_010201A0 *v4; // edi
  OB_STSPData_010201A0 *v6; // [esp-8h] [ebp-24h]
  OB_STLSPData_010201A0 *v7; // [esp-4h] [ebp-20h]

  v2 = (OB_SpeedTreeLeafShaderProperty_010201A0 *)FormHeapAlloc(0xB0u); /*0x7f1d0f*/
  if ( v2 ) /*0x7f1d22*/
  {
    v7 = (OB_STLSPData_010201A0 *)(*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0x9C))(this); /*0x7f1d30*/
    v6 = (OB_STSPData_010201A0 *)(*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 /*0x7f1d3a*/
                                                                                                  + 0x68))(this);
    v3 = (*(int (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0x98))(this); /*0x7f1d45*/
    v4 = SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(v2, v3, v6, v7); /*0x7f1d4f*/
  }
  else
  {
    v4 = 0; /*0x7f1d53*/
  }
  (*(void (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *, int))(*(_DWORD *)v4->gap0 + 0x7C))( /*0x7f1d6b*/
    v4,
    this->textureRef);
  return v4; /*0x7f1d6f*/
}
