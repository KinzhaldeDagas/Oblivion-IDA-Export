0x8DC5C0: push    ebx
0x8DC5C1: push    esi
0x8DC5C2: mov     esi, [esp+8+arg_0]
0x8DC5C6: push    edi
0x8DC5C7: mov     edi, [esi+0E0h]
0x8DC5CD: dec     edi
0x8DC5CE: js      short loc_8DC5EA
0x8DC5D0: mov     ebx, [esp+0Ch+arg_4]
0x8DC5D4: mov     eax, [esi+0DCh]
0x8DC5DA: mov     ecx, [eax+edi*4]
0x8DC5DD: test    ecx, ecx
0x8DC5DF: jz      short loc_8DC5E7
0x8DC5E1: mov     edx, [ecx]
0x8DC5E3: push    ebx
0x8DC5E4: call    dword ptr [edx+8]
0x8DC5E7: dec     edi
0x8DC5E8: jns     short loc_8DC5D4
0x8DC5EA: mov     edx, [esi+0E0h]
0x8DC5F0: dec     edx
0x8DC5F1: js      short loc_8DC63D
0x8DC5F3: mov     eax, [esi+0DCh]
0x8DC5F9: cmp     dword ptr [eax+edx*4], 0
0x8DC5FD: jnz     short loc_8DC63A
0x8DC5FF: mov     ebx, [esi+0E0h]
0x8DC605: dec     ebx
0x8DC606: mov     ecx, ebx
0x8DC608: cmp     edx, ecx
0x8DC60A: mov     [esi+0E0h], ebx
0x8DC610: mov     eax, edx
0x8DC612: jge     short loc_8DC63A
0x8DC614: jmp     short loc_8DC620
0x8DC616: align 10h
0x8DC620: mov     ecx, [esi+0DCh]
0x8DC626: mov     edi, [ecx+eax*4+4]
0x8DC62A: lea     ecx, [ecx+eax*4]
0x8DC62D: mov     [ecx], edi
0x8DC62F: mov     ecx, [esi+0E0h]
0x8DC635: inc     eax
0x8DC636: cmp     eax, ecx
0x8DC638: jl      short loc_8DC620
0x8DC63A: dec     edx
0x8DC63B: jns     short loc_8DC5F3
0x8DC63D: pop     edi
0x8DC63E: pop     esi
0x8DC63F: pop     ebx
0x8DC640: retn
