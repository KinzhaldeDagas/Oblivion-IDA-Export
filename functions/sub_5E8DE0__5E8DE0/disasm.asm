0x5E8DE0: push    esi
0x5E8DE1: mov     esi, [esp+4+arg_0]
0x5E8DE5: test    esi, esi
0x5E8DE7: push    edi
0x5E8DE8: mov     edi, ecx
0x5E8DEA: jz      short loc_5E8E1E
0x5E8DEC: mov     eax, [esi+0Ch]
0x5E8DEF: mov     ecx, ds:0B33A98h
0x5E8DF5: push    eax; _DWORD
0x5E8DF6: call    TESDataHandler_IsFormIDCreated?
0x5E8DFB: test    al, al
0x5E8DFD: jz      short loc_5E8E1E
0x5E8DFF: mov     al, [esi+20h]
0x5E8E02: cmp     al, 13h
0x5E8E04: mov     ecx, 20000h
0x5E8E09: jz      short loc_5E8E0F
0x5E8E0B: cmp     al, 11h
0x5E8E0D: jnz     short loc_5E8E14
0x5E8E0F: mov     ecx, 30000h
0x5E8E14: mov     eax, [edi]
0x5E8E16: mov     edx, [eax+40h]
0x5E8E19: push    ecx
0x5E8E1A: mov     ecx, edi
0x5E8E1C: call    edx
0x5E8E1E: pop     edi
0x5E8E1F: pop     esi
0x5E8E20: retn    4
