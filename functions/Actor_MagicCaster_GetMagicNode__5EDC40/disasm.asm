0x5EDC40: push    esi
0x5EDC41: mov     esi, ecx
0x5EDC43: mov     eax, [esi-5Ch]
0x5EDC46: mov     edx, [eax+154h]
0x5EDC4C: push    edi
0x5EDC4D: lea     edi, [esi-5Ch]
0x5EDC50: mov     ecx, edi
0x5EDC52: call    edx
0x5EDC54: test    eax, eax
0x5EDC56: jz      short loc_5EDCCE
0x5EDC58: mov     ecx, ds:0B333C4h
0x5EDC5E: add     esi, 0FFFFFFA4h
0x5EDC61: cmp     esi, ecx
0x5EDC63: jnz     short loc_5EDC92
0x5EDC65: push    0
0x5EDC67: call    PlayerCharacter_GetPlayerNode
0x5EDC6C: test    eax, eax
0x5EDC6E: jz      short loc_5EDC92
0x5EDC70: mov     ecx, ds:0B333C4h
0x5EDC76: push    0
0x5EDC78: call    PlayerCharacter_GetPlayerNode
0x5EDC7D: test    byte ptr [eax+18h], 1
0x5EDC81: jz      short loc_5EDC92
0x5EDC83: mov     ecx, ds:0B333C4h; this
0x5EDC89: push    1; a2
0x5EDC8B: call    Player_GetAnimData
0x5EDC90: jmp     short loc_5EDC9E
0x5EDC92: mov     eax, [edi]
0x5EDC94: mov     edx, [eax+164h]
0x5EDC9A: mov     ecx, edi
0x5EDC9C: call    edx
0x5EDC9E: test    eax, eax
0x5EDCA0: jz      short loc_5EDCCE
0x5EDCA2: mov     eax, [eax+98h]
0x5EDCA8: test    eax, eax
0x5EDCAA: jz      short loc_5EDCCE
0x5EDCAC: mov     ecx, [eax+7Ch]
0x5EDCAF: test    ecx, ecx
0x5EDCB1: jz      short loc_5EDCCE
0x5EDCB3: mov     eax, [ecx]
0x5EDCB5: mov     edx, [eax+4Ch]
0x5EDCB8: push    offset aMagicnode; "magicNode"
0x5EDCBD: call    edx
0x5EDCBF: test    eax, eax
0x5EDCC1: jz      short loc_5EDCCE
0x5EDCC3: mov     edx, [eax]
0x5EDCC5: pop     edi
0x5EDCC6: mov     ecx, eax
0x5EDCC8: mov     eax, [edx+8]
0x5EDCCB: pop     esi
0x5EDCCC: jmp     eax
0x5EDCCE: pop     edi
0x5EDCCF: xor     eax, eax
0x5EDCD1: pop     esi
0x5EDCD2: retn
