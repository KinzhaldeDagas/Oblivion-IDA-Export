0x7F2030: mov     eax, [esp+stspData]; Branch shader-property ctor. Fronds.log lines with propertyVtable=00A92A94/propertyTypeId=7 map to this class: PPLighting base plus STSPData ref, then branch vtable.
0x7F2034: push    esi
0x7F2035: push    eax
0x7F2036: mov     esi, ecx
0x7F2038: call    OB_SpeedTreeShaderPPLightingProperty_ctor_010201A0; SpeedTreeShaderPPLightingProperty ctor used by BranchShaderProperty: constructs BSShaderPPLightingProperty base, zeroes +0xF0, then AddRefs incoming STSPData at +0xF0.
0x7F203D: mov     dword ptr [esi], offset ??_7SpeedTreeBranchShaderProperty@@6B@; const SpeedTreeBranchShaderProperty::`vftable'
0x7F2043: mov     eax, esi
0x7F2045: pop     esi
0x7F2046: retn    4
