0x6EBCB0: push    0FFFFFFFFh
0x6EBCB2: push    offset SEH_6EBCB0
0x6EBCB7: mov     eax, large fs:0
0x6EBCBD: push    eax
0x6EBCBE: push    ecx
0x6EBCBF: push    esi
0x6EBCC0: push    edi
0x6EBCC1: mov     eax, ds:0B30AACh
0x6EBCC6: xor     eax, esp
0x6EBCC8: push    eax
0x6EBCC9: lea     eax, [esp+1Ch+var_C]
0x6EBCCD: mov     large fs:0, eax
0x6EBCD3: mov     edi, ecx
0x6EBCD5: mov     [esp+1Ch+var_10], edi
0x6EBCD9: mov     esi, [edi+14h]
0x6EBCDC: test    esi, esi
0x6EBCDE: mov     [esp+1Ch+var_4], 0
0x6EBCE6: mov     dword ptr [edi+8], 0
0x6EBCED: jz      short loc_6EBD28
0x6EBCEF: mov     ecx, [esi]
0x6EBCF1: test    ecx, ecx
0x6EBCF3: jz      short loc_6EBD11
0x6EBCF5: cmp     dword ptr [ecx-4], 0
0x6EBCF9: lea     eax, [ecx-4]
0x6EBCFC: jz      short loc_6EBD08
0x6EBCFE: mov     eax, [ecx]
0x6EBD00: mov     edx, [eax]
0x6EBD02: push    3
0x6EBD04: call    edx
0x6EBD06: jmp     short loc_6EBD11
0x6EBD08: push    eax
0x6EBD09: call    FormHeapFree
0x6EBD0E: add     esp, 4
0x6EBD11: mov     ecx, [esi+8]
0x6EBD14: test    ecx, ecx
0x6EBD16: jz      short loc_6EBD1F
0x6EBD18: push    1
0x6EBD1A: call    sub_56B680
0x6EBD1F: push    esi
0x6EBD20: call    FormHeapFree
0x6EBD25: add     esp, 4
0x6EBD28: mov     eax, [edi]
0x6EBD2A: push    eax
0x6EBD2B: call    FormHeapFree
0x6EBD30: add     esp, 4
0x6EBD33: mov     ecx, [esp+1Ch+var_C]
0x6EBD37: mov     large fs:0, ecx
0x6EBD3E: pop     ecx
0x6EBD3F: pop     edi
0x6EBD40: pop     esi
0x6EBD41: add     esp, 10h
0x6EBD44: retn
