0x7263C0: push    0FFFFFFFFh
0x7263C2: push    offset SEH_8C8900
0x7263C7: mov     eax, large fs:0
0x7263CD: push    eax
0x7263CE: push    ecx
0x7263CF: mov     eax, ds:0B30AACh
0x7263D4: xor     eax, esp
0x7263D6: push    eax
0x7263D7: lea     eax, [esp+14h+var_C]
0x7263DB: mov     large fs:0, eax
0x7263E1: push    2Ch ; ','; Size
0x7263E3: call    FormHeapAlloc
0x7263E8: add     esp, 4
0x7263EB: mov     [esp+14h+var_10], eax
0x7263EF: test    eax, eax
0x7263F1: mov     [esp+14h+var_4], 0
0x7263F9: jz      short loc_726412
0x7263FB: mov     ecx, eax
0x7263FD: call    sub_726010
0x726402: mov     ecx, [esp+14h+var_C]
0x726406: mov     large fs:0, ecx
0x72640D: pop     ecx
0x72640E: add     esp, 10h
0x726411: retn
0x726412: xor     eax, eax
0x726414: mov     ecx, [esp+14h+var_C]
0x726418: mov     large fs:0, ecx
0x72641F: pop     ecx
0x726420: add     esp, 10h
0x726423: retn
