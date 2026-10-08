0x8897A0: mov     ecx, ds:0BA7A00h
0x8897A6: test    ecx, ecx
0x8897A8: jz      short loc_8897B3
0x8897AA: mov     eax, [ecx]
0x8897AC: mov     edx, [eax+10h]
0x8897AF: push    1
0x8897B1: call    edx
0x8897B3: mov     ecx, ds:0BA8038h
0x8897B9: test    ecx, ecx
0x8897BB: jz      short loc_8897C6
0x8897BD: mov     eax, [ecx]
0x8897BF: mov     edx, [eax+8]
0x8897C2: push    1
0x8897C4: call    edx
0x8897C6: call    sub_8905B0
0x8897CB: call    sub_891010
0x8897D0: mov     eax, ds:0BA7904h
0x8897D5: test    eax, eax
0x8897D7: jz      short loc_889802
0x8897D9: cmp     word ptr [eax+4], 0
0x8897DE: mov     ecx, eax
0x8897E0: jz      short loc_8897F8
0x8897E2: add     word ptr [eax+6], 0FFFFh
0x8897E7: add     eax, 6
0x8897EA: cmp     word ptr [eax], 0
0x8897EE: jnz     short loc_8897F8
0x8897F0: mov     eax, [ecx]
0x8897F2: mov     edx, [eax]
0x8897F4: push    1
0x8897F6: call    edx
0x8897F8: mov     dword ptr ds:0BA7904h, 0
0x889802: jmp     loc_8BBB90
0x8BBB90: cmp     byte ptr ds:0BA8040h, 1
0x8BBB97: jnz     loc_8BBC5C
0x8BBB9D: call    sub_8BB990
0x8BBBA2: mov     eax, ds:0BA7FB0h
0x8BBBA7: test    eax, eax
0x8BBBA9: jz      short loc_8BBBC6
0x8BBBAB: cmp     word ptr [eax+4], 0
0x8BBBB0: mov     ecx, eax
0x8BBBB2: jz      short loc_8BBBC6
0x8BBBB4: add     eax, 6
0x8BBBB7: dec     word ptr [eax]
0x8BBBBA: cmp     word ptr [eax], 0
0x8BBBBE: jnz     short loc_8BBBC6
0x8BBBC0: mov     eax, [ecx]
0x8BBBC2: push    1
0x8BBBC4: call    dword ptr [eax]
0x8BBBC6: mov     eax, ds:0BA7FB4h
0x8BBBCB: test    eax, eax
0x8BBBCD: mov     dword ptr ds:0BA7FB0h, 0
0x8BBBD7: jz      short loc_8BBBF4
0x8BBBD9: cmp     word ptr [eax+4], 0
0x8BBBDE: mov     ecx, eax
0x8BBBE0: jz      short loc_8BBBF4
0x8BBBE2: add     eax, 6
0x8BBBE5: dec     word ptr [eax]
0x8BBBE8: cmp     word ptr [eax], 0
0x8BBBEC: jnz     short loc_8BBBF4
0x8BBBEE: mov     edx, [ecx]
0x8BBBF0: push    1
0x8BBBF2: call    dword ptr [edx]
0x8BBBF4: mov     dword ptr ds:0BA7FB4h, 0
0x8BBBFE: call    sub_8BAA10
0x8BBC03: mov     ecx, large fs:2Ch
0x8BBC0A: mov     eax, ds:0BA9DE4h
0x8BBC0F: mov     edx, [ecx+eax*4]
0x8BBC12: mov     ecx, [edx+19Ch]
0x8BBC18: test    ecx, ecx
0x8BBC1A: jnz     short loc_8BBC22
0x8BBC1C: mov     ecx, ds:0BA7D9Ch
0x8BBC22: mov     eax, [ecx]
0x8BBC24: call    dword ptr [eax+4]
0x8BBC27: push    0
0x8BBC29: call    sub_8A7260
0x8BBC2E: mov     ecx, ds:0BA7D9Ch
0x8BBC34: add     esp, 4
0x8BBC37: test    ecx, ecx
0x8BBC39: jz      short loc_8BBC4B
0x8BBC3B: mov     edx, [ecx]
0x8BBC3D: call    dword ptr [edx+4]
0x8BBC40: mov     ecx, ds:0BA7D9Ch
0x8BBC46: call    sub_8A7210
0x8BBC4B: push    0
0x8BBC4D: call    sub_8A70F0
0x8BBC52: add     esp, 4
0x8BBC55: mov     byte ptr ds:0BA8040h, 0
0x8BBC5C: xor     eax, eax
0x8BBC5E: retn
