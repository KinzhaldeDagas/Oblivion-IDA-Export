0x67CF00: push    esi
0x67CF01: mov     esi, [ecx]
0x67CF03: test    esi, esi
0x67CF05: jz      short loc_67CF43
0x67CF07: push    edi
0x67CF08: mov     edi, [esi]
0x67CF0A: test    edi, edi
0x67CF0C: jz      short loc_67CF42
0x67CF0E: mov     ecx, edi
0x67CF10: call    sub_67B5F0
0x67CF15: push    edi
0x67CF16: call    FormHeapFree
0x67CF1B: mov     eax, [esi+4]
0x67CF1E: add     esp, 4
0x67CF21: test    eax, eax
0x67CF23: jz      short loc_67CF3A
0x67CF25: mov     ecx, [eax+4]
0x67CF28: mov     [esi+4], ecx
0x67CF2B: mov     edx, [eax]
0x67CF2D: push    eax
0x67CF2E: mov     [esi], edx
0x67CF30: call    FormHeapFree
0x67CF35: add     esp, 4
0x67CF38: jmp     short loc_67CF08
0x67CF3A: mov     dword ptr [esi], 0
0x67CF40: jmp     short loc_67CF08
0x67CF42: pop     edi
0x67CF43: pop     esi
0x67CF44: retn
