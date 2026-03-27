0x772B20: mov     eax, ds:0B427A8h
0x772B25: test    eax, eax
0x772B27: push    esi
0x772B28: push    edi
0x772B29: mov     edi, eax
0x772B2B: jz      short loc_772B5C
0x772B2D: mov     esi, [edi+14h]
0x772B30: test    esi, esi
0x772B32: mov     dword ptr [eax+8], 0
0x772B39: jz      short loc_772B4B
0x772B3B: mov     ecx, esi
0x772B3D: call    sub_772ED0
0x772B42: push    esi
0x772B43: call    FormHeapFree
0x772B48: add     esp, 4
0x772B4B: mov     eax, [edi]
0x772B4D: push    eax
0x772B4E: call    FormHeapFree
0x772B53: push    edi
0x772B54: call    FormHeapFree
0x772B59: add     esp, 8
0x772B5C: mov     eax, ds:0B427ACh
0x772B61: test    eax, eax
0x772B63: mov     edi, eax
0x772B65: jz      short loc_772BA8
0x772B67: mov     esi, [edi+14h]
0x772B6A: test    esi, esi
0x772B6C: mov     dword ptr [eax+8], 0
0x772B73: jz      short loc_772B97
0x772B75: mov     ecx, [esi]
0x772B77: push    ecx
0x772B78: call    FormHeapFree
0x772B7D: mov     ecx, [esi+8]
0x772B80: add     esp, 4
0x772B83: test    ecx, ecx
0x772B85: jz      short loc_772B8E
0x772B87: push    1
0x772B89: call    sub_772820
0x772B8E: push    esi
0x772B8F: call    FormHeapFree
0x772B94: add     esp, 4
0x772B97: mov     edx, [edi]
0x772B99: push    edx
0x772B9A: call    FormHeapFree
0x772B9F: push    edi
0x772BA0: call    FormHeapFree
0x772BA5: add     esp, 8
0x772BA8: pop     edi
0x772BA9: pop     esi
0x772BAA: retn
