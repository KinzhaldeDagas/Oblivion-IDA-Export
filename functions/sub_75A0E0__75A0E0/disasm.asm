0x75A0E0: push    ebx
0x75A0E1: push    esi
0x75A0E2: mov     esi, [esp+8+arg_0]
0x75A0E6: push    edi
0x75A0E7: push    esi
0x75A0E8: mov     edi, ecx
0x75A0EA: call    sub_73FB80
0x75A0EF: mov     eax, ds:0B41864h
0x75A0F4: push    eax; ArgList
0x75A0F5: call    TESOutput_PrintString
0x75A0FA: movzx   ebx, word ptr [esi+0Ah]
0x75A0FE: movzx   ecx, word ptr [esi+8]
0x75A102: add     esp, 4
0x75A105: cmp     ebx, ecx
0x75A107: mov     [esp+0Ch+arg_0], eax
0x75A10B: jb      short loc_75A11B
0x75A10D: movzx   edx, word ptr [esi+0Eh]
0x75A111: add     edx, ebx
0x75A113: push    edx
0x75A114: mov     ecx, esi
0x75A116: call    NiTArray_SetSize
0x75A11B: lea     eax, [esp+0Ch+arg_0]
0x75A11F: push    eax
0x75A120: push    ebx
0x75A121: mov     ecx, esi
0x75A123: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75A128: mov     ecx, [edi+5Ch]
0x75A12B: push    ecx; int
0x75A12C: push    offset aM_pkparticlein; "m_pkParticleInfo"
0x75A131: call    TESOutput_PrintLabeledPointer
0x75A136: movzx   ebx, word ptr [esi+0Ah]
0x75A13A: movzx   edx, word ptr [esi+8]
0x75A13E: add     esp, 8
0x75A141: cmp     ebx, edx
0x75A143: mov     [esp+0Ch+arg_0], eax
0x75A147: jb      short loc_75A157
0x75A149: movzx   eax, word ptr [esi+0Eh]
0x75A14D: add     eax, ebx
0x75A14F: push    eax
0x75A150: mov     ecx, esi
0x75A152: call    NiTArray_SetSize
0x75A157: lea     ecx, [esp+0Ch+arg_0]
0x75A15B: push    ecx
0x75A15C: push    ebx
0x75A15D: mov     ecx, esi
0x75A15F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75A164: mov     edx, [edi+60h]
0x75A167: push    edx; int
0x75A168: push    offset aM_pfrotationsp; "m_pfRotationSpeeds"
0x75A16D: call    TESOutput_PrintLabeledPointer
0x75A172: movzx   ebx, word ptr [esi+0Ah]
0x75A176: mov     [esp+14h+arg_0], eax
0x75A17A: movzx   eax, word ptr [esi+8]
0x75A17E: add     esp, 8
0x75A181: cmp     ebx, eax
0x75A183: jb      short loc_75A193
0x75A185: movzx   ecx, word ptr [esi+0Eh]
0x75A189: add     ecx, ebx
0x75A18B: push    ecx
0x75A18C: mov     ecx, esi
0x75A18E: call    NiTArray_SetSize
0x75A193: lea     edx, [esp+0Ch+arg_0]
0x75A197: push    edx
0x75A198: push    ebx
0x75A199: mov     ecx, esi
0x75A19B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75A1A0: movzx   eax, word ptr [edi+64h]
0x75A1A4: push    eax; __int16
0x75A1A5: push    offset aNumaddedpartic; "NumAddedParticles"
0x75A1AA: call    TESOutput_PrintLabeledUnsignedShort
0x75A1AF: movzx   ebx, word ptr [esi+0Ah]
0x75A1B3: movzx   ecx, word ptr [esi+8]
0x75A1B7: add     esp, 8
0x75A1BA: cmp     ebx, ecx
0x75A1BC: mov     [esp+0Ch+arg_0], eax
0x75A1C0: jb      short loc_75A1D0
0x75A1C2: movzx   edx, word ptr [esi+0Eh]
0x75A1C6: add     edx, ebx
0x75A1C8: push    edx
0x75A1C9: mov     ecx, esi
0x75A1CB: call    NiTArray_SetSize
0x75A1D0: lea     eax, [esp+0Ch+arg_0]
0x75A1D4: push    eax
0x75A1D5: push    ebx
0x75A1D6: mov     ecx, esi
0x75A1D8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75A1DD: movzx   ecx, word ptr [edi+66h]
0x75A1E1: push    ecx; __int16
0x75A1E2: push    offset aAddedparticles; "AddedParticlesBase"
0x75A1E7: call    TESOutput_PrintLabeledUnsignedShort
0x75A1EC: movzx   edi, word ptr [esi+0Ah]
0x75A1F0: movzx   edx, word ptr [esi+8]
0x75A1F4: add     esp, 8
0x75A1F7: cmp     edi, edx
0x75A1F9: mov     [esp+0Ch+arg_0], eax
0x75A1FD: jb      short loc_75A20D
0x75A1FF: movzx   eax, word ptr [esi+0Eh]
0x75A203: add     eax, edi
0x75A205: push    eax
0x75A206: mov     ecx, esi
0x75A208: call    NiTArray_SetSize
0x75A20D: lea     ecx, [esp+0Ch+arg_0]
0x75A211: push    ecx
0x75A212: push    edi
0x75A213: mov     ecx, esi
0x75A215: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75A21A: pop     edi
0x75A21B: pop     esi
0x75A21C: pop     ebx
0x75A21D: retn    4
