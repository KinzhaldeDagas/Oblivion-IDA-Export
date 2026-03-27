0x8A7560: mov     eax, [esp+arg_0]
0x8A7564: cmp     eax, 2000h
0x8A7569: push    esi
0x8A756A: jg      short loc_8A75B7
0x8A756C: mov     edx, [ecx+30h]
0x8A756F: test    edx, edx
0x8A7571: jz      short loc_8A75B7
0x8A7573: cmp     eax, 200h
0x8A7578: jg      short loc_8A7584
0x8A757A: movsx   edx, byte ptr [eax+ecx+100h]
0x8A7582: jmp     short loc_8A758F
0x8A7584: dec     eax
0x8A7585: sar     eax, 0Ah
0x8A7588: mov     edx, [ecx+eax*4+304h]
0x8A758F: mov     eax, [ecx+edx*4+34h]
0x8A7593: test    eax, eax
0x8A7595: jz      short loc_8A75A5
0x8A7597: dec     dword ptr [ecx+edx*4+78h]
0x8A759B: mov     esi, [eax]
0x8A759D: mov     [ecx+edx*4+34h], esi
0x8A75A1: pop     esi
0x8A75A2: retn    8
0x8A75A5: mov     esi, [esp+4+arg_4]
0x8A75A9: mov     ecx, [ecx+10h]
0x8A75AC: mov     eax, [ecx]
0x8A75AE: push    esi
0x8A75AF: push    edx
0x8A75B0: call    dword ptr [eax+18h]
0x8A75B3: pop     esi
0x8A75B4: retn    8
0x8A75B7: mov     esi, [esp+4+arg_4]
0x8A75BB: mov     ecx, [ecx+10h]
0x8A75BE: mov     edx, [ecx]
0x8A75C0: push    esi
0x8A75C1: push    eax
0x8A75C2: call    dword ptr [edx+10h]
0x8A75C5: pop     esi
0x8A75C6: retn    8
