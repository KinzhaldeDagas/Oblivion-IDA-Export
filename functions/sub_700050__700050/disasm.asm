0x700050: push    ebx
0x700051: push    esi
0x700052: mov     esi, [esp+8+arg_0]
0x700056: push    edi
0x700057: push    esi
0x700058: mov     edi, ecx
0x70005A: call    nullsub_returnvVoid_1arg
0x70005F: cmp     dword ptr [esi+0D8h], 500000Bh
0x700069: mov     ecx, esi
0x70006B: jnb     short loc_700077
0x70006D: call    sub_7124A0
0x700072: mov     [edi+10h], eax
0x700075: jmp     short loc_7000A4
0x700077: call    sub_7124D0
0x70007C: mov     ebx, eax
0x70007E: push    ebx
0x70007F: mov     ecx, edi
0x700081: call    sub_6FF760
0x700086: test    ebx, ebx
0x700088: jbe     short loc_7000A4
0x70008A: lea     ebx, [ebx+0]
0x700090: mov     ecx, esi
0x700092: call    sub_7124A0
0x700097: push    eax
0x700098: mov     ecx, edi
0x70009A: call    NiNode_AddNiExtraData
0x70009F: sub     ebx, 1
0x7000A2: jnz     short loc_700090
0x7000A4: mov     ecx, esi
0x7000A6: call    sub_7124A0
0x7000AB: mov     esi, [edi+0Ch]
0x7000AE: mov     ebx, eax
0x7000B0: cmp     esi, ebx
0x7000B2: jz      short loc_7000E5
0x7000B4: test    esi, esi
0x7000B6: jz      short loc_7000D4
0x7000B8: lea     eax, [esi+4]
0x7000BB: push    eax; lpAddend
0x7000BC: call    dword ptr ds:0A2807Ch
0x7000C2: test    eax, eax
0x7000C4: jnz     short loc_7000D4
0x7000C6: test    esi, esi
0x7000C8: jz      short loc_7000D4
0x7000CA: mov     edx, [esi]
0x7000CC: mov     eax, [edx]
0x7000CE: push    1
0x7000D0: mov     ecx, esi
0x7000D2: call    eax
0x7000D4: test    ebx, ebx
0x7000D6: mov     [edi+0Ch], ebx
0x7000D9: jz      short loc_7000E5
0x7000DB: add     ebx, 4
0x7000DE: push    ebx; lpAddend
0x7000DF: call    dword ptr ds:0A28078h
0x7000E5: pop     edi
0x7000E6: pop     esi
0x7000E7: pop     ebx
0x7000E8: retn    4
