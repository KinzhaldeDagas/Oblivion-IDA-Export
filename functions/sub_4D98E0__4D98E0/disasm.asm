0x4D98E0: test    ecx, ecx
0x4D98E2: jz      short loc_4D9904
0x4D98E4: mov     eax, [ecx+8]
0x4D98E7: test    eax, eax
0x4D98E9: jz      short loc_4D9904
0x4D98EB: mov     eax, [eax+50h]
0x4D98EE: add     eax, 0D0h ; 'Ð'
0x4D98F3: push    eax
0x4D98F4: mov     eax, [esp+4+arg_0]
0x4D98F8: push    eax
0x4D98F9: call    sub_43F3E0
0x4D98FE: add     esp, 8
0x4D9901: retn    4
0x4D9904: mov     eax, offset stru_BA7A40
0x4D9909: push    eax
0x4D990A: mov     eax, [esp+4+arg_0]
0x4D990E: push    eax
0x4D990F: call    sub_43F3E0
0x4D9914: add     esp, 8
0x4D9917: retn    4
