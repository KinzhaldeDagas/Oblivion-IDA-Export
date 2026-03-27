0x67E090: push    esi
0x67E091: push    edi
0x67E092: mov     edi, [esp+8+arg_0]
0x67E096: test    edi, edi
0x67E098: mov     esi, ecx
0x67E09A: jz      short loc_67E0D9
0x67E09C: cmp     dword ptr [esi+24h], 0
0x67E0A0: jz      short loc_67E0C6
0x67E0A2: mov     ecx, [esi+28h]; this
0x67E0A5: test    ecx, ecx
0x67E0A7: jz      short loc_67E0B6
0x67E0A9: call    Actor_IsCreature
0x67E0AE: test    al, al
0x67E0B0: jz      short loc_67E0B6
0x67E0B2: mov     al, 1
0x67E0B4: jmp     short loc_67E0B8
0x67E0B6: xor     al, al
0x67E0B8: push    eax
0x67E0B9: mov     eax, [esi+24h]
0x67E0BC: push    0
0x67E0BE: push    eax
0x67E0BF: mov     ecx, edi
0x67E0C1: call    sub_68C4E0
0x67E0C6: lea     ecx, [esi+0Ch]
0x67E0C9: push    ecx
0x67E0CA: mov     ecx, edi
0x67E0CC: call    sub_68BED0
0x67E0D1: push    edi
0x67E0D2: mov     ecx, esi
0x67E0D4: call    sub_67DE90
0x67E0D9: pop     edi
0x67E0DA: pop     esi
0x67E0DB: retn    4
