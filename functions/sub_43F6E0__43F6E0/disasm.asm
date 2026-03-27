0x43F6E0: push    esi
0x43F6E1: mov     esi, ecx
0x43F6E3: push    edi
0x43F6E4: mov     edi, [esi+54h]
0x43F6E7: test    edi, edi
0x43F6E9: jz      short loc_43F6FB
0x43F6EB: mov     ecx, edi
0x43F6ED: call    sub_49CFB0
0x43F6F2: push    edi
0x43F6F3: call    FormHeapFree
0x43F6F8: add     esp, 4
0x43F6FB: mov     edi, [esi+58h]
0x43F6FE: test    edi, edi
0x43F700: jz      short loc_43F712
0x43F702: mov     ecx, edi
0x43F704: call    sub_49E500
0x43F709: push    edi
0x43F70A: call    FormHeapFree
0x43F70F: add     esp, 4
0x43F712: pop     edi
0x43F713: mov     dword ptr [esi+58h], 0
0x43F71A: pop     esi
0x43F71B: retn
