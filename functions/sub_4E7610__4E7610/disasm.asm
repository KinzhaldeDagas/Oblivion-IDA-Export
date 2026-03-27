0x4E7610: push    esi
0x4E7611: mov     esi, ecx
0x4E7613: cmp     dword ptr [esi+24h], 0
0x4E7617: jz      short loc_4E7632
0x4E7619: call    sub_4E6F30
0x4E761E: cmp     byte ptr ds:0B35F84h, 0
0x4E7625: jz      short loc_4E762E
0x4E7627: mov     ecx, esi
0x4E7629: call    sub_4E71A0
0x4E762E: mov     al, 1
0x4E7630: pop     esi
0x4E7631: retn
0x4E7632: push    edi
0x4E7633: push    0FFFFFFFFh; a2
0x4E7635: call    TESForm_GetOverrideFile
0x4E763A: mov     ecx, eax
0x4E763C: call    sub_4520F0
0x4E7641: mov     edi, eax
0x4E7643: test    edi, edi
0x4E7645: jz      short loc_4E7653
0x4E7647: push    esi
0x4E7648: mov     ecx, edi
0x4E764A: call    TESFile__FindForm
0x4E764F: test    al, al
0x4E7651: jnz     short loc_4E7658
0x4E7653: pop     edi
0x4E7654: xor     al, al
0x4E7656: pop     esi
0x4E7657: retn
0x4E7658: push    ebx
0x4E7659: push    edi
0x4E765A: mov     ecx, esi
0x4E765C: call    sub_4E65B0
0x4E7661: mov     bl, al
0x4E7663: test    bl, bl
0x4E7665: jz      short loc_4E767E
0x4E7667: mov     ecx, esi
0x4E7669: call    sub_4E6F30
0x4E766E: cmp     byte ptr ds:0B35F84h, 0
0x4E7675: jz      short loc_4E767E
0x4E7677: mov     ecx, esi
0x4E7679: call    sub_4E71A0
0x4E767E: mov     al, bl
0x4E7680: pop     ebx
0x4E7681: pop     edi
0x4E7682: pop     esi
0x4E7683: retn
