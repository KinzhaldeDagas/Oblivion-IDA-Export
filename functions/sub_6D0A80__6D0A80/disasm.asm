0x6D0A80: push    ebp
0x6D0A81: mov     ebp, [esp+4+arg_0]
0x6D0A85: test    ebp, ebp
0x6D0A87: push    edi
0x6D0A88: mov     edi, ecx
0x6D0A8A: jnz     short loc_6D0A97
0x6D0A8C: mov     ax, ds:0A7A160h
0x6D0A92: pop     edi
0x6D0A93: pop     ebp
0x6D0A94: retn    4
0x6D0A97: push    ebx
0x6D0A98: push    esi
0x6D0A99: xor     ebx, ebx
0x6D0A9B: call    sub_6D0690
0x6D0AA0: test    eax, eax
0x6D0AA2: jbe     short loc_6D0ADF
0x6D0AA4: xor     esi, esi
0x6D0AA6: mov     eax, [edi+50h]
0x6D0AA9: cmp     esi, [eax+8]
0x6D0AAC: jnb     short loc_6D0AB9
0x6D0AAE: mov     edx, [eax+10h]
0x6D0AB1: lea     ecx, [esi+esi*2]
0x6D0AB4: lea     ecx, [edx+ecx*4]
0x6D0AB7: jmp     short loc_6D0ABB
0x6D0AB9: xor     ecx, ecx
0x6D0ABB: push    ebp
0x6D0ABC: call    TESHealthForm_GetHealth
0x6D0AC1: push    eax
0x6D0AC2: call    j_CRT_strcmp
0x6D0AC7: add     esp, 8
0x6D0ACA: test    eax, eax
0x6D0ACC: jz      short loc_6D0AEC
0x6D0ACE: add     ebx, 1
0x6D0AD1: mov     ecx, edi
0x6D0AD3: movzx   esi, bx
0x6D0AD6: call    sub_6D0690
0x6D0ADB: cmp     esi, eax
0x6D0ADD: jb      short loc_6D0AA6
0x6D0ADF: mov     ax, ds:0A7A160h
0x6D0AE5: pop     esi
0x6D0AE6: pop     ebx
0x6D0AE7: pop     edi
0x6D0AE8: pop     ebp
0x6D0AE9: retn    4
0x6D0AEC: pop     esi
0x6D0AED: mov     ax, bx
0x6D0AF0: pop     ebx
0x6D0AF1: pop     edi
0x6D0AF2: pop     ebp
0x6D0AF3: retn    4
