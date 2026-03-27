0x57ECB0: push    ecx
0x57ECB1: mov     edx, ds:0B333C4h
0x57ECB7: mov     edx, [edx+5D8h]
0x57ECBD: push    esi
0x57ECBE: mov     esi, ecx
0x57ECC0: mov     ecx, [esi+60h]
0x57ECC3: mov     eax, [ecx]
0x57ECC5: mov     eax, [eax+88h]
0x57ECCB: push    edx
0x57ECCC: lea     edx, [esp+0Ch+var_4]
0x57ECD0: push    edx
0x57ECD1: call    eax
0x57ECD3: mov     eax, dword ptr [esp+8+var_4]
0x57ECD7: test    eax, eax
0x57ECD9: jz      short loc_57ECFB
0x57ECDB: push    edi
0x57ECDC: mov     edi, eax
0x57ECDE: add     eax, 4
0x57ECE1: push    eax; lpAddend
0x57ECE2: call    dword ptr ds:0A2807Ch
0x57ECE8: test    eax, eax
0x57ECEA: jnz     short loc_57ECFA
0x57ECEC: test    edi, edi
0x57ECEE: jz      short loc_57ECFA
0x57ECF0: mov     edx, [edi]
0x57ECF2: mov     eax, [edx]
0x57ECF4: push    1
0x57ECF6: mov     ecx, edi
0x57ECF8: call    eax
0x57ECFA: pop     edi
0x57ECFB: mov     eax, [esi+60h]
0x57ECFE: or      word ptr [eax+18h], 1
0x57ED03: mov     ecx, ds:0B333C4h; int
0x57ED09: push    0; char
0x57ED0B: call    sub_668D00
0x57ED10: pop     esi
0x57ED11: pop     ecx
0x57ED12: retn
