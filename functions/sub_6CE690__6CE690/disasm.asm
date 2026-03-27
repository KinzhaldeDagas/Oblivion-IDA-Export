0x6CE690: push    0FFFFFFFFh
0x6CE692: push    offset SEH_8C8900
0x6CE697: mov     eax, large fs:0
0x6CE69D: push    eax
0x6CE69E: push    ecx
0x6CE69F: mov     eax, ds:0B30AACh
0x6CE6A4: xor     eax, esp
0x6CE6A6: push    eax
0x6CE6A7: lea     eax, [esp+14h+var_C]
0x6CE6AB: mov     large fs:0, eax
0x6CE6B1: push    58h ; 'X'; Size
0x6CE6B3: call    FormHeapAlloc
0x6CE6B8: add     esp, 4
0x6CE6BB: mov     [esp+14h+var_10], eax
0x6CE6BF: test    eax, eax
0x6CE6C1: mov     [esp+14h+var_4], 0
0x6CE6C9: jz      short loc_6CE6E2
0x6CE6CB: mov     ecx, eax
0x6CE6CD: call    sub_6CE4C0
0x6CE6D2: mov     ecx, [esp+14h+var_C]
0x6CE6D6: mov     large fs:0, ecx
0x6CE6DD: pop     ecx
0x6CE6DE: add     esp, 10h
0x6CE6E1: retn
0x6CE6E2: xor     eax, eax
0x6CE6E4: mov     ecx, [esp+14h+var_C]
0x6CE6E8: mov     large fs:0, ecx
0x6CE6EF: pop     ecx
0x6CE6F0: add     esp, 10h
0x6CE6F3: retn
