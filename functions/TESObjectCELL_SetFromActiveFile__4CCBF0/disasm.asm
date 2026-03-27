0x4CCBF0: mov     eax, dword ptr [esp+a2]
0x4CCBF4: push    esi
0x4CCBF5: push    eax; a2
0x4CCBF6: mov     esi, ecx
0x4CCBF8: call    TESForm_SetFromActiveFile
0x4CCBFD: mov     eax, [esi+8]
0x4CCC00: mov     ecx, eax
0x4CCC02: shr     ecx, 0Eh
0x4CCC05: test    cl, 1
0x4CCC08: jnz     short loc_4CCC48
0x4CCC0A: shr     eax, 1
0x4CCC0C: test    al, 1
0x4CCC0E: jz      short loc_4CCC48
0x4CCC10: test    byte ptr [esi+24h], 1
0x4CCC14: jnz     short loc_4CCC48
0x4CCC16: mov     edx, ds:0BA9DE4h
0x4CCC1C: mov     eax, large fs:2Ch
0x4CCC22: mov     ecx, [eax+edx*4]
0x4CCC25: cmp     byte ptr [ecx+184h], 0
0x4CCC2C: jnz     short loc_4CCC48
0x4CCC2E: mov     ecx, [esi+50h]
0x4CCC31: test    ecx, ecx
0x4CCC33: jz      short loc_4CCC48
0x4CCC35: mov     edx, [ecx]
0x4CCC37: pop     esi
0x4CCC38: mov     dword ptr [esp+a2], 1
0x4CCC40: mov     eax, [edx+90h]
0x4CCC46: jmp     eax
0x4CCC48: pop     esi
0x4CCC49: retn    4
