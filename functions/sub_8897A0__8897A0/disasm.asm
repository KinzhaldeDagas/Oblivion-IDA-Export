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
