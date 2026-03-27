0x660F10: push    edi
0x660F11: mov     edi, [esp+4+arg_0]
0x660F15: mov     eax, [edi]
0x660F17: mov     edx, [eax+198h]
0x660F1D: push    0
0x660F1F: mov     ecx, edi
0x660F21: call    edx
0x660F23: test    al, al
0x660F25: jnz     loc_661070
0x660F2B: mov     eax, [edi+8]
0x660F2E: shr     eax, 0Bh
0x660F31: test    al, 1
0x660F33: jnz     loc_661070
0x660F39: mov     edx, [edi]
0x660F3B: mov     eax, [edx+1A0h]
0x660F41: mov     ecx, edi
0x660F43: call    eax
0x660F45: test    al, al
0x660F47: jnz     loc_661070
0x660F4D: mov     ecx, edi; this
0x660F4F: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x660F54: cmp     eax, 5
0x660F57: jz      loc_661070
0x660F5D: mov     ecx, [edi+58h]
0x660F60: mov     edx, [ecx]
0x660F62: mov     eax, [edx+18h]
0x660F65: push    ebx
0x660F66: push    ebp
0x660F67: push    esi
0x660F68: push    1
0x660F6A: push    edi
0x660F6B: call    eax
0x660F6D: mov     ecx, edi
0x660F6F: call    sub_5E03A0
0x660F74: cmp     [esp+10h+arg_4], 0
0x660F79: mov     esi, eax
0x660F7B: jz      loc_661009
0x660F81: xor     ebp, ebp
0x660F83: test    esi, esi
0x660F85: jz      short loc_660FD5
0x660F87: mov     ecx, [esi+28h]
0x660F8A: test    ecx, ecx
0x660F8C: jz      short loc_660FC1
0x660F8E: call    sub_569E60
0x660F93: mov     ebp, eax
0x660F95: test    ebp, ebp
0x660F97: jnz     short loc_660FC1
0x660F99: mov     ecx, [esi+28h]
0x660F9C: call    sub_569E70
0x660FA1: mov     ebx, eax
0x660FA3: test    ebx, ebx
0x660FA5: jz      short loc_660FC1
0x660FA7: mov     ecx, ds:0B333C4h
0x660FAD: mov     edx, [ecx]
0x660FAF: mov     eax, [edx+170h]
0x660FB5: call    eax
0x660FB7: cmp     ebx, eax
0x660FB9: jnz     short loc_660FC1
0x660FBB: mov     ebp, ds:0B333C4h
0x660FC1: push    edi
0x660FC2: mov     ecx, esi
0x660FC4: call    sub_566D00
0x660FC9: mov     ecx, ds:0B333C4h
0x660FCF: cmp     eax, ecx
0x660FD1: jz      short loc_660FFC
0x660FD3: jmp     short loc_660FDB
0x660FD5: mov     ecx, ds:0B333C4h
0x660FDB: cmp     ebp, ecx
0x660FDD: jz      short loc_660FF6
0x660FDF: mov     ecx, [edi+58h]
0x660FE2: mov     edx, [ecx]
0x660FE4: mov     eax, [edx+0CCh]
0x660FEA: call    eax
0x660FEC: mov     ecx, ds:0B333C4h
0x660FF2: cmp     eax, ecx
0x660FF4: jnz     short loc_661067
0x660FF6: cmp     byte ptr [esi+20h], 9
0x660FFA: jz      short loc_661067
0x660FFC: cmp     ebp, ecx
0x660FFE: jz      short loc_661054
0x661000: pop     esi
0x661001: pop     ebp
0x661002: pop     ebx
0x661003: mov     al, 1
0x661005: pop     edi
0x661006: retn    8
0x661009: test    esi, esi
0x66100B: jz      short loc_661067
0x66100D: mov     al, [esi+20h]
0x661010: cmp     al, 1
0x661012: jz      short loc_661018
0x661014: cmp     al, 7
0x661016: jnz     short loc_661067
0x661018: mov     ecx, [esi+28h]
0x66101B: test    ecx, ecx
0x66101D: jz      short loc_661067
0x66101F: call    sub_569E60
0x661024: mov     ebx, eax
0x661026: test    ebx, ebx
0x661028: jnz     short loc_66104C
0x66102A: mov     ecx, [esi+28h]
0x66102D: call    sub_569E70
0x661032: mov     esi, eax
0x661034: test    esi, esi
0x661036: jz      short loc_66104C
0x661038: mov     ecx, ds:0B333C4h
0x66103E: mov     edx, [ecx]
0x661040: mov     eax, [edx+170h]
0x661046: call    eax
0x661048: cmp     esi, eax
0x66104A: jz      short loc_661054
0x66104C: cmp     ebx, ds:0B333C4h
0x661052: jnz     short loc_661067
0x661054: mov     ecx, edi
0x661056: call    sub_5E6BC0
0x66105B: pop     esi
0x66105C: pop     ebp
0x66105D: test    al, al
0x66105F: pop     ebx
0x661060: setz    al
0x661063: pop     edi
0x661064: retn    8
0x661067: pop     esi
0x661068: pop     ebp
0x661069: pop     ebx
0x66106A: xor     al, al
0x66106C: pop     edi
0x66106D: retn    8
0x661070: xor     al, al
0x661072: pop     edi
0x661073: retn    8
