0x4303B0: push    esi
0x4303B1: mov     esi, ecx
0x4303B3: cmp     byte ptr [esi+24h], 0
0x4303B7: jz      short loc_4303D0
0x4303B9: cmp     dword ptr [esi+1Ch], 0
0x4303BD: jz      short loc_4303D0
0x4303BF: call    NiFile_Flush
0x4303C4: mov     eax, [esi+1Ch]
0x4303C7: push    eax; File
0x4303C8: call    _fclose
0x4303CD: add     esp, 4
0x4303D0: mov     ecx, [esi+18h]
0x4303D3: push    ecx
0x4303D4: call    FormHeapFree
0x4303D9: add     esp, 4
0x4303DC: mov     dword ptr [esi+18h], 0
0x4303E3: mov     dword ptr [esi+1Ch], 0
0x4303EA: pop     esi
0x4303EB: retn
