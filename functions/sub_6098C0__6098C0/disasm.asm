0x6098C0: push    esi
0x6098C1: push    edi
0x6098C2: mov     edi, ecx
0x6098C4: mov     eax, [edi]
0x6098C6: mov     edx, [eax+1C8h]
0x6098CC: call    edx
0x6098CE: mov     eax, [edi]
0x6098D0: mov     edx, [eax+154h]
0x6098D6: push    0; a4
0x6098D8: push    1; a3
0x6098DA: push    1; a2
0x6098DC: mov     ecx, edi
0x6098DE: call    edx
0x6098E0: push    eax; a1
0x6098E1: call    sub_88D070
0x6098E6: mov     eax, [edi+5Ch]
0x6098E9: mov     ecx, [eax+28h]
0x6098EC: push    0; int
0x6098EE: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6098F3: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6098F8: push    0; int
0x6098FA: push    ecx; void *
0x6098FB: call    OblivionDynamicCast
0x609900: mov     esi, eax
0x609902: add     esp, 24h
0x609905: test    esi, esi
0x609907: jz      short loc_609944
0x609909: mov     ecx, esi; this
0x60990B: call    MobileObject_GetCharProxy
0x609910: test    eax, eax
0x609912: jz      short loc_609944
0x609914: mov     ecx, esi; this
0x609916: call    MobileObject_GetCharProxy
0x60991B: mov     eax, [eax+364h]
0x609921: test    eax, eax
0x609923: jz      short loc_609940
0x609925: mov     eax, [eax+8]
0x609928: test    eax, eax
0x60992A: jz      short loc_609939
0x60992C: add     eax, 14h
0x60992F: jz      short loc_609939
0x609931: mov     eax, [eax+1Ch]
0x609934: shr     eax, 10h
0x609937: jmp     short loc_609970
0x609939: xor     eax, eax
0x60993B: shr     eax, 10h
0x60993E: jmp     short loc_609970
0x609940: xor     eax, eax
0x609942: jmp     short loc_609970
0x609944: mov     eax, ds:0B3B7D4h
0x609949: test    eax, eax
0x60994B: jnz     short loc_609970
0x60994D: mov     eax, ds:0B2EB3Ch
0x609952: add     eax, 1
0x609955: and     eax, 0FFFFh
0x60995A: mov     ds:0B2EB3Ch, eax
0x60995F: jnz     short loc_60996B
0x609961: mov     eax, 0Ah
0x609966: mov     ds:0B2EB3Ch, eax
0x60996B: mov     ds:0B3B7D4h, eax
0x609970: mov     esi, [esp+8+arg_0]
0x609974: shl     eax, 10h
0x609977: or      eax, 4
0x60997A: test    esi, esi
0x60997C: jz      short loc_60998D
0x60997E: mov     ecx, [esi+8]
0x609981: test    ecx, ecx
0x609983: jz      short loc_60998D
0x609985: add     ecx, 14h
0x609988: jz      short loc_60998D
0x60998A: mov     [ecx+1Ch], eax
0x60998D: mov     edx, [esi]
0x60998F: mov     eax, [edx+80h]
0x609995: mov     ecx, esi
0x609997: call    eax
0x609999: mov     ecx, [edi+5Ch]
0x60999C: add     ecx, 1Ch
0x60999F: push    ecx
0x6099A0: mov     ecx, esi
0x6099A2: call    sub_4D9960
0x6099A7: mov     esi, [esi+8]
0x6099AA: push    esi
0x6099AB: call    sub_47FA60
0x6099B0: add     esp, 4
0x6099B3: test    eax, eax
0x6099B5: pop     edi
0x6099B6: pop     esi
0x6099B7: jz      short loc_6099BE
0x6099B9: or      word ptr [eax+0Ch], 0Ch
0x6099BE: mov     al, 1
0x6099C0: retn    4
