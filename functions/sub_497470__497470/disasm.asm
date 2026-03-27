0x497470: push    ebx
0x497471: push    ebp
0x497472: mov     ebp, [esp+8+a1]
0x497476: push    edi
0x497477: mov     edi, ecx
0x497479: mov     ecx, ebp
0x49747B: xor     bl, bl
0x49747D: call    TESFile_GetChunkType
0x497482: cmp     eax, 44475258h
0x497487: jnz     short loc_4974ED
0x497489: push    esi
0x49748A: mov     esi, [ebp+254h]
0x497490: mov     eax, 24924925h
0x497495: mul     esi
0x497497: mov     eax, esi
0x497499: sub     eax, edx
0x49749B: shr     eax, 1
0x49749D: add     eax, edx
0x49749F: shr     eax, 4
0x4974A2: movzx   ecx, al
0x4974A5: mov     [edi], al
0x4974A7: xor     edx, edx
0x4974A9: mov     eax, esi
0x4974AB: div     ecx
0x4974AD: test    edx, edx
0x4974AF: jnz     short loc_4974E1
0x4974B1: mov     eax, ecx
0x4974B3: xor     ebx, ebx
0x4974B5: mov     ecx, 1Ch
0x4974BA: mul     ecx
0x4974BC: seto    bl
0x4974BF: neg     ebx
0x4974C1: or      ebx, eax
0x4974C3: push    ebx; Size
0x4974C4: call    FormHeapAlloc
0x4974C9: add     esp, 4
0x4974CC: push    esi; a4
0x4974CD: push    eax; Dst
0x4974CE: mov     ecx, ebp; a1
0x4974D0: mov     [edi+4], eax
0x4974D3: call    TESFile_GetChunkData
0x4974D8: pop     esi
0x4974D9: pop     edi
0x4974DA: pop     ebp
0x4974DB: mov     al, 1
0x4974DD: pop     ebx
0x4974DE: retn    4
0x4974E1: pop     esi
0x4974E2: mov     byte ptr [edi], 0
0x4974E5: pop     edi
0x4974E6: pop     ebp
0x4974E7: mov     al, bl
0x4974E9: pop     ebx
0x4974EA: retn    4
0x4974ED: pop     edi
0x4974EE: pop     ebp
0x4974EF: mov     al, bl
0x4974F1: pop     ebx
0x4974F2: retn    4
