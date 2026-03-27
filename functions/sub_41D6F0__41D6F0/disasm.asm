0x41D6F0: push    ebx
0x41D6F1: mov     ebx, [esp+4+arg_0]
0x41D6F5: push    esi
0x41D6F6: push    edi
0x41D6F7: push    0; int
0x41D6F9: push    offset ??_R0?AVExtraCellMusicType@@@8; struct TypeDescriptor *
0x41D6FE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x41D703: push    0; int
0x41D705: push    ebx; void *
0x41D706: mov     edi, ecx
0x41D708: call    OblivionDynamicCast
0x41D70D: mov     esi, eax
0x41D70F: add     esp, 14h
0x41D712: test    esi, esi
0x41D714: jnz     short loc_41D71E
0x41D716: pop     edi
0x41D717: pop     esi
0x41D718: mov     al, 1
0x41D71A: pop     ebx
0x41D71B: retn    4
0x41D71E: push    ebx
0x41D71F: mov     ecx, edi
0x41D721: call    BSExtraData_CompareTo
0x41D726: test    al, al
0x41D728: jnz     short loc_41D716
0x41D72A: mov     al, [esi+0Ch]
0x41D72D: cmp     al, [edi+0Ch]
0x41D730: pop     edi
0x41D731: pop     esi
0x41D732: setnz   al
0x41D735: pop     ebx
0x41D736: retn    4
