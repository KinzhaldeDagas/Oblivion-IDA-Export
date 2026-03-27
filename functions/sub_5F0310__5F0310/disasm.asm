0x5F0310: push    edi
0x5F0311: mov     edi, ecx
0x5F0313: cmp     dword ptr [edi+3Ch], 0
0x5F0317: jnz     short loc_5F031F
0x5F0319: xor     al, al
0x5F031B: pop     edi
0x5F031C: retn    4
0x5F031F: test    [esp+4+arg_0], 40h
0x5F0324: push    esi
0x5F0325: jz      short loc_5F0395
0x5F0327: mov     eax, [edi+0B0h]
0x5F032D: cmp     eax, 1
0x5F0330: jz      loc_5F03F3
0x5F0336: cmp     eax, 2
0x5F0339: jz      loc_5F03F3
0x5F033F: cmp     eax, 6
0x5F0342: jz      loc_5F03F3
0x5F0348: cmp     eax, 4
0x5F034B: jnz     short loc_5F0395
0x5F034D: mov     eax, [edi+68h]
0x5F0350: mov     edx, [eax+8]
0x5F0353: lea     ecx, [edi+68h]
0x5F0356: call    edx
0x5F0358: mov     esi, eax
0x5F035A: test    esi, esi
0x5F035C: jz      short loc_5F0395
0x5F035E: mov     edi, edi
0x5F0360: cmp     dword ptr [esi+4], 0
0x5F0364: jnz     short loc_5F036B
0x5F0366: cmp     dword ptr [esi], 0
0x5F0369: jz      short loc_5F0395
0x5F036B: mov     eax, [esi]
0x5F036D: push    0; int
0x5F036F: push    offset ??_R0?AVReanimateEffect@@@8; struct TypeDescriptor *
0x5F0374: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x5F0379: push    0; int
0x5F037B: push    eax; void *
0x5F037C: call    OblivionDynamicCast
0x5F0381: add     esp, 14h
0x5F0384: test    eax, eax
0x5F0386: jz      short loc_5F038E
0x5F0388: cmp     dword ptr [eax+3Ch], 1Eh
0x5F038C: jl      short loc_5F03F3
0x5F038E: mov     esi, [esi+4]
0x5F0391: test    esi, esi
0x5F0393: jnz     short loc_5F0360
0x5F0395: mov     ecx, [edi+58h]
0x5F0398: test    ecx, ecx
0x5F039A: jz      short loc_5F03FA
0x5F039C: mov     eax, [ecx]
0x5F039E: mov     edx, [eax+2E4h]
0x5F03A4: call    edx
0x5F03A6: cmp     eax, 1
0x5F03A9: jz      short loc_5F03F3
0x5F03AB: mov     ecx, [edi+58h]
0x5F03AE: mov     eax, [ecx]
0x5F03B0: mov     edx, [eax+2E4h]
0x5F03B6: call    edx
0x5F03B8: cmp     eax, 3
0x5F03BB: jz      short loc_5F03F3
0x5F03BD: mov     ecx, [edi+58h]
0x5F03C0: mov     eax, [ecx]
0x5F03C2: mov     edx, [eax+2E4h]
0x5F03C8: call    edx
0x5F03CA: cmp     eax, 2
0x5F03CD: jz      short loc_5F03F3
0x5F03CF: mov     ecx, [edi+58h]
0x5F03D2: mov     eax, [ecx]
0x5F03D4: mov     edx, [eax+2E4h]
0x5F03DA: call    edx
0x5F03DC: cmp     eax, 4
0x5F03DF: jz      short loc_5F03F3
0x5F03E1: mov     ecx, [edi+58h]
0x5F03E4: mov     eax, [ecx]
0x5F03E6: mov     edx, [eax+2E4h]
0x5F03EC: call    edx
0x5F03EE: cmp     eax, 5
0x5F03F1: jnz     short loc_5F03FA
0x5F03F3: pop     esi
0x5F03F4: mov     al, 1
0x5F03F6: pop     edi
0x5F03F7: retn    4
0x5F03FA: pop     esi
0x5F03FB: xor     al, al
0x5F03FD: pop     edi
0x5F03FE: retn    4
