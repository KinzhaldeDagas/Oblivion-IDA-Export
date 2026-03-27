0x41FCB0: push    ebx
0x41FCB1: push    esi
0x41FCB2: mov     esi, ecx
0x41FCB4: push    offset aExtradatalistI; lpCriticalSection
0x41FCB9: mov     ecx, offset BSExtraDataCS
0x41FCBE: call    NiEnterCriticalSection
0x41FCC3: mov     eax, [esi+4]
0x41FCC6: xor     bl, bl
0x41FCC8: test    eax, eax
0x41FCCA: jz      short loc_41FD08
0x41FCCC: lea     esp, [esp+0]
0x41FCD0: movzx   ecx, byte ptr [eax+4]
0x41FCD4: add     ecx, 0FFFFFFEEh; switch 68 cases
0x41FCD7: cmp     ecx, 43h
0x41FCDA: ja      short ExtraDataList_IsExtraDefaultForContainer_all___def_41FCE3; jumptable 0041FCE3 default case, cases 19-33,35-37,40,41,43,44,46-53,56-84
0x41FCDC: movzx   ecx, ds:byte_41FD24[ecx]
0x41FCE3: jmp     ds:jpt_41FCE3[ecx*4]; switch jump
0x41FCEA: mov     bl, 1; jumptable 0041FCE3 case 39
0x41FCEC: mov     eax, [eax+8]; jumptable 0041FCE3 cases 18,34,38,42,45,54,55,85
0x41FCEF: test    eax, eax
0x41FCF1: jnz     short loc_41FCD0
0x41FCF3: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41FCF8: call    NiLeaveCriticalSection_0
0x41FCFD: pop     esi
0x41FCFE: mov     al, bl
0x41FD00: pop     ebx
0x41FD01: retn
0x41FD02: test    bl, bl; jumptable 0041FCE3 default case, cases 19-33,35-37,40,41,43,44,46-53,56-84
0x41FD04: jz      short loc_41FD08
0x41FD06: xor     bl, bl
0x41FD08: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41FD0D: call    NiLeaveCriticalSection_0
0x41FD12: pop     esi
0x41FD13: mov     al, bl
0x41FD15: pop     ebx
0x41FD16: retn
