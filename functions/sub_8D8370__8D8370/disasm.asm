0x8D8370: mov     eax, [esp+arg_4]
0x8D8374: dec     eax
0x8D8375: push    ebx
0x8D8376: mov     ebx, ecx
0x8D8378: js      short loc_8D83D5
0x8D837A: push    ebp
0x8D837B: push    esi
0x8D837C: mov     esi, [esp+0Ch+arg_0]
0x8D8380: push    edi
0x8D8381: mov     edi, [esp+10h+arg_8]
0x8D8385: lea     ebp, [eax+1]
0x8D8388: jmp     short loc_8D8390
0x8D838A: align 10h
0x8D8390: mov     ecx, [esi]
0x8D8392: movsx   eax, byte ptr [ecx+5]
0x8D8396: mov     edx, [esi+4]
0x8D8399: add     eax, ecx
0x8D839B: movsx   ecx, byte ptr [edx+5]
0x8D839F: add     ecx, edx
0x8D83A1: mov     edx, [edi]
0x8D83A3: push    ecx
0x8D83A4: push    eax
0x8D83A5: lea     eax, [esp+18h+arg_4]
0x8D83A9: push    eax
0x8D83AA: mov     ecx, edi
0x8D83AC: call    dword ptr [edx]
0x8D83AE: cmp     byte ptr [eax], 0
0x8D83B1: jz      short loc_8D83CC
0x8D83B3: mov     ecx, [esi]
0x8D83B5: movsx   eax, byte ptr [ecx+4]
0x8D83B9: mov     edx, [esi+4]
0x8D83BC: movsx   ecx, byte ptr [edx+4]
0x8D83C0: lea     eax, [ecx+eax*8]
0x8D83C3: mov     ecx, [ebx+eax*4]
0x8D83C6: mov     edx, [ecx]
0x8D83C8: push    esi
0x8D83C9: call    dword ptr [edx+8]
0x8D83CC: add     esi, 8
0x8D83CF: dec     ebp
0x8D83D0: jnz     short loc_8D8390
0x8D83D2: pop     edi
0x8D83D3: pop     esi
0x8D83D4: pop     ebp
0x8D83D5: pop     ebx
0x8D83D6: retn    0Ch
