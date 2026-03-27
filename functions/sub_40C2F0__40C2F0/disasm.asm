0x40C2F0: push    esi
0x40C2F1: push    edi
0x40C2F2: mov     edi, ecx
0x40C2F4: movzx   ecx, word ptr [edi+0AC2h]
0x40C2FB: xor     esi, esi
0x40C2FD: test    ecx, ecx
0x40C2FF: jbe     short loc_40C32A
0x40C301: mov     eax, [edi+0ABCh]
0x40C307: mov     edx, [esp+8+arg_0]
0x40C30B: jmp     short loc_40C310
0x40C30D: align 10h
0x40C310: cmp     [eax], edx
0x40C312: jz      short loc_40C325
0x40C314: add     esi, 1
0x40C317: add     eax, 4
0x40C31A: cmp     esi, ecx
0x40C31C: jb      short loc_40C310
0x40C31E: pop     edi
0x40C31F: xor     al, al
0x40C321: pop     esi
0x40C322: retn    4
0x40C325: cmp     esi, 0FFFFFFFFh
0x40C328: jnz     short loc_40C331
0x40C32A: pop     edi
0x40C32B: xor     al, al
0x40C32D: pop     esi
0x40C32E: retn    4
0x40C331: push    esi
0x40C332: lea     ecx, [edi+0AB8h]
0x40C338: call    sub_405020
0x40C33D: push    esi
0x40C33E: lea     ecx, [edi+0AC8h]
0x40C344: call    sub_405020
0x40C349: pop     edi
0x40C34A: mov     al, 1
0x40C34C: pop     esi
0x40C34D: retn    4
