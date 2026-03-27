0x8C8900: push    0FFFFFFFFh
0x8C8902: push    offset SEH_8C8900
0x8C8907: mov     eax, large fs:0
0x8C890D: push    eax
0x8C890E: push    ecx
0x8C890F: mov     eax, ds:0B30AACh
0x8C8914: xor     eax, esp
0x8C8916: push    eax
0x8C8917: lea     eax, [esp+14h+var_C]
0x8C891B: mov     large fs:0, eax
0x8C8921: push    14h; Size
0x8C8923: call    FormHeapAlloc
0x8C8928: add     esp, 4
0x8C892B: mov     [esp+14h+var_10], eax
0x8C892F: test    eax, eax
0x8C8931: mov     [esp+14h+var_4], 0
0x8C8939: jz      short loc_8C8952
0x8C893B: mov     ecx, eax
0x8C893D: call    sub_8C8830
0x8C8942: mov     ecx, [esp+14h+var_C]
0x8C8946: mov     large fs:0, ecx
0x8C894D: pop     ecx
0x8C894E: add     esp, 10h
0x8C8951: retn
0x8C8952: xor     eax, eax
0x8C8954: mov     ecx, [esp+14h+var_C]
0x8C8958: mov     large fs:0, ecx
0x8C895F: pop     ecx
0x8C8960: add     esp, 10h
0x8C8963: retn
