0x4753F0: push    esi
0x4753F1: mov     esi, ecx
0x4753F3: mov     eax, [esi+0D0h]
0x4753F9: test    eax, eax
0x4753FB: jz      short loc_47543B
0x4753FD: cmp     dword ptr [eax], 1
0x475400: jnz     short loc_47543B
0x475402: mov     eax, [eax+8]
0x475405: push    0
0x475407: push    eax
0x475408: call    ??0AnimSequenceSingle@@QAE@XZ; AnimSequenceSingle::AnimSequenceSingle(void)
0x47540D: test    al, al
0x47540F: jz      short loc_47543B
0x475411: push    edi
0x475412: mov     edi, [esi+0D0h]
0x475418: test    edi, edi
0x47541A: jz      short loc_47542C
0x47541C: mov     ecx, edi
0x47541E: call    sub_4729F0
0x475423: push    edi
0x475424: call    FormHeapFree
0x475429: add     esp, 4
0x47542C: pop     edi
0x47542D: mov     dword ptr [esi+0D0h], 0
0x475437: mov     al, 1
0x475439: pop     esi
0x47543A: retn
0x47543B: xor     al, al
0x47543D: pop     esi
0x47543E: retn
