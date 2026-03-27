0x4CECD0: push    esi
0x4CECD1: push    edi
0x4CECD2: mov     edi, [esp+8+arg_0]
0x4CECD6: test    edi, edi
0x4CECD8: mov     esi, ecx
0x4CECDA: jz      loc_4CED67
0x4CECE0: push    esi; a2
0x4CECE1: mov     ecx, offset stru_B35C80; this
0x4CECE6: call    sub_496EA0
0x4CECEB: push    edi
0x4CECEC: lea     ecx, [esi+48h]
0x4CECEF: call    BSSimpleList_Remove
0x4CECF4: push    esi; a2
0x4CECF5: mov     ecx, offset stru_B35C80; this
0x4CECFA: call    sub_496F50
0x4CECFF: test    dword ptr [esi+8], 400h
0x4CED06: push    0
0x4CED08: jz      short loc_4CED2A
0x4CED0A: lea     ecx, [edi+44h]
0x4CED0D: call    sub_4247B0
0x4CED12: test    byte ptr [esi+24h], 1
0x4CED16: jnz     short loc_4CED67
0x4CED18: mov     ecx, [esi+50h]
0x4CED1B: test    ecx, ecx
0x4CED1D: jz      short loc_4CED67
0x4CED1F: push    edi
0x4CED20: call    sub_4F01F0
0x4CED25: pop     edi
0x4CED26: pop     esi
0x4CED27: retn    4
0x4CED2A: mov     eax, [edi]
0x4CED2C: mov     edx, [eax+194h]
0x4CED32: mov     ecx, edi
0x4CED34: call    edx
0x4CED36: mov     eax, [edi+8]
0x4CED39: shr     eax, 0Eh
0x4CED3C: test    al, 1
0x4CED3E: jnz     short loc_4CED67
0x4CED40: mov     ecx, edi; this
0x4CED42: call    TESObjectREFR_IsPersistent?
0x4CED47: test    al, al
0x4CED49: jnz     short loc_4CED67
0x4CED4B: mov     ecx, ds:0B33A98h
0x4CED51: cmp     [ecx+0CD4h], al
0x4CED57: jnz     short loc_4CED67
0x4CED59: mov     edx, [esi]
0x4CED5B: mov     eax, [edx+90h]
0x4CED61: push    1
0x4CED63: mov     ecx, esi
0x4CED65: call    eax
0x4CED67: pop     edi
0x4CED68: pop     esi
0x4CED69: retn    4
