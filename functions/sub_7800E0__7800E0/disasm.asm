0x7800E0: push    ebx
0x7800E1: xor     ebx, ebx
0x7800E3: cmp     ds:0B28CB0h, ebx
0x7800E9: push    esi
0x7800EA: mov     esi, ecx
0x7800EC: jbe     short loc_780138
0x7800EE: push    edi
0x7800EF: nop
0x7800F0: xor     edi, edi
0x7800F2: mov     eax, [esi]
0x7800F4: mov     edx, [eax+0C0h]
0x7800FA: push    edi
0x7800FB: push    ebx
0x7800FC: mov     ecx, esi
0x7800FE: call    edx
0x780100: add     edi, 1
0x780103: cmp     edi, 8
0x780106: jb      short loc_7800F2
0x780108: xor     edi, edi
0x78010A: lea     ebx, [ebx+0]
0x780110: mov     ecx, ds:dword_B427CC[edi]
0x780116: mov     eax, [esi]
0x780118: mov     edx, [eax+0D8h]
0x78011E: push    ecx
0x78011F: push    ebx
0x780120: mov     ecx, esi
0x780122: call    edx
0x780124: add     edi, 4
0x780127: cmp     edi, 14h
0x78012A: jb      short loc_780110
0x78012C: add     ebx, 1
0x78012F: cmp     ebx, ds:0B28CB0h
0x780135: jb      short loc_7800F0
0x780137: pop     edi
0x780138: pop     esi
0x780139: pop     ebx
0x78013A: retn
