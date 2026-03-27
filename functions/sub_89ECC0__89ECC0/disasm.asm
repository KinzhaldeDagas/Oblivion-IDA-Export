0x89ECC0: mov     eax, [ecx+10h]
0x89ECC3: test    eax, eax
0x89ECC5: jz      short loc_89ECF2
0x89ECC7: mov     eax, [eax+8]
0x89ECCA: test    eax, eax
0x89ECCC: jz      short loc_89ECD8
0x89ECCE: mov     eax, [eax+50h]
0x89ECD1: add     eax, 0D0h ; 'Ð'
0x89ECD6: jmp     short loc_89ECDD
0x89ECD8: mov     eax, offset stru_BA7A40
0x89ECDD: push    esi
0x89ECDE: mov     esi, [esp+4+arg_0]
0x89ECE2: push    eax
0x89ECE3: push    esi
0x89ECE4: call    sub_43F3E0
0x89ECE9: add     esp, 8
0x89ECEC: mov     eax, esi
0x89ECEE: pop     esi
0x89ECEF: retn    4
0x89ECF2: mov     ecx, ds:0B3F9A8h
0x89ECF8: mov     eax, [esp+arg_0]
0x89ECFC: mov     [eax], ecx
0x89ECFE: mov     edx, ds:0B3F9ACh
0x89ED04: mov     [eax+4], edx
0x89ED07: mov     ecx, ds:0B3F9B0h
0x89ED0D: mov     [eax+8], ecx
0x89ED10: retn    4
