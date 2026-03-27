0x43B090: push    esi
0x43B091: mov     esi, ecx
0x43B093: cmp     dword ptr [esi+0Ch], 6
0x43B097: jz      short loc_43B0C2
0x43B099: call    sub_43B000
0x43B09E: mov     ecx, [esi+38h]
0x43B0A1: test    ecx, ecx
0x43B0A3: jz      short loc_43B0B5
0x43B0A5: mov     eax, [esi+20h]
0x43B0A8: mov     edx, [eax+104h]
0x43B0AE: push    edx
0x43B0AF: push    eax
0x43B0B0: call    sub_4353D0
0x43B0B5: mov     ecx, [esi+3Ch]
0x43B0B8: test    ecx, ecx
0x43B0BA: jz      short loc_43B0C2
0x43B0BC: pop     esi
0x43B0BD: jmp     sub_437B60
0x43B0C2: pop     esi
0x43B0C3: retn
