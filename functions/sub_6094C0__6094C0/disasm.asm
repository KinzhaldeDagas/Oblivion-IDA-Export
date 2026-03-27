0x6094C0: push    esi
0x6094C1: mov     esi, ecx
0x6094C3: mov     eax, [esi]
0x6094C5: mov     edx, [eax+1C8h]
0x6094CB: push    edi
0x6094CC: call    edx
0x6094CE: mov     eax, [esi]
0x6094D0: mov     edi, [esi+5Ch]
0x6094D3: mov     edx, [eax+154h]
0x6094D9: mov     ecx, esi
0x6094DB: add     edi, 4
0x6094DE: call    edx
0x6094E0: mov     ecx, [edi]
0x6094E2: mov     [eax+54h], ecx
0x6094E5: mov     edx, [edi+4]
0x6094E8: mov     [eax+58h], edx
0x6094EB: mov     ecx, [edi+8]
0x6094EE: mov     [eax+5Ch], ecx
0x6094F1: mov     eax, [esi+5Ch]
0x6094F4: mov     edx, [eax+4]
0x6094F7: add     eax, 4
0x6094FA: sub     esp, 0Ch
0x6094FD: mov     ecx, esp
0x6094FF: mov     [ecx], edx
0x609501: mov     edx, [eax+4]
0x609504: mov     eax, [eax+8]
0x609507: mov     [ecx+4], edx
0x60950A: mov     [ecx+8], eax
0x60950D: mov     ecx, esi; this
0x60950F: call    TESObjectREFR_SetPosition
0x609514: mov     esi, [esp+8+arg_0]
0x609518: test    esi, esi
0x60951A: jz      short loc_60952D
0x60951C: mov     eax, [esi+8]
0x60951F: test    eax, eax
0x609521: jz      short loc_60952D
0x609523: add     eax, 14h
0x609526: jz      short loc_60952D
0x609528: mov     eax, [eax+1Ch]
0x60952B: jmp     short loc_60952F
0x60952D: xor     eax, eax
0x60952F: and     eax, 0FFFFBFCFh
0x609534: or      eax, 0Fh
0x609537: test    esi, esi
0x609539: jz      short loc_60954A
0x60953B: mov     ecx, [esi+8]
0x60953E: test    ecx, ecx
0x609540: jz      short loc_60954A
0x609542: add     ecx, 14h
0x609545: jz      short loc_60954A
0x609547: mov     [ecx+1Ch], eax
0x60954A: mov     edx, [esi]
0x60954C: mov     eax, [edx+80h]
0x609552: mov     ecx, esi
0x609554: call    eax
0x609556: mov     eax, ds:0B3B7D4h
0x60955B: test    eax, eax
0x60955D: jnz     short loc_609582
0x60955F: mov     eax, ds:0B2EB3Ch
0x609564: add     eax, 1
0x609567: and     eax, 0FFFFh
0x60956C: mov     ds:0B2EB3Ch, eax
0x609571: jnz     short loc_60957D
0x609573: mov     eax, 0Ah
0x609578: mov     ds:0B2EB3Ch, eax
0x60957D: mov     ds:0B3B7D4h, eax
0x609582: mov     ecx, [esi+8]
0x609585: shl     eax, 10h
0x609588: or      eax, 0Fh
0x60958B: test    ecx, ecx
0x60958D: jz      short loc_609597
0x60958F: add     ecx, 14h
0x609592: jz      short loc_609597
0x609594: mov     [ecx+1Ch], eax
0x609597: mov     edx, [esi]
0x609599: mov     eax, [edx+80h]
0x60959F: mov     ecx, esi
0x6095A1: call    eax
0x6095A3: pop     edi
0x6095A4: mov     al, 1
0x6095A6: pop     esi
0x6095A7: retn    4
