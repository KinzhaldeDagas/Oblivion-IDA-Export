0x4FA020: push    esi
0x4FA021: mov     esi, ecx
0x4FA023: mov     eax, [esi+8]
0x4FA026: test    eax, eax
0x4FA028: jz      short loc_4FA07C
0x4FA02A: cmp     dword ptr [eax], 0
0x4FA02D: jz      short loc_4FA069
0x4FA02F: push    edi
0x4FA030: mov     eax, [esi+8]
0x4FA033: mov     ecx, [eax+4]
0x4FA036: test    ecx, ecx
0x4FA038: mov     edi, [eax]
0x4FA03A: jz      short loc_4FA051
0x4FA03C: mov     edx, [ecx+4]
0x4FA03F: mov     [eax+4], edx
0x4FA042: mov     edx, [ecx]
0x4FA044: push    ecx
0x4FA045: mov     [eax], edx
0x4FA047: call    FormHeapFree
0x4FA04C: add     esp, 4
0x4FA04F: jmp     short loc_4FA057
0x4FA051: mov     dword ptr [eax], 0
0x4FA057: push    edi
0x4FA058: call    FormHeapFree
0x4FA05D: mov     eax, [esi+8]
0x4FA060: add     esp, 4
0x4FA063: cmp     dword ptr [eax], 0
0x4FA066: jnz     short loc_4FA030
0x4FA068: pop     edi
0x4FA069: mov     ecx, [esi+8]
0x4FA06C: push    ecx
0x4FA06D: call    FormHeapFree
0x4FA072: add     esp, 4
0x4FA075: mov     dword ptr [esi+8], 0
0x4FA07C: pop     esi
0x4FA07D: retn
