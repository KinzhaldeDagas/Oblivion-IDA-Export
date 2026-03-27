0x42B470: push    esi
0x42B471: mov     esi, ecx
0x42B473: mov     ecx, [esi]; this
0x42B475: push    edi
0x42B476: xor     edi, edi
0x42B478: test    ecx, ecx
0x42B47A: jz      short loc_42B4A7
0x42B47C: call    TESObjectREFR_GetParentCell
0x42B481: test    eax, eax
0x42B483: jz      short loc_42B48E
0x42B485: pop     edi
0x42B486: mov     ecx, eax; this
0x42B488: pop     esi
0x42B489: jmp     TESObjectCELL_GetWorldSpace
0x42B48E: mov     esi, [esi]
0x42B490: mov     eax, [esi+18h]
0x42B493: mov     edx, [eax]
0x42B495: lea     ecx, [esi+18h]
0x42B498: call    edx
0x42B49A: test    eax, eax
0x42B49C: jz      short loc_42B4A7
0x42B49E: pop     edi
0x42B49F: mov     ecx, eax; this
0x42B4A1: pop     esi
0x42B4A2: jmp     TESObjectCELL_GetWorldSpace
0x42B4A7: mov     eax, edi
0x42B4A9: pop     edi
0x42B4AA: pop     esi
0x42B4AB: retn
