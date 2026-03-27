0x4127E0: push    0FFFFFFFFh
0x4127E2: push    offset ??1TESSubSpace@@UAE@XZ_SEH
0x4127E7: mov     eax, large fs:0
0x4127ED: push    eax
0x4127EE: push    ecx
0x4127EF: push    esi
0x4127F0: mov     eax, ___security_cookie
0x4127F5: xor     eax, esp
0x4127F7: push    eax
0x4127F8: lea     eax, [esp+18h+var_C]
0x4127FC: mov     large fs:0, eax
0x412802: mov     esi, ecx
0x412804: mov     [esp+18h+var_10], esi
0x412808: xor     ecx, ecx
0x41280A: cmp     esi, ecx
0x41280C: mov     [esp+18h+var_4], ecx
0x412810: jz      short loc_412815
0x412812: lea     ecx, [esi+24h]
0x412815: call    MagicItem_destr
0x41281A: mov     ecx, esi
0x41281C: mov     [esp+18h+var_4], 0FFFFFFFFh
0x412824: call    TESObject_destr
0x412829: mov     ecx, [esp+18h+var_C]
0x41282D: mov     large fs:0, ecx
0x412834: pop     ecx
0x412835: pop     esi
0x412836: add     esp, 10h
0x412839: retn
