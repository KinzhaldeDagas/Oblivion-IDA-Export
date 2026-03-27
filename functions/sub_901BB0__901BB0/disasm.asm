0x901BB0: mov     al, [ecx+84h]
0x901BB6: test    al, al
0x901BB8: jz      short loc_901BBF
0x901BBA: jmp     sub_93F0A0
0x901BBF: mov     edx, [esp+arg_8]
0x901BC3: mov     eax, [esp+arg_4]
0x901BC7: push    edx
0x901BC8: mov     edx, [esp+4+arg_0]
0x901BCC: push    eax
0x901BCD: push    edx
0x901BCE: add     ecx, 30h ; '0'
0x901BD1: push    ecx
0x901BD2: call    sub_933EE0
0x901BD7: add     esp, 10h
0x901BDA: retn    0Ch
