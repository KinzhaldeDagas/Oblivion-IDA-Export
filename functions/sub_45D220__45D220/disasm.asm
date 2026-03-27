0x45D220: mov     eax, ds:0B33398h
0x45D225: sub     esp, 14h
0x45D228: push    ebx
0x45D229: push    esi
0x45D22A: mov     esi, [eax+10h]
0x45D22D: mov     ebx, ecx
0x45D22F: call    dword ptr ds:0A2808Ch
0x45D235: cmp     eax, esi
0x45D237: jnz     short loc_45D23E
0x45D239: mov     al, [ebx+18h]
0x45D23C: jmp     short loc_45D244
0x45D23E: mov     eax, [ebx+18h]
0x45D241: shr     eax, 12h
0x45D244: and     al, 1
0x45D246: test    al, al
0x45D248: jnz     loc_45D37E
0x45D24E: mov     esi, [esp+1Ch+arg_0]
0x45D252: push    ebp
0x45D253: push    edi
0x45D254: xor     ebp, ebp
0x45D256: push    ebp; int
0x45D257: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45D25C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x45D261: push    ebp; int
0x45D262: push    esi; void *
0x45D263: call    OblivionDynamicCast
0x45D268: mov     edi, eax
0x45D26A: add     esp, 14h
0x45D26D: cmp     edi, ebp
0x45D26F: jz      short loc_45D29F
0x45D271: mov     edx, [esi+0Ch]
0x45D274: lea     ecx, [esp+24h+arg_0]
0x45D278: push    ecx
0x45D279: mov     ecx, [ebx]
0x45D27B: push    edx
0x45D27C: mov     [esp+2Ch+arg_0], ebp
0x45D280: call    NiTMap_GetAt
0x45D285: mov     eax, [esp+24h+arg_0]
0x45D289: cmp     eax, ebp
0x45D28B: jz      short loc_45D291
0x45D28D: mov     eax, [eax]
0x45D28F: jmp     short loc_45D293
0x45D291: xor     eax, eax
0x45D293: push    eax
0x45D294: mov     ecx, edi
0x45D296: call    sub_5F0310
0x45D29B: test    al, al
0x45D29D: jnz     short loc_45D2C9
0x45D29F: mov     ecx, [esi+0Ch]
0x45D2A2: lea     eax, [esp+24h+arg_0]
0x45D2A6: push    eax
0x45D2A7: push    ecx
0x45D2A8: mov     ecx, [ebx]
0x45D2AA: mov     [esp+2Ch+arg_0], ebp
0x45D2AE: call    NiTMap_GetAt
0x45D2B3: mov     eax, [esp+24h+arg_0]
0x45D2B7: cmp     eax, ebp
0x45D2B9: jz      short loc_45D2BF
0x45D2BB: mov     eax, [eax]
0x45D2BD: jmp     short loc_45D2C1
0x45D2BF: xor     eax, eax
0x45D2C1: test    al, 8
0x45D2C3: jz      loc_45D37C
0x45D2C9: lea     edx, [esp+24h+var_14]
0x45D2CD: push    edx
0x45D2CE: mov     ecx, esi
0x45D2D0: mov     [esp+28h+var_14], 0
0x45D2D5: mov     word ptr [esp+28h+var_12], bp
0x45D2DA: mov     word ptr [esp+28h+var_12+2], bp
0x45D2DF: mov     [esp+28h+var_C], ebp
0x45D2E3: mov     [esp+28h+var_8], ebp
0x45D2E7: mov     [esp+28h+var_4], ebp
0x45D2EB: call    sub_4E0970
0x45D2F0: test    edi, edi
0x45D2F2: movzx   ebp, ax
0x45D2F5: jnz     short loc_45D307
0x45D2F7: mov     eax, [esp+24h+var_12+2]
0x45D2FB: mov     ecx, [esp+24h+var_12]
0x45D2FF: add     eax, ecx
0x45D301: cmp     ax, 1
0x45D305: jz      short loc_45D37C
0x45D307: test    bp, bp
0x45D30A: jz      short loc_45D37C
0x45D30C: push    offset aTessaveloadg_0; "TESSaveLoadGame::SaveQueuedHavokData"
0x45D311: mov     ecx, offset stru_B33B80
0x45D316: call    NiEnterCriticalSection
0x45D31B: test    edi, edi
0x45D31D: jz      short loc_45D32A
0x45D31F: mov     edx, [edi]
0x45D321: mov     eax, [edx+40h]
0x45D324: push    8
0x45D326: mov     ecx, edi
0x45D328: call    eax
0x45D32A: movzx   ecx, bp
0x45D32D: add     ecx, 2
0x45D330: push    1
0x45D332: push    ecx
0x45D333: mov     ecx, offset FormHeap
0x45D338: call    j_MemoryHeap_Alloc
0x45D33D: mov     edi, eax
0x45D33F: lea     eax, [esp+24h+var_14]
0x45D343: lea     edx, [edi+2]
0x45D346: mov     [edi], bp
0x45D349: push    eax
0x45D34A: mov     ecx, esi
0x45D34C: mov     [ebx+14h], edx
0x45D34F: call    sub_4E0A40
0x45D354: push    edi
0x45D355: lea     ecx, [esi+44h]
0x45D358: mov     dword ptr [ebx+14h], 0
0x45D35F: call    sub_4211E0
0x45D364: mov     edx, [esi]
0x45D366: mov     eax, [edx+40h]
0x45D369: push    1000000h; lpCriticalSection
0x45D36E: mov     ecx, esi
0x45D370: call    eax
0x45D372: mov     ecx, offset stru_B33B80; lpCriticalSection
0x45D377: call    NiLeaveCriticalSection_0
0x45D37C: pop     edi
0x45D37D: pop     ebp
0x45D37E: pop     esi
0x45D37F: pop     ebx
0x45D380: add     esp, 14h
0x45D383: retn    4
