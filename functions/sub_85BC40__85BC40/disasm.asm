0x85BC40: mov     eax, [esp+cloneProcess]; Pass205: WaterShaderProperty copy/clone helper copies full water pass-data block +0x6C..+0x84.
0x85BC44: push    esi
0x85BC45: push    edi
0x85BC46: mov     edi, [esp+8+clone]
0x85BC4A: push    eax; cloneProcess
0x85BC4B: push    edi; clone
0x85BC4C: mov     esi, ecx
0x85BC4E: call    BSShaderProperty_CopyCloneMembers; [Verified] Shared BSShaderProperty clone-field copier: delegates to the common property copier, copies source +0x1C and +0x20 into the clone, and clears clone +0x24. Directly used by BSShaderProperty_CreateClone and the inherited path used by GeometryDecalShaderProperty. It does not touch BSShaderLightingProperty's +0x80 DECAL_DATA* list.
0x85BC53: mov     ecx, [esi+6Ch]
0x85BC56: mov     [edi+6Ch], ecx
0x85BC59: movzx   edx, byte ptr [esi+70h]
0x85BC5D: mov     [edi+70h], dl
0x85BC60: mov     al, [esi+71h]
0x85BC63: mov     [edi+71h], al
0x85BC66: movzx   ecx, byte ptr [esi+72h]
0x85BC6A: mov     [edi+72h], cl
0x85BC6D: mov     edx, [esi+74h]
0x85BC70: mov     [edi+74h], edx
0x85BC73: mov     eax, [esi+78h]
0x85BC76: mov     [edi+78h], eax
0x85BC79: fld     dword ptr [esi+7Ch]
0x85BC7C: fstp    dword ptr [edi+7Ch]
0x85BC7F: fld     dword ptr [esi+80h]
0x85BC85: fstp    dword ptr [edi+80h]
0x85BC8B: movzx   ecx, byte ptr [esi+85h]
0x85BC92: mov     [edi+85h], cl
0x85BC98: movzx   edx, byte ptr [esi+84h]
0x85BC9F: mov     [edi+84h], dl
0x85BCA5: pop     edi
0x85BCA6: pop     esi
0x85BCA7: retn    8
