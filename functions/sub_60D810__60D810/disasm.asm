0x60D810: push    esi
0x60D811: push    edi
0x60D812: mov     edi, [esp+8+arg_0]
0x60D816: test    edi, 20000h
0x60D81C: mov     esi, ecx
0x60D81E: jz      short loc_60D858
0x60D820: mov     eax, [esi+8]
0x60D823: test    eax, eax
0x60D825: jz      short loc_60D858
0x60D827: mov     eax, [eax+0Ch]
0x60D82A: mov     ecx, ds:0B33A98h
0x60D830: push    eax; _DWORD
0x60D831: call    TESDataHandler_IsFormIDCreated?
0x60D836: test    al, al
0x60D838: jz      short loc_60D858
0x60D83A: test    edi, 10000h
0x60D840: jnz     short loc_60D851
0x60D842: mov     eax, [esi+8]
0x60D845: mov     ecx, ds:0B33B00h
0x60D84B: push    eax
0x60D84C: call    sub_45C7A0
0x60D851: mov     dword ptr [esi+8], 0
0x60D858: pop     edi
0x60D859: pop     esi
0x60D85A: retn    8
