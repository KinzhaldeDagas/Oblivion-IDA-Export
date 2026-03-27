0x43ADD0: push    ecx
0x43ADD1: push    esi
0x43ADD2: push    edi
0x43ADD3: mov     esi, ecx
0x43ADD5: call    sub_4378F0
0x43ADDA: test    esi, esi
0x43ADDC: mov     edi, ioManager
0x43ADE2: push    ecx
0x43ADE3: mov     eax, esp
0x43ADE5: mov     [esp+10h+var_4], esp
0x43ADE9: mov     [eax], esi
0x43ADEB: jz      short loc_43ADF7
0x43ADED: add     esi, 8
0x43ADF0: push    esi; lpAddend
0x43ADF1: call    ds:InterlockedIncrement
0x43ADF7: mov     ecx, [edi+34h]
0x43ADFA: call    sub_43A5F0
0x43ADFF: pop     edi
0x43AE00: pop     esi
0x43AE01: pop     ecx
0x43AE02: retn
