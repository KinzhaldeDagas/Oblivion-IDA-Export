0x8DC530: push    ebx
0x8DC531: push    esi
0x8DC532: mov     esi, [esp+8+arg_0]
0x8DC536: push    edi
0x8DC537: mov     edi, [esi+0E0h]
0x8DC53D: dec     edi
0x8DC53E: js      short loc_8DC55A
0x8DC540: mov     ebx, [esp+0Ch+arg_4]
0x8DC544: mov     eax, [esi+0DCh]
0x8DC54A: mov     ecx, [eax+edi*4]
0x8DC54D: test    ecx, ecx
0x8DC54F: jz      short loc_8DC557
0x8DC551: mov     edx, [ecx]
0x8DC553: push    ebx
0x8DC554: call    dword ptr [edx+4]
0x8DC557: dec     edi
0x8DC558: jns     short loc_8DC544
0x8DC55A: mov     edx, [esi+0E0h]
0x8DC560: dec     edx
0x8DC561: js      short loc_8DC5AD
0x8DC563: mov     eax, [esi+0DCh]
0x8DC569: cmp     dword ptr [eax+edx*4], 0
0x8DC56D: jnz     short loc_8DC5AA
0x8DC56F: mov     ebx, [esi+0E0h]
0x8DC575: dec     ebx
0x8DC576: mov     ecx, ebx
0x8DC578: cmp     edx, ecx
0x8DC57A: mov     [esi+0E0h], ebx
0x8DC580: mov     eax, edx
0x8DC582: jge     short loc_8DC5AA
0x8DC584: jmp     short loc_8DC590
0x8DC586: align 10h
0x8DC590: mov     ecx, [esi+0DCh]
0x8DC596: mov     edi, [ecx+eax*4+4]
0x8DC59A: lea     ecx, [ecx+eax*4]
0x8DC59D: mov     [ecx], edi
0x8DC59F: mov     ecx, [esi+0E0h]
0x8DC5A5: inc     eax
0x8DC5A6: cmp     eax, ecx
0x8DC5A8: jl      short loc_8DC590
0x8DC5AA: dec     edx
0x8DC5AB: jns     short loc_8DC563
0x8DC5AD: pop     edi
0x8DC5AE: pop     esi
0x8DC5AF: pop     ebx
0x8DC5B0: retn
