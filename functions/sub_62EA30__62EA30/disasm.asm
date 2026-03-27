0x62EA30: push    0FFFFFFFFh
0x62EA32: push    offset SEH_8C62B0
0x62EA37: mov     eax, large fs:0
0x62EA3D: push    eax
0x62EA3E: push    ecx
0x62EA3F: push    esi
0x62EA40: mov     eax, ds:0B30AACh
0x62EA45: xor     eax, esp
0x62EA47: push    eax
0x62EA48: lea     eax, [esp+18h+var_C]
0x62EA4C: mov     large fs:0, eax
0x62EA52: mov     esi, ecx
0x62EA54: cmp     dword ptr [esi+34h], 0
0x62EA58: jnz     short loc_62EA86
0x62EA5A: push    4Ch ; 'L'; Size
0x62EA5C: call    FormHeapAlloc
0x62EA61: add     esp, 4
0x62EA64: mov     [esp+18h+var_10], eax
0x62EA68: test    eax, eax
0x62EA6A: mov     [esp+18h+var_4], 0
0x62EA72: jz      short loc_62EA7D
0x62EA74: mov     ecx, eax; this
0x62EA76: call    ??0PathHigh@@QAE@XZ; PathHigh::PathHigh(void)
0x62EA7B: jmp     short loc_62EA7F
0x62EA7D: xor     eax, eax
0x62EA7F: mov     [esi+34h], eax
0x62EA82: mov     byte ptr [eax+10h], 0
0x62EA86: mov     ecx, [esp+18h+var_C]
0x62EA8A: mov     large fs:0, ecx
0x62EA91: pop     ecx
0x62EA92: pop     esi
0x62EA93: add     esp, 10h
0x62EA96: retn
