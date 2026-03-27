0x88AA80: mov     eax, [esp+arg_0]
0x88AA84: push    esi
0x88AA85: mov     esi, [eax+10h]
0x88AA88: test    esi, esi
0x88AA8A: jz      short loc_88AADF
0x88AA8C: mov     edx, [esi]
0x88AA8E: mov     eax, [edx+4]
0x88AA91: mov     ecx, esi
0x88AA93: call    eax
0x88AA95: test    eax, eax
0x88AA97: jz      short loc_88AAAE
0x88AA99: lea     esp, [esp+0]
0x88AAA0: cmp     eax, offset dword_BA7D84
0x88AAA5: jz      short loc_88AAE1
0x88AAA7: mov     eax, [eax+4]
0x88AAAA: test    eax, eax
0x88AAAC: jnz     short loc_88AAA0
0x88AAAE: xor     al, al
0x88AAB0: neg     al
0x88AAB2: sbb     eax, eax
0x88AAB4: and     eax, esi
0x88AAB6: jz      short loc_88AADF
0x88AAB8: mov     ecx, [eax+8]
0x88AABB: test    ecx, ecx
0x88AABD: mov     esi, [esp+4+arg_4]
0x88AAC1: jz      short loc_88AADB
0x88AAC3: lea     edx, [esp+4+arg_0]
0x88AAC7: push    edx
0x88AAC8: call    sub_8A63F0
0x88AACD: cmp     byte ptr [eax], 0
0x88AAD0: setnz   al
0x88AAD3: test    al, al
0x88AAD5: jz      short loc_88AADB
0x88AAD7: add     dword ptr [esi+0Ch], 1
0x88AADB: mov     byte ptr [esi+4], 0
0x88AADF: pop     esi
0x88AAE0: retn
0x88AAE1: mov     al, 1
0x88AAE3: jmp     short loc_88AAB0
