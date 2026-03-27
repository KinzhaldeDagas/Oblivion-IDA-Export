0x46B340: push    esi
0x46B341: mov     esi, ecx
0x46B343: mov     eax, [esi+8]
0x46B346: shr     eax, 0Eh
0x46B349: test    al, 1
0x46B34B: jz      short loc_46B353
0x46B34D: xor     al, al
0x46B34F: pop     esi
0x46B350: retn    4
0x46B353: mov     edx, [esi]
0x46B355: mov     eax, [edx+24h]
0x46B358: call    eax
0x46B35A: mov     ecx, [esp+4+arg_0]
0x46B35E: push    esi
0x46B35F: call    TESFile_WriteFormRecord
0x46B364: test    eax, eax
0x46B366: setz    al
0x46B369: pop     esi
0x46B36A: retn    4
