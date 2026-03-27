0x6C5BB0: push    0FFFFFFFFh
0x6C5BB2: push    offset SEH_8C8900
0x6C5BB7: mov     eax, large fs:0
0x6C5BBD: push    eax
0x6C5BBE: push    ecx
0x6C5BBF: mov     eax, ds:0B30AACh
0x6C5BC4: xor     eax, esp
0x6C5BC6: push    eax
0x6C5BC7: lea     eax, [esp+14h+var_C]
0x6C5BCB: mov     large fs:0, eax
0x6C5BD1: push    80h ; '€'; Size
0x6C5BD6: call    FormHeapAlloc
0x6C5BDB: add     esp, 4
0x6C5BDE: mov     [esp+14h+var_10], eax
0x6C5BE2: test    eax, eax
0x6C5BE4: mov     [esp+14h+var_4], 0
0x6C5BEC: jz      short loc_6C5C05
0x6C5BEE: mov     ecx, eax
0x6C5BF0: call    sub_6C5520
0x6C5BF5: mov     ecx, [esp+14h+var_C]
0x6C5BF9: mov     large fs:0, ecx
0x6C5C00: pop     ecx
0x6C5C01: add     esp, 10h
0x6C5C04: retn
0x6C5C05: xor     eax, eax
0x6C5C07: mov     ecx, [esp+14h+var_C]
0x6C5C0B: mov     large fs:0, ecx
0x6C5C12: pop     ecx
0x6C5C13: add     esp, 10h
0x6C5C16: retn
