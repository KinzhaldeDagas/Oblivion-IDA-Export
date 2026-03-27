0x480820: push    esi
0x480821: mov     esi, [esp+4+arg_0]
0x480825: test    esi, esi
0x480827: jnz     short loc_48082D
0x480829: xor     al, al
0x48082B: pop     esi
0x48082C: retn
0x48082D: push    offset unk_B3CE30
0x480832: mov     ecx, esi
0x480834: call    sub_700010
0x480839: test    eax, eax
0x48083B: jz      short loc_480841
0x48083D: mov     al, 1
0x48083F: pop     esi
0x480840: retn
0x480841: mov     eax, [esi]
0x480843: mov     edx, [eax+8]
0x480846: push    edi
0x480847: mov     ecx, esi
0x480849: call    edx
0x48084B: mov     edi, eax
0x48084D: test    edi, edi
0x48084F: jz      short loc_48088A
0x480851: movzx   eax, word ptr [edi+0B6h]
0x480858: xor     esi, esi
0x48085A: test    eax, eax
0x48085C: jbe     short loc_48088A
0x48085E: cmp     eax, esi
0x480860: ja      short loc_480866
0x480862: xor     eax, eax
0x480864: jmp     short loc_48086F
0x480866: mov     eax, [edi+0B0h]
0x48086C: mov     eax, [eax+esi*4]
0x48086F: push    eax
0x480870: call    sub_480820
0x480875: add     esp, 4
0x480878: test    al, al
0x48087A: jnz     short loc_48088F
0x48087C: movzx   eax, word ptr [edi+0B6h]
0x480883: add     esi, 1
0x480886: cmp     eax, esi
0x480888: ja      short loc_480866
0x48088A: pop     edi
0x48088B: xor     al, al
0x48088D: pop     esi
0x48088E: retn
0x48088F: pop     edi
0x480890: mov     al, 1
0x480892: pop     esi
0x480893: retn
