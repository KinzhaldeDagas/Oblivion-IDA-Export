0x72F290: push    esi
0x72F291: push    edi
0x72F292: mov     edi, [esp+8+arg_0]
0x72F296: push    edi
0x72F297: mov     esi, ecx
0x72F299: call    nullsub_returnvVoid_1arg
0x72F29E: mov     eax, [edi+0D8h]
0x72F2A4: cmp     eax, 4000001h
0x72F2A9: jb      short loc_72F2C2
0x72F2AB: cmp     eax, 0A010065h
0x72F2B0: jnb     short loc_72F2C2
0x72F2B2: mov     ecx, edi
0x72F2B4: call    sub_7124A0
0x72F2B9: push    eax; a2
0x72F2BA: lea     ecx, [esi+8]; this
0x72F2BD: call    NiSmartPointer_Set??
0x72F2C2: pop     edi
0x72F2C3: pop     esi
0x72F2C4: retn    4
