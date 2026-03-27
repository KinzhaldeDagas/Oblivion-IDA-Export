0x4CC660: push    ecx
0x4CC661: push    ebx
0x4CC662: push    ebp
0x4CC663: push    esi
0x4CC664: mov     esi, ecx
0x4CC666: push    esi; a2
0x4CC667: mov     ecx, offset stru_B35C80; this
0x4CC66C: mov     [esp+14h+var_4], esi
0x4CC670: call    sub_496EA0
0x4CC675: lea     ebx, [esi+48h]
0x4CC678: xor     ebp, ebp
0x4CC67A: test    ebx, ebx
0x4CC67C: jz      short loc_4CC6D8
0x4CC67E: push    edi
0x4CC67F: nop
0x4CC680: cmp     dword ptr [ebx+4], 0
0x4CC684: jnz     short loc_4CC68B
0x4CC686: cmp     dword ptr [ebx], 0
0x4CC689: jz      short loc_4CC6D7
0x4CC68B: mov     edi, [ebx]
0x4CC68D: mov     eax, [edi]
0x4CC68F: mov     edx, [eax+170h]
0x4CC695: mov     ecx, edi
0x4CC697: call    edx
0x4CC699: movzx   eax, byte ptr [eax+4]
0x4CC69D: cmp     eax, 23h ; '#'
0x4CC6A0: jl      short loc_4CC6CE
0x4CC6A2: cmp     eax, 24h ; '$'
0x4CC6A5: jle     short loc_4CC6E8
0x4CC6A7: cmp     eax, 25h ; '%'
0x4CC6AA: jnz     short loc_4CC6CE
0x4CC6AC: mov     ecx, edi
0x4CC6AE: call    sub_4D7A50
0x4CC6B3: test    al, al
0x4CC6B5: jz      short loc_4CC6CE
0x4CC6B7: mov     eax, [edi]
0x4CC6B9: mov     edx, [eax+150h]
0x4CC6BF: push    0
0x4CC6C1: mov     ecx, edi
0x4CC6C3: call    edx
0x4CC6C5: push    0
0x4CC6C7: mov     ecx, edi
0x4CC6C9: call    sub_4D7A90
0x4CC6CE: mov     ebp, ebx
0x4CC6D0: mov     ebx, [ebx+4]
0x4CC6D3: test    ebx, ebx
0x4CC6D5: jnz     short loc_4CC680
0x4CC6D7: pop     edi
0x4CC6D8: push    esi; a2
0x4CC6D9: mov     ecx, offset stru_B35C80; this
0x4CC6DE: call    sub_496F50
0x4CC6E3: pop     esi
0x4CC6E4: pop     ebp
0x4CC6E5: pop     ebx
0x4CC6E6: pop     ecx
0x4CC6E7: retn
0x4CC6E8: mov     ecx, edi
0x4CC6EA: call    sub_4D7A50
0x4CC6EF: test    al, al
0x4CC6F1: jz      short loc_4CC6CE
0x4CC6F3: mov     eax, [edi]
0x4CC6F5: mov     edx, [eax+150h]
0x4CC6FB: push    0
0x4CC6FD: mov     ecx, edi
0x4CC6FF: call    edx
0x4CC701: push    0
0x4CC703: mov     ecx, edi
0x4CC705: call    sub_4D7A90
0x4CC70A: test    ebp, ebp
0x4CC70C: jz      short loc_4CC71B
0x4CC70E: push    edi
0x4CC70F: mov     ecx, ebp
0x4CC711: call    BSSimpleList_Remove
0x4CC716: mov     ebx, [ebp+4]
0x4CC719: jmp     short loc_4CC73D
0x4CC71B: mov     eax, [ebx+4]
0x4CC71E: test    eax, eax
0x4CC720: jz      short loc_4CC737
0x4CC722: mov     ecx, [eax+4]
0x4CC725: mov     [ebx+4], ecx
0x4CC728: mov     edx, [eax]
0x4CC72A: push    eax
0x4CC72B: mov     [ebx], edx
0x4CC72D: call    FormHeapFree
0x4CC732: add     esp, 4
0x4CC735: jmp     short loc_4CC73D
0x4CC737: mov     dword ptr [ebx], 0
0x4CC73D: mov     eax, [edi]
0x4CC73F: mov     edx, [eax+194h]
0x4CC745: push    0
0x4CC747: mov     ecx, edi
0x4CC749: call    edx
0x4CC74B: lea     ecx, [edi+44h]
0x4CC74E: call    sub_420480
0x4CC753: mov     esi, eax
0x4CC755: test    esi, esi
0x4CC757: jz      short loc_4CC7A2
0x4CC759: lea     esp, [esp+0]
0x4CC760: mov     ecx, esi
0x4CC762: call    BSSimpleList_IsEmpty
0x4CC767: test    al, al
0x4CC769: jnz     short loc_4CC7A2
0x4CC76B: mov     ecx, [esi]
0x4CC76D: push    0
0x4CC76F: add     ecx, 44h ; 'D'
0x4CC772: call    sub_4203E0
0x4CC777: mov     ecx, [esi]
0x4CC779: call    sub_4D6640
0x4CC77E: mov     eax, [esi+4]
0x4CC781: test    eax, eax
0x4CC783: jz      short loc_4CC79A
0x4CC785: mov     ecx, [eax+4]
0x4CC788: mov     [esi+4], ecx
0x4CC78B: mov     edx, [eax]
0x4CC78D: push    eax
0x4CC78E: mov     [esi], edx
0x4CC790: call    FormHeapFree
0x4CC795: add     esp, 4
0x4CC798: jmp     short loc_4CC760
0x4CC79A: mov     dword ptr [esi], 0
0x4CC7A0: jmp     short loc_4CC760
0x4CC7A2: mov     eax, [edi]
0x4CC7A4: mov     edx, [eax+10h]
0x4CC7A7: push    1
0x4CC7A9: mov     ecx, edi
0x4CC7AB: call    edx
0x4CC7AD: mov     esi, [esp+14h+var_4]
0x4CC7B1: jmp     loc_4CC6D3
