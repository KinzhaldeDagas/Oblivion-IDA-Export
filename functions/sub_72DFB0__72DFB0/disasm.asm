0x72DFB0: push    ebx
0x72DFB1: push    ebp
0x72DFB2: push    esi
0x72DFB3: push    edi
0x72DFB4: mov     edi, [esp+10h+arg_0]
0x72DFB8: xor     esi, esi
0x72DFBA: cmp     [edi+8], esi
0x72DFBD: jbe     short loc_72DFF8
0x72DFBF: mov     ebp, [esp+10h+arg_8]
0x72DFC3: mov     ebx, [esp+10h+arg_4]
0x72DFC7: jmp     short loc_72DFD0
0x72DFC9: align 10h
0x72DFD0: mov     al, [esp+10h+arg_10]
0x72DFD4: mov     ecx, [esp+10h+arg_C]
0x72DFD8: cmp     [esi+ecx], al
0x72DFDB: jnz     short loc_72DFF0
0x72DFDD: mov     edx, [edi]
0x72DFDF: mov     ecx, [edx+esi*4]
0x72DFE2: lea     eax, [edx+esi*4]
0x72DFE5: push    ebp
0x72DFE6: push    ebx
0x72DFE7: call    sub_72D3E0
0x72DFEC: test    al, al
0x72DFEE: jnz     short loc_72E000
0x72DFF0: add     esi, 1
0x72DFF3: cmp     esi, [edi+8]
0x72DFF6: jb      short loc_72DFD0
0x72DFF8: pop     edi
0x72DFF9: pop     esi
0x72DFFA: pop     ebp
0x72DFFB: or      eax, 0FFFFFFFFh
0x72DFFE: pop     ebx
0x72DFFF: retn
0x72E000: mov     eax, [esp+10h+arg_C]
0x72E004: pop     edi
0x72E005: mov     byte ptr [esi+eax], 1
0x72E009: mov     eax, esi
0x72E00B: pop     esi
0x72E00C: pop     ebp
0x72E00D: pop     ebx
0x72E00E: retn
