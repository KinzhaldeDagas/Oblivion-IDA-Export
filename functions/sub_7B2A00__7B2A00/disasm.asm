0x7B2A00: push    0FFFFFFFFh
0x7B2A02: push    offset SEH_7B2A00
0x7B2A07: mov     eax, large fs:0
0x7B2A0D: push    eax
0x7B2A0E: push    ebx
0x7B2A0F: push    esi
0x7B2A10: mov     eax, ds:0B30AACh
0x7B2A15: xor     eax, esp
0x7B2A17: push    eax
0x7B2A18: lea     eax, [esp+18h+var_C]
0x7B2A1C: mov     large fs:0, eax
0x7B2A22: mov     eax, [esp+18h+arg_0]
0x7B2A26: xor     bl, bl
0x7B2A28: test    eax, eax
0x7B2A2A: jz      short loc_7B2A7E
0x7B2A2C: mov     [esp+18h+arg_0], 0
0x7B2A34: lea     ecx, [esp+18h+arg_0]
0x7B2A38: push    ecx
0x7B2A39: push    eax
0x7B2A3A: mov     ecx, offset off_B2C34C
0x7B2A3F: mov     [esp+20h+var_4], 0
0x7B2A47: call    sub_4A1AB0
0x7B2A4C: test    al, al
0x7B2A4E: mov     esi, [esp+18h+arg_0]
0x7B2A52: jz      short loc_7B2A5A
0x7B2A54: test    esi, esi
0x7B2A56: jz      short loc_7B2A5A
0x7B2A58: mov     bl, 1
0x7B2A5A: test    esi, esi
0x7B2A5C: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7B2A64: jz      short loc_7B2A7E
0x7B2A66: lea     edx, [esi+4]
0x7B2A69: push    edx; lpAddend
0x7B2A6A: call    dword ptr ds:0A2807Ch
0x7B2A70: test    eax, eax
0x7B2A72: jnz     short loc_7B2A7E
0x7B2A74: mov     eax, [esi]
0x7B2A76: mov     edx, [eax]
0x7B2A78: push    1
0x7B2A7A: mov     ecx, esi
0x7B2A7C: call    edx
0x7B2A7E: mov     al, bl
0x7B2A80: mov     ecx, dword ptr [esp+18h+var_C]
0x7B2A84: mov     large fs:0, ecx
0x7B2A8B: pop     ecx
0x7B2A8C: pop     esi
0x7B2A8D: pop     ebx
0x7B2A8E: add     esp, 0Ch
0x7B2A91: retn
