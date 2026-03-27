0x4E9F50: push    0FFFFFFFFh
0x4E9F52: push    offset SEH_8C62B0
0x4E9F57: mov     eax, large fs:0
0x4E9F5D: push    eax
0x4E9F5E: push    ecx
0x4E9F5F: push    esi
0x4E9F60: mov     eax, ds:0B30AACh
0x4E9F65: xor     eax, esp
0x4E9F67: push    eax
0x4E9F68: lea     eax, [esp+18h+var_C]
0x4E9F6C: mov     large fs:0, eax
0x4E9F72: mov     esi, ecx
0x4E9F74: push    60h ; '`'; Size
0x4E9F76: call    FormHeapAlloc
0x4E9F7B: add     esp, 4
0x4E9F7E: mov     [esp+18h+var_10], eax
0x4E9F82: test    eax, eax
0x4E9F84: mov     [esp+18h+var_4], 0
0x4E9F8C: jz      short loc_4E9F98
0x4E9F8E: push    esi
0x4E9F8F: mov     ecx, eax
0x4E9F91: call    sub_4EC650
0x4E9F96: jmp     short loc_4E9F9A
0x4E9F98: xor     eax, eax
0x4E9F9A: mov     [esi], eax
0x4E9F9C: mov     word ptr [esi+8], 0
0x4E9FA2: mov     word ptr [esi+0Ah], 0
0x4E9FA8: mov     ecx, [esp+18h+var_C]
0x4E9FAC: mov     large fs:0, ecx
0x4E9FB3: pop     ecx
0x4E9FB4: pop     esi
0x4E9FB5: add     esp, 10h
0x4E9FB8: retn
