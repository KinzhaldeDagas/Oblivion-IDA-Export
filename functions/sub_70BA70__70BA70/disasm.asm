0x70BA70: push    0FFFFFFFFh
0x70BA72: push    offset SEH_8C8900
0x70BA77: mov     eax, large fs:0
0x70BA7D: push    eax
0x70BA7E: push    ecx
0x70BA7F: mov     eax, ds:0B30AACh
0x70BA84: xor     eax, esp
0x70BA86: push    eax
0x70BA87: lea     eax, [esp+14h+var_C]
0x70BA8B: mov     large fs:0, eax
0x70BA91: push    0DCh ; 'Ü'; Size
0x70BA96: call    FormHeapAlloc
0x70BA9B: add     esp, 4
0x70BA9E: mov     [esp+14h+var_10], eax
0x70BAA2: test    eax, eax
0x70BAA4: mov     [esp+14h+var_4], 0
0x70BAAC: jz      short loc_70BAC7
0x70BAAE: push    0
0x70BAB0: mov     ecx, eax; this
0x70BAB2: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x70BAB7: mov     ecx, [esp+14h+var_C]
0x70BABB: mov     large fs:0, ecx
0x70BAC2: pop     ecx
0x70BAC3: add     esp, 10h
0x70BAC6: retn
0x70BAC7: xor     eax, eax
0x70BAC9: mov     ecx, [esp+14h+var_C]
0x70BACD: mov     large fs:0, ecx
0x70BAD4: pop     ecx
0x70BAD5: add     esp, 10h
0x70BAD8: retn
