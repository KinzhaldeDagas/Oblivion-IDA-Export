0x85C7D0: push    0FFFFFFFFh
0x85C7D2: push    offset SEH_85C7D0
0x85C7D7: mov     eax, large fs:0
0x85C7DD: push    eax
0x85C7DE: push    esi
0x85C7DF: push    edi
0x85C7E0: mov     eax, ds:0B30AACh
0x85C7E5: xor     eax, esp
0x85C7E7: push    eax
0x85C7E8: lea     eax, [esp+18h+var_C]
0x85C7EC: mov     large fs:0, eax
0x85C7F2: mov     edi, ecx
0x85C7F4: mov     eax, [esp+18h+arg_8]
0x85C7F8: mov     eax, [eax+0Ch]
0x85C7FB: mov     esi, ds:0B477B4h
0x85C801: push    eax
0x85C802: call    sub_848E50
0x85C807: cmp     byte ptr [esp+18h+arg_10], 0
0x85C80C: jnz     short loc_85C84E
0x85C80E: test    esi, esi
0x85C810: mov     [esp+18h+arg_10], esi
0x85C814: jz      short loc_85C81A
0x85C816: add     dword ptr [esi+60h], 1
0x85C81A: mov     edx, [edi+38h]
0x85C81D: lea     ecx, [esp+18h+arg_10]
0x85C821: push    ecx
0x85C822: push    edx
0x85C823: lea     ecx, [edi+40h]
0x85C826: mov     [esp+20h+var_4], 0
0x85C82E: call    sub_76CE40
0x85C833: or      eax, 0FFFFFFFFh
0x85C836: test    esi, esi
0x85C838: mov     [esp+18h+var_4], eax
0x85C83C: jz      short loc_85C84A
0x85C83E: add     [esi+60h], eax
0x85C841: jnz     short loc_85C84A
0x85C843: mov     ecx, esi
0x85C845: call    sub_7604D0
0x85C84A: add     dword ptr [edi+38h], 1
0x85C84E: mov     ecx, [esp+18h+var_C]
0x85C852: mov     large fs:0, ecx
0x85C859: pop     ecx
0x85C85A: pop     edi
0x85C85B: pop     esi
0x85C85C: add     esp, 0Ch
0x85C85F: retn    14h
