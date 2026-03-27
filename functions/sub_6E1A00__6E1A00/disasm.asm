0x6E1A00: push    0FFFFFFFFh
0x6E1A02: push    offset SEH_8C8900
0x6E1A07: mov     eax, large fs:0
0x6E1A0D: push    eax
0x6E1A0E: push    ecx
0x6E1A0F: mov     eax, ds:0B30AACh
0x6E1A14: xor     eax, esp
0x6E1A16: push    eax
0x6E1A17: lea     eax, [esp+14h+var_C]
0x6E1A1B: mov     large fs:0, eax
0x6E1A21: push    50h ; 'P'; Size
0x6E1A23: call    FormHeapAlloc
0x6E1A28: add     esp, 4
0x6E1A2B: mov     [esp+14h+var_10], eax
0x6E1A2F: test    eax, eax
0x6E1A31: mov     [esp+14h+var_4], 0
0x6E1A39: jz      short loc_6E1A52
0x6E1A3B: mov     ecx, eax
0x6E1A3D: call    sub_6E18D0
0x6E1A42: mov     ecx, [esp+14h+var_C]
0x6E1A46: mov     large fs:0, ecx
0x6E1A4D: pop     ecx
0x6E1A4E: add     esp, 10h
0x6E1A51: retn
0x6E1A52: xor     eax, eax
0x6E1A54: mov     ecx, [esp+14h+var_C]
0x6E1A58: mov     large fs:0, ecx
0x6E1A5F: pop     ecx
0x6E1A60: add     esp, 10h
0x6E1A63: retn
