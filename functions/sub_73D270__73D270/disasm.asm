0x73D270: push    0FFFFFFFFh
0x73D272: push    offset SEH_8C8900
0x73D277: mov     eax, large fs:0
0x73D27D: push    eax
0x73D27E: push    ecx
0x73D27F: mov     eax, ds:0B30AACh
0x73D284: xor     eax, esp
0x73D286: push    eax
0x73D287: lea     eax, [esp+14h+var_C]
0x73D28B: mov     large fs:0, eax
0x73D291: push    128h; Size
0x73D296: call    FormHeapAlloc
0x73D29B: add     esp, 4
0x73D29E: mov     [esp+14h+var_10], eax
0x73D2A2: test    eax, eax
0x73D2A4: mov     [esp+14h+var_4], 0
0x73D2AC: jz      short loc_73D2C5
0x73D2AE: mov     ecx, eax
0x73D2B0: call    sub_73D160
0x73D2B5: mov     ecx, [esp+14h+var_C]
0x73D2B9: mov     large fs:0, ecx
0x73D2C0: pop     ecx
0x73D2C1: add     esp, 10h
0x73D2C4: retn
0x73D2C5: xor     eax, eax
0x73D2C7: mov     ecx, [esp+14h+var_C]
0x73D2CB: mov     large fs:0, ecx
0x73D2D2: pop     ecx
0x73D2D3: add     esp, 10h
0x73D2D6: retn
