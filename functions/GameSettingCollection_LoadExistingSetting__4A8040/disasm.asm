0x4A8040: mov     eax, [esp+arg_0]
0x4A8044: mov     edx, [esp+arg_4]
0x4A8048: push    ebx
0x4A8049: push    esi
0x4A804A: mov     esi, ecx
0x4A804C: lea     ecx, [esp+8+arg_0]
0x4A8050: push    ecx
0x4A8051: xor     ebx, ebx
0x4A8053: push    edx
0x4A8054: lea     ecx, [esi+10Ch]
0x4A805A: mov     [esi+4], bl
0x4A805D: mov     [esi+108h], eax
0x4A8063: mov     [esp+10h+arg_0], ebx
0x4A8067: call    NiTMap_GetAt
0x4A806C: mov     eax, [esp+8+arg_0]
0x4A8070: cmp     eax, ebx
0x4A8072: jz      short loc_4A8080
0x4A8074: mov     edx, [esi]
0x4A8076: push    eax
0x4A8077: mov     eax, [edx+10h]
0x4A807A: mov     ecx, esi
0x4A807C: call    eax
0x4A807E: mov     bl, al
0x4A8080: mov     edx, [esi]
0x4A8082: mov     eax, [edx+18h]
0x4A8085: mov     ecx, esi
0x4A8087: call    eax
0x4A8089: pop     esi
0x4A808A: mov     al, bl
0x4A808C: pop     ebx
0x4A808D: retn    8
