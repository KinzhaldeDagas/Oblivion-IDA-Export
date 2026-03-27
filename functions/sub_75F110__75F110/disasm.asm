0x75F110: push    ebx
0x75F111: push    esi
0x75F112: mov     esi, [esp+8+a2]
0x75F116: push    edi
0x75F117: push    esi; a2
0x75F118: mov     edi, ecx
0x75F11A: call    sub_7009A0
0x75F11F: mov     eax, ds:0B41ECCh
0x75F124: push    eax; ArgList
0x75F125: call    TESOutput_PrintString
0x75F12A: movzx   ebx, word ptr [esi+0Ah]
0x75F12E: movzx   ecx, word ptr [esi+8]
0x75F132: add     esp, 4
0x75F135: cmp     ebx, ecx
0x75F137: mov     [esp+0Ch+a2], eax
0x75F13B: jb      short loc_75F14B
0x75F13D: movzx   edx, word ptr [esi+0Eh]
0x75F141: add     edx, ebx
0x75F143: push    edx
0x75F144: mov     ecx, esi
0x75F146: call    NiTArray_SetSize
0x75F14B: lea     eax, [esp+0Ch+a2]
0x75F14F: push    eax
0x75F150: push    ebx
0x75F151: mov     ecx, esi
0x75F153: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F158: fld     dword ptr [edi+8]
0x75F15B: push    ecx
0x75F15C: fstp    [esp+10h+var_10]; float
0x75F15F: push    offset aBounce; "Bounce"
0x75F164: call    TESOutput_PrintLabeledFloat
0x75F169: movzx   ebx, word ptr [esi+0Ah]
0x75F16D: movzx   ecx, word ptr [esi+8]
0x75F171: add     esp, 8
0x75F174: cmp     ebx, ecx
0x75F176: mov     [esp+0Ch+a2], eax
0x75F17A: jb      short loc_75F18A
0x75F17C: movzx   edx, word ptr [esi+0Eh]
0x75F180: add     edx, ebx
0x75F182: push    edx
0x75F183: mov     ecx, esi
0x75F185: call    NiTArray_SetSize
0x75F18A: lea     eax, [esp+0Ch+a2]
0x75F18E: push    eax
0x75F18F: push    ebx
0x75F190: mov     ecx, esi
0x75F192: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F197: movzx   ecx, byte ptr [edi+0Ch]
0x75F19B: push    ecx; char
0x75F19C: push    offset aSpawnOnCollide; "Spawn on Collide"
0x75F1A1: call    TESOutput_PrintLabeledBool
0x75F1A6: movzx   ebx, word ptr [esi+0Ah]
0x75F1AA: movzx   edx, word ptr [esi+8]
0x75F1AE: add     esp, 8
0x75F1B1: cmp     ebx, edx
0x75F1B3: mov     [esp+0Ch+a2], eax
0x75F1B7: jb      short loc_75F1C7
0x75F1B9: movzx   eax, word ptr [esi+0Eh]
0x75F1BD: add     eax, ebx
0x75F1BF: push    eax
0x75F1C0: mov     ecx, esi
0x75F1C2: call    NiTArray_SetSize
0x75F1C7: lea     ecx, [esp+0Ch+a2]
0x75F1CB: push    ecx
0x75F1CC: push    ebx
0x75F1CD: mov     ecx, esi
0x75F1CF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F1D4: movzx   edx, byte ptr [edi+0Dh]
0x75F1D8: push    edx; char
0x75F1D9: push    offset aDieOnCollide; "Die on Collide"
0x75F1DE: call    TESOutput_PrintLabeledBool
0x75F1E3: movzx   ebx, word ptr [esi+0Ah]
0x75F1E7: mov     [esp+14h+a2], eax
0x75F1EB: movzx   eax, word ptr [esi+8]
0x75F1EF: add     esp, 8
0x75F1F2: cmp     ebx, eax
0x75F1F4: jb      short loc_75F204
0x75F1F6: movzx   ecx, word ptr [esi+0Eh]
0x75F1FA: add     ecx, ebx
0x75F1FC: push    ecx
0x75F1FD: mov     ecx, esi
0x75F1FF: call    NiTArray_SetSize
0x75F204: lea     edx, [esp+0Ch+a2]
0x75F208: push    edx
0x75F209: push    ebx
0x75F20A: mov     ecx, esi
0x75F20C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F211: mov     eax, [edi+10h]
0x75F214: test    eax, eax
0x75F216: jz      short loc_75F21D
0x75F218: mov     eax, [eax+8]
0x75F21B: jmp     short loc_75F222
0x75F21D: mov     eax, offset aNone; "None"
0x75F222: push    eax; int
0x75F223: push    offset aSpawnModifier; "Spawn Modifier"
0x75F228: call    TESOutput_PrintLabeledString
0x75F22D: movzx   ebx, word ptr [esi+0Ah]
0x75F231: mov     [esp+14h+a2], eax
0x75F235: movzx   eax, word ptr [esi+8]
0x75F239: add     esp, 8
0x75F23C: cmp     ebx, eax
0x75F23E: jb      short loc_75F24E
0x75F240: movzx   ecx, word ptr [esi+0Eh]
0x75F244: add     ecx, ebx
0x75F246: push    ecx
0x75F247: mov     ecx, esi
0x75F249: call    NiTArray_SetSize
0x75F24E: lea     edx, [esp+0Ch+a2]
0x75F252: push    edx
0x75F253: push    ebx
0x75F254: mov     ecx, esi
0x75F256: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F25B: mov     eax, [edi+24h]
0x75F25E: push    eax; int
0x75F25F: push    offset aManager; "Manager"
0x75F264: call    TESOutput_PrintLabeledPointer
0x75F269: movzx   ebx, word ptr [esi+0Ah]
0x75F26D: movzx   ecx, word ptr [esi+8]
0x75F271: add     esp, 8
0x75F274: cmp     ebx, ecx
0x75F276: mov     [esp+0Ch+a2], eax
0x75F27A: jb      short loc_75F28A
0x75F27C: movzx   edx, word ptr [esi+0Eh]
0x75F280: add     edx, ebx
0x75F282: push    edx
0x75F283: mov     ecx, esi
0x75F285: call    NiTArray_SetSize
0x75F28A: lea     eax, [esp+0Ch+a2]
0x75F28E: push    eax
0x75F28F: push    ebx
0x75F290: mov     ecx, esi
0x75F292: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F297: mov     ecx, [edi+28h]
0x75F29A: test    ecx, ecx
0x75F29C: jz      short loc_75F2A6
0x75F29E: mov     edx, [ecx]
0x75F2A0: mov     eax, [edx+30h]
0x75F2A3: push    esi
0x75F2A4: call    eax
0x75F2A6: pop     edi
0x75F2A7: pop     esi
0x75F2A8: pop     ebx
0x75F2A9: retn    4
