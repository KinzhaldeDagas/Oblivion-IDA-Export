0x452E70: push    ebx
0x452E71: mov     ebx, [esp+4+a2]
0x452E75: push    esi
0x452E76: push    edi
0x452E77: lea     eax, [esp+0Ch+a2]
0x452E7B: push    eax
0x452E7C: push    ebx
0x452E7D: mov     edi, ecx
0x452E7F: call    NiTMap_GetAt
0x452E84: test    al, al
0x452E86: jnz     short loc_452EBF
0x452E88: push    8; Size
0x452E8A: call    FormHeapAlloc
0x452E8F: add     esp, 4
0x452E92: test    eax, eax
0x452E94: jz      short loc_452EB0
0x452E96: push    eax; a3
0x452E97: push    ebx; a2
0x452E98: mov     ecx, edi; this
0x452E9A: mov     dword ptr [eax], 0
0x452EA0: mov     dword ptr [eax+4], 0
0x452EA7: mov     esi, eax
0x452EA9: call    NiTMap_SetAt
0x452EAE: jmp     short loc_452EC3
0x452EB0: xor     eax, eax
0x452EB2: push    eax; a3
0x452EB3: push    ebx; a2
0x452EB4: mov     ecx, edi; this
0x452EB6: mov     esi, eax
0x452EB8: call    NiTMap_SetAt
0x452EBD: jmp     short loc_452EC3
0x452EBF: mov     esi, [esp+0Ch+a2]
0x452EC3: mov     edi, [esp+0Ch+arg_4]
0x452EC7: test    edi, edi
0x452EC9: jz      short loc_452F07
0x452ECB: cmp     dword ptr [esi], 0
0x452ECE: jz      short loc_452F05
0x452ED0: push    8; Size
0x452ED2: call    FormHeapAlloc
0x452ED7: add     esp, 4
0x452EDA: test    eax, eax
0x452EDC: jz      short loc_452EFA
0x452EDE: mov     ecx, [esi]
0x452EE0: mov     [eax], ecx
0x452EE2: mov     dword ptr [eax+4], 0
0x452EE9: mov     edx, [esi+4]
0x452EEC: mov     [eax+4], edx
0x452EEF: mov     [esi], edi
0x452EF1: pop     edi
0x452EF2: mov     [esi+4], eax
0x452EF5: pop     esi
0x452EF6: pop     ebx
0x452EF7: retn    8
0x452EFA: mov     edx, [esi+4]
0x452EFD: xor     eax, eax
0x452EFF: mov     [eax+4], edx
0x452F02: mov     [esi+4], eax
0x452F05: mov     [esi], edi
0x452F07: pop     edi
0x452F08: pop     esi
0x452F09: pop     ebx
0x452F0A: retn    8
