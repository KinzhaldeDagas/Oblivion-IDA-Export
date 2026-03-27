0x6747C0: push    esi
0x6747C1: lea     esi, [ecx+60h]
0x6747C4: mov     eax, esi
0x6747C6: xor     ecx, ecx
0x6747C8: test    eax, eax
0x6747CA: jz      short loc_674810
0x6747CC: lea     esp, [esp+0]
0x6747D0: cmp     dword ptr [eax], 0
0x6747D3: jz      short loc_6747D8
0x6747D5: add     ecx, 1
0x6747D8: mov     eax, [eax+4]
0x6747DB: test    eax, eax
0x6747DD: jnz     short loc_6747D0
0x6747DF: cmp     ecx, ds:0B36CD0h
0x6747E5: mov     eax, esi
0x6747E7: jbe     short loc_674810
0x6747E9: test    eax, eax
0x6747EB: jz      short loc_6747C4
0x6747ED: lea     ecx, [ecx+0]
0x6747F0: cmp     dword ptr [eax], 0
0x6747F3: jz      short loc_6747C4
0x6747F5: mov     ecx, [eax+4]
0x6747F8: test    ecx, ecx
0x6747FA: jz      short loc_674804
0x6747FC: mov     eax, ecx
0x6747FE: test    eax, eax
0x674800: jnz     short loc_6747F0
0x674802: jmp     short loc_6747C4
0x674804: mov     eax, [eax]
0x674806: push    eax
0x674807: mov     ecx, esi
0x674809: call    BSSimpleList_Remove
0x67480E: jmp     short loc_6747C4
0x674810: pop     esi
0x674811: retn
