0x731A90: push    esi
0x731A91: mov     esi, [esp+4+arg_0]
0x731A95: test    esi, esi
0x731A97: jz      short loc_731AD9
0x731A99: push    edi
0x731A9A: push    8; Size
0x731A9C: call    FormHeapAlloc
0x731AA1: mov     ecx, [esp+0Ch+arg_4]
0x731AA5: mov     [ecx], eax
0x731AA7: mov     edx, [esi+4]
0x731AAA: mov     [eax+4], edx
0x731AAD: mov     edi, [ecx]
0x731AAF: add     esp, 4
0x731AB2: cmp     dword ptr [esi], 0
0x731AB5: jz      short loc_731AD2
0x731AB7: push    8; Size
0x731AB9: call    FormHeapAlloc
0x731ABE: mov     [edi], eax
0x731AC0: mov     esi, [esi]
0x731AC2: mov     edi, eax
0x731AC4: mov     eax, [esi+4]
0x731AC7: add     esp, 4
0x731ACA: mov     [edi+4], eax
0x731ACD: cmp     dword ptr [esi], 0
0x731AD0: jnz     short loc_731AB7
0x731AD2: mov     dword ptr [edi], 0
0x731AD8: pop     edi
0x731AD9: pop     esi
0x731ADA: retn
