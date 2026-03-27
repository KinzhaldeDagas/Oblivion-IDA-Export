0x530500: push    esi
0x530501: mov     esi, ecx
0x530503: cmp     dword ptr [esi+0Ch], 0
0x530507: push    edi
0x530508: jz      short loc_530526
0x53050A: lea     ebx, [ebx+0]
0x530510: mov     eax, [esi+0Ch]
0x530513: mov     edi, [eax+4]
0x530516: push    eax
0x530517: call    FormHeapFree
0x53051C: add     esp, 4
0x53051F: test    edi, edi
0x530521: mov     [esi+0Ch], edi
0x530524: jnz     short loc_530510
0x530526: mov     dword ptr [esi+8], 0
0x53052D: cmp     dword ptr [esi+4], 0
0x530531: jz      short loc_530549
0x530533: mov     eax, [esi+4]
0x530536: mov     edi, [eax+4]
0x530539: push    eax
0x53053A: call    FormHeapFree
0x53053F: add     esp, 4
0x530542: test    edi, edi
0x530544: mov     [esi+4], edi
0x530547: jnz     short loc_530533
0x530549: pop     edi
0x53054A: mov     dword ptr [esi], 0
0x530550: pop     esi
0x530551: retn
