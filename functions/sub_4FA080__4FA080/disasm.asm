0x4FA080: push    esi
0x4FA081: mov     esi, ecx
0x4FA083: mov     eax, [esi+0Ch]
0x4FA086: test    eax, eax
0x4FA088: jz      short loc_4FA0DC
0x4FA08A: cmp     dword ptr [eax], 0
0x4FA08D: jz      short loc_4FA0C9
0x4FA08F: push    edi
0x4FA090: mov     eax, [esi+0Ch]
0x4FA093: mov     ecx, [eax+4]
0x4FA096: test    ecx, ecx
0x4FA098: mov     edi, [eax]
0x4FA09A: jz      short loc_4FA0B1
0x4FA09C: mov     edx, [ecx+4]
0x4FA09F: mov     [eax+4], edx
0x4FA0A2: mov     edx, [ecx]
0x4FA0A4: push    ecx
0x4FA0A5: mov     [eax], edx
0x4FA0A7: call    FormHeapFree
0x4FA0AC: add     esp, 4
0x4FA0AF: jmp     short loc_4FA0B7
0x4FA0B1: mov     dword ptr [eax], 0
0x4FA0B7: push    edi
0x4FA0B8: call    FormHeapFree
0x4FA0BD: mov     eax, [esi+0Ch]
0x4FA0C0: add     esp, 4
0x4FA0C3: cmp     dword ptr [eax], 0
0x4FA0C6: jnz     short loc_4FA090
0x4FA0C8: pop     edi
0x4FA0C9: mov     ecx, [esi+0Ch]
0x4FA0CC: push    ecx
0x4FA0CD: call    FormHeapFree
0x4FA0D2: add     esp, 4
0x4FA0D5: mov     dword ptr [esi+0Ch], 0
0x4FA0DC: pop     esi
0x4FA0DD: retn
