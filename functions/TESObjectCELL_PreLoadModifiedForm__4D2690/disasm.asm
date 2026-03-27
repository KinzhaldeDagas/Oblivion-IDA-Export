0x4D2690: push    esi
0x4D2691: push    edi
0x4D2692: mov     edi, [esp+8+arg_0]
0x4D2696: push    edi
0x4D2697: mov     esi, ecx
0x4D2699: call    nullsub_returnvVoid_1arg
0x4D269E: mov     eax, ds:0B33B00h
0x4D26A3: mov     eax, [eax+44h]
0x4D26A6: cmp     eax, 1FFFF000h
0x4D26AB: jz      short loc_4D26B4
0x4D26AD: cmp     eax, 7FFFF000h
0x4D26B2: jnz     short loc_4D26B8
0x4D26B4: mov     byte ptr [esi+25h], 0
0x4D26B8: test    edi, 10000000h
0x4D26BE: jz      short loc_4D26DC
0x4D26C0: push    0
0x4D26C2: lea     ecx, [esi+28h]
0x4D26C5: call    sub_420B70
0x4D26CA: mov     edx, [esi]
0x4D26CC: mov     eax, [edx+44h]
0x4D26CF: and     byte ptr [esi+25h], 0FEh
0x4D26D3: push    16000000h
0x4D26D8: mov     ecx, esi
0x4D26DA: call    eax
0x4D26DC: test    edi, 8000000h
0x4D26E2: jz      short loc_4D2707
0x4D26E4: mov     ecx, ds:0B33B00h
0x4D26EA: call    sub_45A500
0x4D26EF: push    0
0x4D26F1: lea     ecx, [esi+28h]
0x4D26F4: call    ExtraDataList?_SetDetachTime
0x4D26F9: mov     edx, [esi]
0x4D26FB: mov     eax, [edx+44h]
0x4D26FE: push    0E000000h
0x4D2703: mov     ecx, esi
0x4D2705: call    eax
0x4D2707: test    edi, 1000000h
0x4D270D: jz      short loc_4D271B
0x4D270F: mov     ecx, [esi+44h]
0x4D2712: test    ecx, ecx
0x4D2714: jz      short loc_4D271B
0x4D2716: call    sub_4E5F10
0x4D271B: pop     edi
0x4D271C: pop     esi
0x4D271D: retn    4
