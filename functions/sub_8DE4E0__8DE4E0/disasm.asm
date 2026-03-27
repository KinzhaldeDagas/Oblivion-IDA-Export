0x8DE4E0: push    esi
0x8DE4E1: mov     esi, [eax+4]
0x8DE4E4: dec     esi
0x8DE4E5: js      short loc_8DE517
0x8DE4E7: push    edi
0x8DE4E8: mov     ecx, [eax]
0x8DE4EA: cmp     dword ptr [ecx+esi*4], 0
0x8DE4EE: jnz     short loc_8DE513
0x8DE4F0: mov     ecx, [eax+4]
0x8DE4F3: dec     ecx
0x8DE4F4: mov     edx, ecx
0x8DE4F6: cmp     esi, edx
0x8DE4F8: mov     [eax+4], ecx
0x8DE4FB: mov     ecx, esi
0x8DE4FD: jge     short loc_8DE513
0x8DE4FF: nop
0x8DE500: mov     edx, [eax]
0x8DE502: mov     edi, [edx+ecx*4+4]
0x8DE506: lea     edx, [edx+ecx*4]
0x8DE509: mov     [edx], edi
0x8DE50B: mov     edx, [eax+4]
0x8DE50E: inc     ecx
0x8DE50F: cmp     ecx, edx
0x8DE511: jl      short loc_8DE500
0x8DE513: dec     esi
0x8DE514: jns     short loc_8DE4E8
0x8DE516: pop     edi
0x8DE517: pop     esi
0x8DE518: retn
