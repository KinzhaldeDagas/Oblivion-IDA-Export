0x612960: push    ebx
0x612961: mov     bl, [esp+4+arg_0]
0x612965: test    bl, bl
0x612967: push    esi
0x612968: push    edi
0x612969: mov     edi, ecx
0x61296B: mov     ecx, [edi+3Ch]
0x61296E: mov     eax, [ecx]
0x612970: mov     edx, [eax+2B8h]
0x612976: jz      short loc_6129B0
0x612978: push    0
0x61297A: call    edx
0x61297C: mov     esi, eax
0x61297E: test    esi, esi
0x612980: jnz     short loc_6129CD
0x612982: mov     ecx, [edi+3Ch]
0x612985: mov     eax, [ecx]
0x612987: mov     edx, [eax+2B8h]
0x61298D: push    1
0x61298F: call    edx
0x612991: mov     esi, eax
0x612993: test    esi, esi
0x612995: jnz     short loc_6129CD
0x612997: mov     ecx, [edi+3Ch]
0x61299A: mov     eax, [ecx]
0x61299C: mov     edx, [eax+2B8h]
0x6129A2: push    2
0x6129A4: call    edx
0x6129A6: mov     esi, eax
0x6129A8: test    esi, esi
0x6129AA: jnz     short loc_6129CD
0x6129AC: push    3
0x6129AE: jmp     short loc_6129BA
0x6129B0: push    5
0x6129B2: call    edx
0x6129B4: test    eax, eax
0x6129B6: jnz     short loc_612A07
0x6129B8: push    4
0x6129BA: mov     ecx, [edi+3Ch]
0x6129BD: mov     eax, [ecx]
0x6129BF: mov     edx, [eax+2B8h]
0x6129C5: call    edx
0x6129C7: mov     esi, eax
0x6129C9: test    esi, esi
0x6129CB: jz      short loc_612A05
0x6129CD: test    bl, bl
0x6129CF: jz      short loc_612A05
0x6129D1: mov     eax, [esi+8]
0x6129D4: push    0; int
0x6129D6: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6129DB: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6129E0: push    0; int
0x6129E2: push    eax; void *
0x6129E3: call    OblivionDynamicCast
0x6129E8: add     esp, 14h
0x6129EB: test    eax, eax
0x6129ED: jz      short loc_612A05
0x6129EF: mov     al, [eax+90h]
0x6129F5: cmp     al, 4
0x6129F7: jz      short loc_6129FD
0x6129F9: cmp     al, 5
0x6129FB: jnz     short loc_612A05
0x6129FD: pop     edi
0x6129FE: pop     esi
0x6129FF: xor     eax, eax
0x612A01: pop     ebx
0x612A02: retn    4
0x612A05: mov     eax, esi
0x612A07: pop     edi
0x612A08: pop     esi
0x612A09: pop     ebx
0x612A0A: retn    4
