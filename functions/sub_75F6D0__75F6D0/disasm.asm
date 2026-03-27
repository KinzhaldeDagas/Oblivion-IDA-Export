0x75F6D0: push    esi
0x75F6D1: mov     esi, [esp+4+arg_0]
0x75F6D5: push    edi
0x75F6D6: push    esi
0x75F6D7: mov     edi, ecx
0x75F6D9: call    sub_75E480
0x75F6DE: cmp     dword ptr [esi+0D8h], 0A010068h
0x75F6E8: jnb     short loc_75F722
0x75F6EA: mov     ecx, esi
0x75F6EC: call    sub_7124A0
0x75F6F1: push    18h; Size
0x75F6F3: mov     esi, eax
0x75F6F5: call    FormHeapAlloc
0x75F6FA: add     esp, 4
0x75F6FD: test    eax, eax
0x75F6FF: jz      short loc_75F717
0x75F701: push    esi
0x75F702: mov     ecx, eax
0x75F704: call    sub_6D2990
0x75F709: push    eax; a2
0x75F70A: lea     ecx, [edi+3Ch]; this
0x75F70D: call    NiSmartPointer_Set??
0x75F712: pop     edi
0x75F713: pop     esi
0x75F714: retn    4
0x75F717: xor     eax, eax
0x75F719: push    eax; a2
0x75F71A: lea     ecx, [edi+3Ch]; this
0x75F71D: call    NiSmartPointer_Set??
0x75F722: pop     edi
0x75F723: pop     esi
0x75F724: retn    4
