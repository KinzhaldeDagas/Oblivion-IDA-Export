0x8DC0A0: push    ebx
0x8DC0A1: mov     ebx, [esp+4+arg_4]
0x8DC0A5: push    esi
0x8DC0A6: mov     esi, [esp+8+arg_0]
0x8DC0AA: push    edi
0x8DC0AB: mov     [ebx+10h], esi
0x8DC0AE: mov     edi, [esi+98h]
0x8DC0B4: dec     edi
0x8DC0B5: js      short loc_8DC0D6
0x8DC0B7: jmp     short loc_8DC0C0
0x8DC0B9: align 10h
0x8DC0C0: mov     eax, [esi+94h]
0x8DC0C6: mov     ecx, [eax+edi*4]
0x8DC0C9: test    ecx, ecx
0x8DC0CB: jz      short loc_8DC0D3
0x8DC0CD: mov     edx, [ecx]
0x8DC0CF: push    ebx
0x8DC0D0: call    dword ptr [edx+8]
0x8DC0D3: dec     edi
0x8DC0D4: jns     short loc_8DC0C0
0x8DC0D6: mov     edx, [esi+98h]
0x8DC0DC: dec     edx
0x8DC0DD: js      short loc_8DC11E
0x8DC0DF: nop
0x8DC0E0: mov     eax, [esi+94h]
0x8DC0E6: cmp     dword ptr [eax+edx*4], 0
0x8DC0EA: jnz     short loc_8DC11B
0x8DC0EC: mov     ebx, [esi+98h]
0x8DC0F2: dec     ebx
0x8DC0F3: mov     ecx, ebx
0x8DC0F5: cmp     edx, ecx
0x8DC0F7: mov     [esi+98h], ebx
0x8DC0FD: mov     eax, edx
0x8DC0FF: jge     short loc_8DC11B
0x8DC101: mov     ecx, [esi+94h]
0x8DC107: mov     edi, [ecx+eax*4+4]
0x8DC10B: lea     ecx, [ecx+eax*4]
0x8DC10E: mov     [ecx], edi
0x8DC110: mov     ecx, [esi+98h]
0x8DC116: inc     eax
0x8DC117: cmp     eax, ecx
0x8DC119: jl      short loc_8DC101
0x8DC11B: dec     edx
0x8DC11C: jns     short loc_8DC0E0
0x8DC11E: pop     edi
0x8DC11F: pop     esi
0x8DC120: pop     ebx
0x8DC121: retn
