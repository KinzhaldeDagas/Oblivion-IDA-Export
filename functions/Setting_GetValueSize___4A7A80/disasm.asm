0x4A7A80: mov     edx, [ecx+4]
0x4A7A83: push    esi
0x4A7A84: xor     esi, esi
0x4A7A86: test    edx, edx
0x4A7A88: jz      short Setting_GetValueSize?___def_4A7A9C; jumptable 004A7A9C default case, cases 84-96,100,101,103,106-113,116
0x4A7A8A: movsx   eax, byte ptr [edx]
0x4A7A8D: add     eax, 0FFFFFFADh; switch 35 cases
0x4A7A90: cmp     eax, 22h
0x4A7A93: ja      short Setting_GetValueSize?___def_4A7A9C; jumptable 004A7A9C default case, cases 84-96,100,101,103,106-113,116
0x4A7A95: movzx   eax, ds:byte_4A7AE4[eax]
0x4A7A9C: jmp     ds:jpt_4A7A9C[eax*4]; switch jump
0x4A7AA3: mov     esi, 1; jumptable 004A7A9C cases 98,99,104
0x4A7AA8: mov     eax, esi
0x4A7AAA: pop     esi
0x4A7AAB: retn
0x4A7AAC: mov     esi, 4; jumptable 004A7A9C cases 97,102,105,114,117
0x4A7AB1: mov     eax, esi
0x4A7AB3: pop     esi
0x4A7AB4: retn
0x4A7AB5: mov     eax, [ecx]; jumptable 004A7A9C cases 83,115
0x4A7AB7: test    eax, eax
0x4A7AB9: jz      short Setting_GetValueSize?___def_4A7A9C; jumptable 004A7A9C default case, cases 84-96,100,101,103,106-113,116
0x4A7ABB: lea     edx, [eax+1]
0x4A7ABE: mov     edi, edi
0x4A7AC0: mov     cl, [eax]
0x4A7AC2: add     eax, 1
0x4A7AC5: test    cl, cl
0x4A7AC7: jnz     short loc_4A7AC0
0x4A7AC9: sub     eax, edx
0x4A7ACB: lea     esi, [eax+1]
0x4A7ACE: mov     eax, esi; jumptable 004A7A9C default case, cases 84-96,100,101,103,106-113,116
0x4A7AD0: pop     esi
0x4A7AD1: retn
