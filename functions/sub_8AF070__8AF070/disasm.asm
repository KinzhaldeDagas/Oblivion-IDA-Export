0x8AF070: push    0FFFFFFFFh
0x8AF072: push    offset SEH_8C8900
0x8AF077: mov     eax, large fs:0
0x8AF07D: push    eax
0x8AF07E: push    ecx
0x8AF07F: mov     eax, ds:0B30AACh
0x8AF084: xor     eax, esp
0x8AF086: push    eax
0x8AF087: lea     eax, [esp+14h+var_C]
0x8AF08B: mov     large fs:0, eax
0x8AF091: push    14h; Size
0x8AF093: call    FormHeapAlloc
0x8AF098: add     esp, 4
0x8AF09B: mov     [esp+14h+var_10], eax
0x8AF09F: test    eax, eax
0x8AF0A1: mov     [esp+14h+var_4], 0
0x8AF0A9: jz      short loc_8AF0C2
0x8AF0AB: mov     ecx, eax
0x8AF0AD: call    sub_8AF020
0x8AF0B2: mov     ecx, [esp+14h+var_C]
0x8AF0B6: mov     large fs:0, ecx
0x8AF0BD: pop     ecx
0x8AF0BE: add     esp, 10h
0x8AF0C1: retn
0x8AF0C2: xor     eax, eax
0x8AF0C4: mov     ecx, [esp+14h+var_C]
0x8AF0C8: mov     large fs:0, ecx
0x8AF0CF: pop     ecx
0x8AF0D0: add     esp, 10h
0x8AF0D3: retn
