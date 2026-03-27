0x6FE0F0: push    0FFFFFFFFh
0x6FE0F2: push    offset SEH_8C8900
0x6FE0F7: mov     eax, large fs:0
0x6FE0FD: push    eax
0x6FE0FE: push    ecx
0x6FE0FF: mov     eax, ds:0B30AACh
0x6FE104: xor     eax, esp
0x6FE106: push    eax
0x6FE107: lea     eax, [esp+14h+var_C]
0x6FE10B: mov     large fs:0, eax
0x6FE111: push    18h; Size
0x6FE113: call    FormHeapAlloc
0x6FE118: add     esp, 4
0x6FE11B: mov     [esp+14h+var_10], eax
0x6FE11F: test    eax, eax
0x6FE121: mov     [esp+14h+var_4], 0
0x6FE129: jz      short loc_6FE142
0x6FE12B: mov     ecx, eax; this
0x6FE12D: call    ??0BSNodeReferences@@QAE@XZ; BSNodeReferences::BSNodeReferences(void)
0x6FE132: mov     ecx, [esp+14h+var_C]
0x6FE136: mov     large fs:0, ecx
0x6FE13D: pop     ecx
0x6FE13E: add     esp, 10h
0x6FE141: retn
0x6FE142: xor     eax, eax
0x6FE144: mov     ecx, [esp+14h+var_C]
0x6FE148: mov     large fs:0, ecx
0x6FE14F: pop     ecx
0x6FE150: add     esp, 10h
0x6FE153: retn
