0x6C7840: push    0FFFFFFFFh
0x6C7842: push    offset SEH_8C8900
0x6C7847: mov     eax, large fs:0
0x6C784D: push    eax
0x6C784E: push    ecx
0x6C784F: mov     eax, ds:0B30AACh
0x6C7854: xor     eax, esp
0x6C7856: push    eax
0x6C7857: lea     eax, [esp+14h+var_C]
0x6C785B: mov     large fs:0, eax
0x6C7861: push    68h ; 'h'; Size
0x6C7863: call    FormHeapAlloc
0x6C7868: add     esp, 4
0x6C786B: mov     [esp+14h+var_10], eax
0x6C786F: test    eax, eax
0x6C7871: mov     [esp+14h+var_4], 0
0x6C7879: jz      short loc_6C7892
0x6C787B: mov     ecx, eax
0x6C787D: call    sub_6C6550
0x6C7882: mov     ecx, [esp+14h+var_C]
0x6C7886: mov     large fs:0, ecx
0x6C788D: pop     ecx
0x6C788E: add     esp, 10h
0x6C7891: retn
0x6C7892: xor     eax, eax
0x6C7894: mov     ecx, [esp+14h+var_C]
0x6C7898: mov     large fs:0, ecx
0x6C789F: pop     ecx
0x6C78A0: add     esp, 10h
0x6C78A3: retn
