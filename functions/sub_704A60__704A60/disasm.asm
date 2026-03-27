0x704A60: push    0FFFFFFFFh
0x704A62: push    offset SEH_8C8900
0x704A67: mov     eax, large fs:0
0x704A6D: push    eax
0x704A6E: push    ecx
0x704A6F: mov     eax, ds:0B30AACh
0x704A74: xor     eax, esp
0x704A76: push    eax
0x704A77: lea     eax, [esp+14h+var_C]
0x704A7B: mov     large fs:0, eax
0x704A81: push    30h ; '0'; Size
0x704A83: call    FormHeapAlloc
0x704A88: add     esp, 4
0x704A8B: mov     [esp+14h+var_10], eax
0x704A8F: test    eax, eax
0x704A91: mov     [esp+14h+var_4], 0
0x704A99: jz      short loc_704AB2
0x704A9B: mov     ecx, eax
0x704A9D: call    NiTexturingProperty__NiTexturingProperty
0x704AA2: mov     ecx, [esp+14h+var_C]
0x704AA6: mov     large fs:0, ecx
0x704AAD: pop     ecx
0x704AAE: add     esp, 10h
0x704AB1: retn
0x704AB2: xor     eax, eax
0x704AB4: mov     ecx, [esp+14h+var_C]
0x704AB8: mov     large fs:0, ecx
0x704ABF: pop     ecx
0x704AC0: add     esp, 10h
0x704AC3: retn
