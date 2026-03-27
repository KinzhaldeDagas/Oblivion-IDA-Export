0x41FD70: push    esi; lpCriticalSection
0x41FD71: mov     esi, ecx
0x41FD73: push    offset aExtradatalistI
0x41FD78: mov     ecx, offset BSExtraDataCS
0x41FD7D: call    NiEnterCriticalSection
0x41FD82: mov     eax, [esi+4]
0x41FD85: test    eax, eax
0x41FD87: pop     esi
0x41FD88: jz      short loc_41FDCF
0x41FD8A: mov     dl, [esp+arg_0]
0x41FD8E: mov     edi, edi
0x41FD90: test    dl, dl
0x41FD92: jz      short loc_41FDAE
0x41FD94: movzx   ecx, byte ptr [eax+4]
0x41FD98: add     ecx, 0FFFFFFEEh; switch 68 cases
0x41FD9B: cmp     ecx, 43h
0x41FD9E: ja      short ExtraDataList_IsExtraDefaultForContainer___def_41FDA7; jumptable 0041FDA7 default case, cases 19-26,28-33,35-37,40,41,43,44,46-53,56-84
0x41FDA0: movzx   ecx, ds:kExtraOwnershipDefaultSetting2[ecx]
0x41FDA7: jmp     ds:jpt_41FDA7[ecx*4]; switch jump
0x41FDAE: movzx   ecx, byte ptr [eax+4]
0x41FDB2: add     ecx, 0FFFFFFEEh; switch 68 cases
0x41FDB5: cmp     ecx, 43h
0x41FDB8: ja      short ExtraDataList_IsExtraDefaultForContainer___def_41FDA7; jumptable 0041FDA7 default case, cases 19-26,28-33,35-37,40,41,43,44,46-53,56-84
0x41FDBA: movzx   ecx, ds:ExtraOwnerShipDefaultSetting[ecx]
0x41FDC1: jmp     ds:jpt_41FDC1[ecx*4]; switch jump
0x41FDC8: mov     eax, [eax+8]; jumptable 0041FDA7 cases 18,27,34,38,39,42,45,54,55,85
0x41FDCB: test    eax, eax
0x41FDCD: jnz     short loc_41FD90
0x41FDCF: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41FDD4: call    NiLeaveCriticalSection_0
0x41FDD9: mov     al, 1
0x41FDDB: retn    4
0x41FDDE: mov     ecx, offset BSExtraDataCS; jumptable 0041FDA7 default case, cases 19-26,28-33,35-37,40,41,43,44,46-53,56-84
0x41FDE3: call    NiLeaveCriticalSection_0
0x41FDE8: xor     al, al
0x41FDEA: retn    4
