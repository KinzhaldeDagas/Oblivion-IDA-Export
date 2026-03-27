0x4430C0: mov     ecx, [esp+arg_0]
0x4430C4: xor     eax, eax
0x4430C6: test    ecx, ecx
0x4430C8: jz      short locret_4430E3
0x4430CA: mov     eax, [esp+arg_4]
0x4430CE: push    esi
0x4430CF: push    eax
0x4430D0: call    sub_700610
0x4430D5: mov     esi, eax
0x4430D7: push    esi
0x4430D8: call    sub_442F70
0x4430DD: add     esp, 4
0x4430E0: mov     eax, esi
0x4430E2: pop     esi
0x4430E3: retn    8
