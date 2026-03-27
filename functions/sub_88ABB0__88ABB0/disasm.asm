0x88ABB0: mov     eax, [esp+arg_0]
0x88ABB4: push    esi
0x88ABB5: mov     esi, [eax+10h]
0x88ABB8: test    esi, esi
0x88ABBA: jz      short loc_88AC0E
0x88ABBC: mov     edx, [esi]
0x88ABBE: mov     eax, [edx+4]
0x88ABC1: mov     ecx, esi
0x88ABC3: call    eax
0x88ABC5: test    eax, eax
0x88ABC7: jz      short loc_88ABDE
0x88ABC9: lea     esp, [esp+0]
0x88ABD0: cmp     eax, offset dword_BA7D84
0x88ABD5: jz      short loc_88AC10
0x88ABD7: mov     eax, [eax+4]
0x88ABDA: test    eax, eax
0x88ABDC: jnz     short loc_88ABD0
0x88ABDE: xor     al, al
0x88ABE0: neg     al
0x88ABE2: sbb     eax, eax
0x88ABE4: and     eax, esi
0x88ABE6: mov     esi, eax
0x88ABE8: jz      short loc_88AC0E
0x88ABEA: mov     eax, [esi+8]
0x88ABED: test    eax, eax
0x88ABEF: jz      short loc_88AC00
0x88ABF1: mov     ecx, [eax+50h]
0x88ABF4: mov     edx, [ecx]
0x88ABF6: mov     eax, [edx+8]
0x88ABF9: call    eax
0x88ABFB: cmp     eax, 7
0x88ABFE: jnz     short loc_88AC0E
0x88AC00: mov     edx, [esi]
0x88AC02: mov     eax, [edx+9Ch]
0x88AC08: push    6
0x88AC0A: mov     ecx, esi
0x88AC0C: call    eax
0x88AC0E: pop     esi
0x88AC0F: retn
0x88AC10: mov     al, 1
0x88AC12: jmp     short loc_88ABE0
