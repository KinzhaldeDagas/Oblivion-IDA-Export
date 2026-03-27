0x741BB0: push    0FFFFFFFFh
0x741BB2: push    offset SEH_8C8900
0x741BB7: mov     eax, large fs:0
0x741BBD: push    eax
0x741BBE: push    ecx
0x741BBF: mov     eax, ds:0B30AACh
0x741BC4: xor     eax, esp
0x741BC6: push    eax
0x741BC7: lea     eax, [esp+14h+var_C]
0x741BCB: mov     large fs:0, eax
0x741BD1: push    0FCh ; 'ü'; Size
0x741BD6: call    FormHeapAlloc
0x741BDB: add     esp, 4
0x741BDE: mov     [esp+14h+var_10], eax
0x741BE2: test    eax, eax
0x741BE4: mov     [esp+14h+var_4], 0
0x741BEC: jz      short loc_741C05
0x741BEE: mov     ecx, eax
0x741BF0: call    sub_741A50
0x741BF5: mov     ecx, [esp+14h+var_C]
0x741BF9: mov     large fs:0, ecx
0x741C00: pop     ecx
0x741C01: add     esp, 10h
0x741C04: retn
0x741C05: xor     eax, eax
0x741C07: mov     ecx, [esp+14h+var_C]
0x741C0B: mov     large fs:0, ecx
0x741C12: pop     ecx
0x741C13: add     esp, 10h
0x741C16: retn
