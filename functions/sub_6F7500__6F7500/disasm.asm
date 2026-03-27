0x6F7500: push    esi
0x6F7501: mov     esi, ecx
0x6F7503: mov     eax, [esi+20h]
0x6F7506: mov     ecx, [eax]
0x6F7508: test    ecx, ecx
0x6F750A: jz      short loc_6F7520
0x6F750C: mov     edx, eax
0x6F750E: mov     eax, [edx]
0x6F7510: mov     edx, [esi+30h]
0x6F7513: mov     edx, [edx]
0x6F7515: add     edx, eax
0x6F7517: cmp     eax, edx
0x6F7519: jnb     short loc_6F7520
0x6F751B: movzx   eax, byte ptr [ecx]
0x6F751E: pop     esi
0x6F751F: retn
0x6F7520: mov     eax, [esi]
0x6F7522: mov     edx, [eax+14h]
0x6F7525: push    edi
0x6F7526: mov     ecx, esi
0x6F7528: call    edx
0x6F752A: mov     edi, eax
0x6F752C: cmp     edi, 0FFFFFFFFh
0x6F752F: jnz     short loc_6F7536
0x6F7531: pop     edi
0x6F7532: or      eax, eax
0x6F7534: pop     esi
0x6F7535: retn
0x6F7536: mov     eax, [esi]
0x6F7538: mov     edx, [eax+8]
0x6F753B: push    edi
0x6F753C: mov     ecx, esi
0x6F753E: call    edx
0x6F7540: mov     eax, edi
0x6F7542: pop     edi
0x6F7543: pop     esi
0x6F7544: retn
