0x419A70: push    0FFFFFFFFh
0x419A72: push    offset SEH_404850
0x419A77: mov     eax, large fs:0
0x419A7D: push    eax
0x419A7E: push    ecx
0x419A7F: push    esi
0x419A80: mov     eax, ___security_cookie
0x419A85: xor     eax, esp
0x419A87: push    eax
0x419A88: lea     eax, [esp+18h+var_C]
0x419A8C: mov     large fs:0, eax
0x419A92: mov     esi, ecx
0x419A94: mov     [esp+18h+var_10], esi
0x419A98: mov     eax, [esp+18h+arg_0]
0x419A9C: mov     ecx, [esp+18h+arg_4]
0x419AA0: mov     [esi+4], eax
0x419AA3: mov     [esi], ecx
0x419AA5: test    eax, eax
0x419AA7: mov     [esp+18h+var_4], 0
0x419AAF: jz      short loc_419AFA
0x419AB1: lea     edx, [esp+18h+arg_0]
0x419AB5: push    edx
0x419AB6: push    eax
0x419AB7: mov     ecx, offset dword_B35574
0x419ABC: call    NiTMap_GetAt
0x419AC1: test    al, al
0x419AC3: jz      short loc_419AEB
0x419AC5: mov     eax, [esi+4]
0x419AC8: push    eax; ArgList
0x419AC9: push    offset aSettingKeySA_0; "Setting key '%s' already used in map.\n"...
0x419ACE: call    PrintError
0x419AD3: add     esp, 8
0x419AD6: mov     eax, esi
0x419AD8: mov     ecx, [esp+18h+var_C]
0x419ADC: mov     large fs:0, ecx
0x419AE3: pop     ecx
0x419AE4: pop     esi
0x419AE5: add     esp, 10h
0x419AE8: retn    8
0x419AEB: mov     ecx, [esi+4]
0x419AEE: push    esi
0x419AEF: push    ecx
0x419AF0: mov     ecx, offset dword_B35574
0x419AF5: call    sub_412D30
0x419AFA: mov     eax, esi
0x419AFC: mov     ecx, [esp+18h+var_C]
0x419B00: mov     large fs:0, ecx
0x419B07: pop     ecx
0x419B08: pop     esi
0x419B09: add     esp, 10h
0x419B0C: retn    8
