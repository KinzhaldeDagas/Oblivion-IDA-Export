0x8DC6E0: push    ebx
0x8DC6E1: push    esi
0x8DC6E2: mov     esi, [esp+8+arg_0]
0x8DC6E6: push    edi
0x8DC6E7: mov     edi, [esi+0ECh]
0x8DC6ED: dec     edi
0x8DC6EE: js      short loc_8DC70A
0x8DC6F0: mov     ebx, [esp+0Ch+arg_4]
0x8DC6F4: mov     eax, [esi+0E8h]
0x8DC6FA: mov     ecx, [eax+edi*4]
0x8DC6FD: test    ecx, ecx
0x8DC6FF: jz      short loc_8DC707
0x8DC701: mov     edx, [ecx]
0x8DC703: push    ebx
0x8DC704: call    dword ptr [edx+4]
0x8DC707: dec     edi
0x8DC708: jns     short loc_8DC6F4
0x8DC70A: mov     edx, [esi+0ECh]
0x8DC710: dec     edx
0x8DC711: js      short loc_8DC75D
0x8DC713: mov     eax, [esi+0E8h]
0x8DC719: cmp     dword ptr [eax+edx*4], 0
0x8DC71D: jnz     short loc_8DC75A
0x8DC71F: mov     ebx, [esi+0ECh]
0x8DC725: dec     ebx
0x8DC726: mov     ecx, ebx
0x8DC728: cmp     edx, ecx
0x8DC72A: mov     [esi+0ECh], ebx
0x8DC730: mov     eax, edx
0x8DC732: jge     short loc_8DC75A
0x8DC734: jmp     short loc_8DC740
0x8DC736: align 10h
0x8DC740: mov     ecx, [esi+0E8h]
0x8DC746: mov     edi, [ecx+eax*4+4]
0x8DC74A: lea     ecx, [ecx+eax*4]
0x8DC74D: mov     [ecx], edi
0x8DC74F: mov     ecx, [esi+0ECh]
0x8DC755: inc     eax
0x8DC756: cmp     eax, ecx
0x8DC758: jl      short loc_8DC740
0x8DC75A: dec     edx
0x8DC75B: jns     short loc_8DC713
0x8DC75D: pop     edi
0x8DC75E: pop     esi
0x8DC75F: pop     ebx
0x8DC760: retn
