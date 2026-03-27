0x4520F0: push    ebx
0x4520F1: push    edi
0x4520F2: mov     ebx, ecx
0x4520F4: mov     eax, [ebx+4]
0x4520F7: mov     ecx, eax
0x4520F9: test    ecx, ecx
0x4520FB: jz      short loc_452121
0x4520FD: lea     ecx, [ecx+0]
0x452100: mov     ecx, [ecx+4]
0x452103: test    ecx, ecx
0x452105: jnz     short loc_452100
0x452107: test    eax, eax
0x452109: jz      short loc_45211D
0x45210B: jmp     short loc_452110
0x45210D: align 10h
0x452110: mov     ecx, [eax+4]
0x452113: test    ecx, ecx
0x452115: jz      short loc_45211D
0x452117: mov     eax, ecx
0x452119: test    eax, eax
0x45211B: jnz     short loc_452110
0x45211D: mov     ebx, eax
0x45211F: jmp     short loc_4520F4
0x452121: mov     eax, ds:0B33398h
0x452126: mov     edi, ds:0A2808Ch
0x45212C: push    esi
0x45212D: mov     esi, [eax+10h]
0x452130: call    edi ; GetCurrentThreadId
0x452132: cmp     eax, esi
0x452134: pop     esi
0x452135: jnz     short loc_45213C
0x452137: pop     edi
0x452138: mov     eax, ebx
0x45213A: pop     ebx
0x45213B: retn
0x45213C: call    edi ; GetCurrentThreadId
0x45213E: push    eax
0x45213F: mov     ecx, ebx
0x452141: call    sub_451F80
0x452146: pop     edi
0x452147: pop     ebx
0x452148: retn
