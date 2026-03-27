0x57D200: push    esi
0x57D201: push    edi
0x57D202: mov     edi, ecx
0x57D204: mov     eax, [edi+130h]
0x57D20A: mov     esi, [eax+10h]
0x57D20D: test    esi, esi
0x57D20F: jz      short loc_57D223
0x57D211: mov     eax, esi
0x57D213: mov     esi, [esi+10h]
0x57D216: push    eax
0x57D217: call    FormHeapFree
0x57D21C: add     esp, 4
0x57D21F: test    esi, esi
0x57D221: jnz     short loc_57D211
0x57D223: mov     ecx, [edi+130h]
0x57D229: push    ecx
0x57D22A: call    FormHeapFree
0x57D22F: add     esp, 4
0x57D232: mov     dword ptr [edi+130h], 0
0x57D23C: pop     edi
0x57D23D: pop     esi
0x57D23E: retn
