0x65A050: push    ebx
0x65A051: push    ebp
0x65A052: push    esi
0x65A053: push    edi
0x65A054: mov     esi, ecx
0x65A056: push    0; a2
0x65A058: mov     ecx, offset ActorProcessManager_ptr; this
0x65A05D: call    sub_673A50
0x65A062: mov     ecx, eax; this
0x65A064: call    sub_7616D0
0x65A069: mov     ebx, eax
0x65A06B: test    ebx, ebx
0x65A06D: jz      loc_65A148
0x65A073: mov     ebp, [ebx]
0x65A075: cmp     ebp, esi
0x65A077: jz      loc_65A13D
0x65A07D: push    0; int
0x65A07F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x65A084: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65A089: push    0; int
0x65A08B: push    ebp; void *
0x65A08C: call    OblivionDynamicCast
0x65A091: mov     edi, eax
0x65A093: add     esp, 14h
0x65A096: test    edi, edi
0x65A098: jz      short loc_65A0FD
0x65A09A: mov     ecx, edi
0x65A09C: call    sub_5E6830
0x65A0A1: cmp     eax, esi
0x65A0A3: jnz     short loc_65A0B2
0x65A0A5: mov     ecx, [edi+58h]
0x65A0A8: mov     eax, [ecx]
0x65A0AA: mov     edx, [eax+4B4h]
0x65A0B0: call    edx
0x65A0B2: cmp     [esp+10h+arg_0], 0
0x65A0B7: jz      short loc_65A0CD
0x65A0B9: mov     eax, [esi]
0x65A0BB: mov     edx, [eax+120h]
0x65A0C1: mov     ecx, esi
0x65A0C3: call    edx
0x65A0C5: push    eax
0x65A0C6: mov     ecx, edi
0x65A0C8: call    sub_5E69E0
0x65A0CD: mov     ecx, [edi+58h]
0x65A0D0: mov     eax, [ecx]
0x65A0D2: mov     edx, [eax+2B0h]
0x65A0D8: call    edx
0x65A0DA: mov     ebp, eax
0x65A0DC: mov     eax, [esi]
0x65A0DE: mov     edx, [eax+124h]
0x65A0E4: mov     ecx, esi
0x65A0E6: call    edx
0x65A0E8: cmp     ebp, eax
0x65A0EA: jnz     short loc_65A13D
0x65A0EC: mov     ecx, [edi+58h]
0x65A0EF: mov     eax, [ecx]
0x65A0F1: mov     edx, [eax+2B4h]
0x65A0F7: push    0
0x65A0F9: call    edx
0x65A0FB: jmp     short loc_65A13D
0x65A0FD: cmp     [esp+10h+arg_0], 0
0x65A102: jz      short loc_65A13D
0x65A104: push    0; int
0x65A106: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x65A10B: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65A110: push    0; int
0x65A112: push    ebp; void *
0x65A113: call    OblivionDynamicCast
0x65A118: mov     edi, eax
0x65A11A: add     esp, 14h
0x65A11D: test    edi, edi
0x65A11F: jz      short loc_65A13D
0x65A121: mov     eax, [esi]
0x65A123: mov     ebp, [edi]
0x65A125: mov     edx, [eax+120h]
0x65A12B: mov     ecx, esi
0x65A12D: add     ebp, 218h
0x65A133: call    edx
0x65A135: push    eax
0x65A136: mov     eax, [ebp+0]
0x65A139: mov     ecx, edi
0x65A13B: call    eax
0x65A13D: mov     ebx, [ebx+4]
0x65A140: test    ebx, ebx
0x65A142: jnz     loc_65A073
0x65A148: push    1; a2
0x65A14A: mov     ecx, offset ActorProcessManager_ptr; this
0x65A14F: call    sub_673A50
0x65A154: mov     ecx, eax; this
0x65A156: call    sub_7616D0
0x65A15B: mov     ebx, eax
0x65A15D: test    ebx, ebx
0x65A15F: jz      loc_65A222
0x65A165: mov     ebp, [ebx]
0x65A167: cmp     ebp, esi
0x65A169: jz      loc_65A217
0x65A16F: push    0; int
0x65A171: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x65A176: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65A17B: push    0; int
0x65A17D: push    ebp; void *
0x65A17E: call    OblivionDynamicCast
0x65A183: mov     edi, eax
0x65A185: add     esp, 14h
0x65A188: test    edi, edi
0x65A18A: jz      short loc_65A1D7
0x65A18C: cmp     [esp+10h+arg_0], 0
0x65A191: jz      short loc_65A1A7
0x65A193: mov     edx, [esi]
0x65A195: mov     eax, [edx+120h]
0x65A19B: mov     ecx, esi
0x65A19D: call    eax
0x65A19F: push    eax
0x65A1A0: mov     ecx, edi
0x65A1A2: call    sub_5E69E0
0x65A1A7: mov     ecx, [edi+58h]
0x65A1AA: mov     edx, [ecx]
0x65A1AC: mov     eax, [edx+2B0h]
0x65A1B2: call    eax
0x65A1B4: mov     edx, [esi]
0x65A1B6: mov     ebp, eax
0x65A1B8: mov     eax, [edx+124h]
0x65A1BE: mov     ecx, esi
0x65A1C0: call    eax
0x65A1C2: cmp     ebp, eax
0x65A1C4: jnz     short loc_65A217
0x65A1C6: mov     ecx, [edi+58h]
0x65A1C9: mov     edx, [ecx]
0x65A1CB: mov     eax, [edx+2B4h]
0x65A1D1: push    0
0x65A1D3: call    eax
0x65A1D5: jmp     short loc_65A217
0x65A1D7: cmp     [esp+10h+arg_0], 0
0x65A1DC: jz      short loc_65A217
0x65A1DE: push    0; int
0x65A1E0: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x65A1E5: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65A1EA: push    0; int
0x65A1EC: push    ebp; void *
0x65A1ED: call    OblivionDynamicCast
0x65A1F2: mov     edi, eax
0x65A1F4: add     esp, 14h
0x65A1F7: test    edi, edi
0x65A1F9: jz      short loc_65A217
0x65A1FB: mov     edx, [esi]
0x65A1FD: mov     ebp, [edi]
0x65A1FF: mov     eax, [edx+120h]
0x65A205: mov     ecx, esi
0x65A207: add     ebp, 218h
0x65A20D: call    eax
0x65A20F: mov     edx, [ebp+0]
0x65A212: push    eax
0x65A213: mov     ecx, edi
0x65A215: call    edx
0x65A217: mov     ebx, [ebx+4]
0x65A21A: test    ebx, ebx
0x65A21C: jnz     loc_65A165
0x65A222: mov     ebx, dword ptr [esp+10h+arg_0]
0x65A226: push    ebx
0x65A227: push    esi
0x65A228: mov     ecx, offset ActorProcessManager_ptr
0x65A22D: call    sub_677B50
0x65A232: mov     eax, ds:0B333C4h
0x65A237: test    eax, eax
0x65A239: jz      short loc_65A2AE
0x65A23B: mov     ecx, [eax+58h]
0x65A23E: test    ecx, ecx
0x65A240: jz      short loc_65A24D
0x65A242: mov     eax, [ecx]
0x65A244: mov     edx, [eax+4B8h]
0x65A24A: push    esi
0x65A24B: call    edx
0x65A24D: test    bl, bl
0x65A24F: jz      short loc_65A269
0x65A251: mov     eax, [esi]
0x65A253: mov     edx, [eax+120h]
0x65A259: mov     ecx, esi
0x65A25B: call    edx
0x65A25D: mov     ecx, ds:0B333C4h
0x65A263: push    eax
0x65A264: call    sub_5E69E0
0x65A269: mov     eax, ds:0B333C4h
0x65A26E: mov     edx, [esi]
0x65A270: mov     edi, [eax+58h]
0x65A273: mov     eax, [edx+124h]
0x65A279: mov     ecx, esi
0x65A27B: call    eax
0x65A27D: mov     edx, [edi]
0x65A27F: mov     esi, eax
0x65A281: mov     eax, [edx+2B0h]
0x65A287: mov     ecx, edi
0x65A289: call    eax
0x65A28B: cmp     eax, esi
0x65A28D: jnz     short loc_65A2AE
0x65A28F: mov     ecx, ds:0B333C4h
0x65A295: mov     ecx, [ecx+58h]
0x65A298: mov     edx, [ecx]
0x65A29A: pop     edi
0x65A29B: pop     esi
0x65A29C: pop     ebp
0x65A29D: pop     ebx
0x65A29E: mov     dword ptr [esp+arg_0], 0
0x65A2A6: mov     eax, [edx+2B4h]
0x65A2AC: jmp     eax
0x65A2AE: pop     edi
0x65A2AF: pop     esi
0x65A2B0: pop     ebp
0x65A2B1: pop     ebx
0x65A2B2: retn    4
