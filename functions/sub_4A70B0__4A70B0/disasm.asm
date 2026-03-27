0x4A70B0: push    esi
0x4A70B1: mov     esi, ecx
0x4A70B3: cmp     dword ptr [esi+24h], 0
0x4A70B7: jbe     short loc_4A7102
0x4A70B9: push    edi
0x4A70BA: lea     ebx, [ebx+0]
0x4A70C0: mov     eax, [esi+4]
0x4A70C3: test    eax, eax
0x4A70C5: mov     edi, [esi]
0x4A70C7: jz      short loc_4A70DE
0x4A70C9: mov     ecx, [eax+4]
0x4A70CC: mov     [esi+4], ecx
0x4A70CF: mov     edx, [eax]
0x4A70D1: push    eax
0x4A70D2: mov     [esi], edx
0x4A70D4: call    FormHeapFree
0x4A70D9: add     esp, 4
0x4A70DC: jmp     short loc_4A70E4
0x4A70DE: mov     dword ptr [esi], 0
0x4A70E4: add     dword ptr [esi+24h], 0FFFFFFFFh
0x4A70E8: test    edi, edi
0x4A70EA: jz      short loc_4A70FB
0x4A70EC: cmp     byte ptr [esi+0Ch], 0
0x4A70F0: jz      short loc_4A70FB
0x4A70F2: push    edi
0x4A70F3: call    FormHeapFree
0x4A70F8: add     esp, 4
0x4A70FB: cmp     dword ptr [esi+24h], 0
0x4A70FF: ja      short loc_4A70C0
0x4A7101: pop     edi
0x4A7102: fld     dword ptr ds:0A32048h
0x4A7108: mov     dword ptr [esi+24h], 0
0x4A710F: fst     dword ptr [esi+14h]
0x4A7112: fstp    dword ptr [esi+10h]
0x4A7115: fld     dword ptr ds:0A3B888h
0x4A711B: fst     dword ptr [esi+1Ch]
0x4A711E: fstp    dword ptr [esi+18h]
0x4A7121: pop     esi
0x4A7122: retn
