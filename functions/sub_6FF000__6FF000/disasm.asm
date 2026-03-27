0x6FF000: push    0FFFFFFFFh
0x6FF002: push    offset SEH_8C8900
0x6FF007: mov     eax, large fs:0
0x6FF00D: push    eax
0x6FF00E: push    ecx
0x6FF00F: mov     eax, ds:0B30AACh
0x6FF014: xor     eax, esp
0x6FF016: push    eax
0x6FF017: lea     eax, [esp+14h+var_C]
0x6FF01B: mov     large fs:0, eax
0x6FF021: push    3Ch ; '<'; Size
0x6FF023: call    FormHeapAlloc
0x6FF028: add     esp, 4
0x6FF02B: mov     [esp+14h+var_10], eax
0x6FF02F: test    eax, eax
0x6FF031: mov     [esp+14h+var_4], 0
0x6FF039: jz      short loc_6FF052
0x6FF03B: mov     ecx, eax
0x6FF03D: call    sub_6FEEE0
0x6FF042: mov     ecx, [esp+14h+var_C]
0x6FF046: mov     large fs:0, ecx
0x6FF04D: pop     ecx
0x6FF04E: add     esp, 10h
0x6FF051: retn
0x6FF052: xor     eax, eax
0x6FF054: mov     ecx, [esp+14h+var_C]
0x6FF058: mov     large fs:0, ecx
0x6FF05F: pop     ecx
0x6FF060: add     esp, 10h
0x6FF063: retn
