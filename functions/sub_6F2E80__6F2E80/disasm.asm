0x6F2E80: push    ebx
0x6F2E81: mov     ebx, [esp+4+arg_4]
0x6F2E85: push    esi
0x6F2E86: mov     esi, [esp+8+arg_0]
0x6F2E8A: cmp     esi, ebx
0x6F2E8C: jz      short loc_6F2EC1
0x6F2E8E: push    edi
0x6F2E8F: mov     edi, [esp+0Ch+arg_8]
0x6F2E93: push    0FFFFFFFFh
0x6F2E95: push    0
0x6F2E97: push    esi
0x6F2E98: mov     ecx, edi
0x6F2E9A: call    sub_414420
0x6F2E9F: mov     eax, [esi+1Ch]
0x6F2EA2: lea     ecx, [esi+20h]
0x6F2EA5: push    ecx
0x6F2EA6: lea     ecx, [edi+20h]
0x6F2EA9: mov     [edi+1Ch], eax
0x6F2EAC: call    sub_6F2770
0x6F2EB1: add     esi, 30h ; '0'
0x6F2EB4: add     edi, 30h ; '0'
0x6F2EB7: cmp     esi, ebx
0x6F2EB9: jnz     short loc_6F2E93
0x6F2EBB: mov     eax, edi
0x6F2EBD: pop     edi
0x6F2EBE: pop     esi
0x6F2EBF: pop     ebx
0x6F2EC0: retn
0x6F2EC1: mov     eax, [esp+8+arg_8]
0x6F2EC5: pop     esi
0x6F2EC6: pop     ebx
0x6F2EC7: retn
