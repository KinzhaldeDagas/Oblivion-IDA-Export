0x480FD0: push    esi
0x480FD1: mov     esi, [esp+4+arg_0]
0x480FD5: cmp     esi, [esp+4+arg_4]
0x480FD9: jnz     short loc_480FDF
0x480FDB: mov     al, 1
0x480FDD: pop     esi
0x480FDE: retn
0x480FDF: test    esi, esi
0x480FE1: jnz     short loc_480FE7
0x480FE3: xor     al, al
0x480FE5: pop     esi
0x480FE6: retn
0x480FE7: mov     eax, [esi]
0x480FE9: mov     edx, [eax+10h]
0x480FEC: push    ebx
0x480FED: push    ebp
0x480FEE: mov     ecx, esi
0x480FF0: call    edx
0x480FF2: test    eax, eax
0x480FF4: mov     ebp, [esp+0Ch+arg_8]
0x480FF8: mov     ebx, [esp+0Ch+arg_10]
0x480FFC: jz      short loc_48103F
0x480FFE: cmp     byte ptr [esp+0Ch+arg_C], 0
0x481003: jz      short loc_481020
0x481005: mov     eax, [esi+8]
0x481008: test    eax, eax
0x48100A: jz      short loc_48103F
0x48100C: push    5; MaxCount
0x48100E: push    offset aDecal; "Decal"
0x481013: push    eax; Str1
0x481014: call    _strncmp
0x481019: add     esp, 0Ch
0x48101C: test    eax, eax
0x48101E: jz      short loc_48103F
0x481020: test    bl, bl
0x481022: jz      short loc_48103B
0x481024: mov     eax, [esi+8]
0x481027: push    7; MaxCount
0x481029: push    offset aBlock_1; "Block ("
0x48102E: push    eax; Str1
0x48102F: call    _strncmp
0x481034: add     esp, 0Ch
0x481037: test    eax, eax
0x481039: jnz     short loc_48103F
0x48103B: add     dword ptr [ebp+0], 1
0x48103F: mov     eax, [esi]
0x481041: mov     edx, [eax+8]
0x481044: push    edi
0x481045: mov     ecx, esi
0x481047: call    edx
0x481049: mov     edi, eax
0x48104B: test    edi, edi
0x48104D: jz      short loc_481094
0x48104F: movzx   eax, word ptr [edi+0B6h]
0x481056: xor     esi, esi
0x481058: test    eax, eax
0x48105A: jbe     short loc_481094
0x48105C: cmp     eax, esi
0x48105E: ja      short loc_481064
0x481060: xor     eax, eax
0x481062: jmp     short loc_48106D
0x481064: mov     eax, [edi+0B0h]
0x48106A: mov     eax, [eax+esi*4]
0x48106D: mov     ecx, [esp+10h+arg_C]
0x481071: mov     edx, [esp+10h+arg_4]
0x481075: push    ebx
0x481076: push    ecx
0x481077: push    ebp
0x481078: push    edx
0x481079: push    eax
0x48107A: call    sub_480FD0
0x48107F: add     esp, 14h
0x481082: test    al, al
0x481084: jnz     short loc_481096
0x481086: movzx   eax, word ptr [edi+0B6h]
0x48108D: add     esi, 1
0x481090: cmp     eax, esi
0x481092: ja      short loc_481064
0x481094: xor     al, al
0x481096: pop     edi
0x481097: pop     ebp
0x481098: pop     ebx
0x481099: pop     esi
0x48109A: retn
