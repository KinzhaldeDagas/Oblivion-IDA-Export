0x4D9920: test    ecx, ecx
0x4D9922: jz      short loc_4D9944
0x4D9924: mov     eax, [ecx+8]
0x4D9927: test    eax, eax
0x4D9929: jz      short loc_4D9944
0x4D992B: mov     eax, [eax+50h]
0x4D992E: add     eax, 0E0h ; 'à'
0x4D9933: push    eax
0x4D9934: mov     eax, [esp+4+arg_0]
0x4D9938: push    eax
0x4D9939: call    sub_4D68A0
0x4D993E: add     esp, 8
0x4D9941: retn    4
0x4D9944: mov     eax, offset stru_BA7A40
0x4D9949: push    eax
0x4D994A: mov     eax, [esp+4+arg_0]
0x4D994E: push    eax
0x4D994F: call    sub_4D68A0
0x4D9954: add     esp, 8
0x4D9957: retn    4
