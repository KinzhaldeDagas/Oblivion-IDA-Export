0x6F18A0: push    ebp
0x6F18A1: mov     ebp, esp
0x6F18A3: push    0FFFFFFFFh
0x6F18A5: push    offset SEH_6F18A0
0x6F18AA: mov     eax, large fs:0
0x6F18B0: push    eax
0x6F18B1: sub     esp, 8
0x6F18B4: push    ebx
0x6F18B5: push    esi
0x6F18B6: push    edi
0x6F18B7: mov     eax, ds:0B30AACh
0x6F18BC: xor     eax, ebp
0x6F18BE: push    eax
0x6F18BF: lea     eax, [ebp+var_C]
0x6F18C2: mov     large fs:0, eax
0x6F18C8: mov     [ebp+var_10], esp
0x6F18CB: mov     edi, [ebp+arg_8]
0x6F18CE: mov     ebx, [ebp+arg_4]
0x6F18D1: mov     esi, [ebp+arg_0]
0x6F18D4: mov     [ebp+var_14], edi
0x6F18D7: mov     [ebp+var_4], 0
0x6F18DE: mov     edi, edi
0x6F18E0: cmp     esi, ebx
0x6F18E2: jz      short loc_6F191E
0x6F18E4: push    esi
0x6F18E5: push    edi
0x6F18E6: call    sub_6F16F0
0x6F18EB: add     edi, 2Ch ; ','
0x6F18EE: add     esp, 8
0x6F18F1: mov     [ebp+arg_8], edi
0x6F18F4: add     esi, 2Ch ; ','
0x6F18F7: jmp     short loc_6F18E0
0x6F18F9: mov     esi, [ebp+var_14]
0x6F18FC: mov     edi, [ebp+arg_8]
0x6F18FF: cmp     esi, edi
0x6F1901: jz      short loc_6F1915
0x6F1903: mov     ebx, [ebp+arg_C]
0x6F1906: push    esi
0x6F1907: mov     ecx, ebx
0x6F1909: call    sub_556F40
0x6F190E: add     esi, 2Ch ; ','
0x6F1911: cmp     esi, edi
0x6F1913: jnz     short loc_6F1906
0x6F1915: push    0
0x6F1917: push    0
0x6F1919: call    ThrowException??
0x6F191E: mov     eax, edi
0x6F1920: mov     ecx, [ebp+var_C]
0x6F1923: mov     large fs:0, ecx
0x6F192A: pop     ecx
0x6F192B: pop     edi
0x6F192C: pop     esi
0x6F192D: pop     ebx
0x6F192E: mov     esp, ebp
0x6F1930: pop     ebp
0x6F1931: retn
