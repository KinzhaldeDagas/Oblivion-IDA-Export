0x855170: push    0FFFFFFFFh
0x855172: push    offset SEH_855170
0x855177: mov     eax, large fs:0
0x85517D: push    eax
0x85517E: push    esi
0x85517F: mov     eax, ds:0B30AACh
0x855184: xor     eax, esp
0x855186: push    eax
0x855187: lea     eax, [esp+14h+var_C]
0x85518B: mov     large fs:0, eax
0x855191: mov     esi, ecx
0x855193: cmp     [esp+14h+arg_C], 0
0x855198: jnz     short loc_8551D7
0x85519A: cmp     byte ptr [esp+14h+arg_8], 1
0x85519F: jnz     loc_85522B
0x8551A5: push    10h; Size
0x8551A7: call    FormHeapAlloc
0x8551AC: add     esp, 4
0x8551AF: mov     [esp+14h+arg_8], eax
0x8551B3: test    eax, eax
0x8551B5: mov     [esp+14h+var_4], 0
0x8551BD: jz      short loc_855210
0x8551BF: mov     ecx, [esp+14h+arg_0]
0x8551C3: push    0
0x8551C5: push    0
0x8551C7: push    0
0x8551C9: push    0Ah
0x8551CB: push    ecx
0x8551CC: push    eax
0x8551CD: call    sub_7E2370
0x8551D2: add     esp, 18h
0x8551D5: jmp     short loc_855212
0x8551D7: cmp     byte ptr [esp+14h+arg_8], 1
0x8551DC: jnz     short loc_85522B
0x8551DE: push    10h; Size
0x8551E0: call    FormHeapAlloc
0x8551E5: add     esp, 4
0x8551E8: mov     [esp+14h+arg_8], eax
0x8551EC: test    eax, eax
0x8551EE: mov     [esp+14h+var_4], 1
0x8551F6: jz      short loc_855210
0x8551F8: mov     ecx, [esp+14h+arg_0]
0x8551FC: push    0
0x8551FE: push    0
0x855200: push    0
0x855202: push    0Bh
0x855204: push    ecx
0x855205: push    eax
0x855206: call    sub_7E2370
0x85520B: add     esp, 18h
0x85520E: jmp     short loc_855212
0x855210: xor     eax, eax
0x855212: lea     edx, [esp+14h+arg_8]
0x855216: push    edx
0x855217: lea     ecx, [esi+58h]
0x85521A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x855222: mov     [esp+18h+arg_8], eax
0x855226: call    sub_5B1E20
0x85522B: mov     ecx, [esp+14h+var_C]
0x85522F: mov     large fs:0, ecx
0x855236: pop     ecx
0x855237: pop     esi
0x855238: add     esp, 0Ch
0x85523B: retn    10h
