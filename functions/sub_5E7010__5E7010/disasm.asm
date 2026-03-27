0x5E7010: push    ecx
0x5E7011: push    esi
0x5E7012: mov     esi, ecx
0x5E7014: cmp     dword ptr [esi+58h], 0
0x5E7018: jz      short loc_5E7044
0x5E701A: mov     ecx, [esi+58h]
0x5E701D: mov     eax, [ecx]
0x5E701F: mov     edx, [eax+2C0h]
0x5E7025: call    edx
0x5E7027: test    ax, 400h
0x5E702B: jz      short loc_5E7044
0x5E702D: mov     ecx, [esi+58h]
0x5E7030: mov     eax, [ecx]
0x5E7032: mov     edx, [eax+2C0h]
0x5E7038: call    edx
0x5E703A: test    ax, 800h
0x5E703E: jz      loc_5E70DD
0x5E7044: cmp     dword ptr [esi+0B0h], 3
0x5E704B: jz      loc_5E70DD
0x5E7051: cmp     byte ptr ds:0B333B8h, 0
0x5E7058: jz      short loc_5E7072
0x5E705A: push    0; Seed
0x5E705C: call    GetRandomLargeInteger?
0x5E7061: add     esp, 4
0x5E7064: and     eax, 80000007h
0x5E7069: jns     short loc_5E7070
0x5E706B: dec     eax
0x5E706C: or      eax, 0FFFFFFF8h
0x5E706F: inc     eax
0x5E7070: jnz     short loc_5E70DD
0x5E7072: mov     eax, [esi]
0x5E7074: mov     edx, [eax+330h]
0x5E707A: mov     ecx, esi
0x5E707C: call    edx
0x5E707E: test    eax, eax
0x5E7080: jz      short loc_5E70A9
0x5E7082: mov     eax, [esp+8+arg_8]
0x5E7086: mov     ecx, [esp+8+arg_4]
0x5E708A: mov     edx, [esp+8+arg_0]
0x5E708E: push    eax
0x5E708F: mov     eax, [esi]
0x5E7091: push    ecx
0x5E7092: push    edx
0x5E7093: mov     edx, [eax+330h]
0x5E7099: mov     ecx, esi
0x5E709B: call    edx
0x5E709D: mov     ecx, eax
0x5E709F: call    sub_6167F0
0x5E70A4: pop     esi
0x5E70A5: pop     ecx
0x5E70A6: retn    0Ch
0x5E70A9: mov     ecx, [esi+58h]
0x5E70AC: test    ecx, ecx
0x5E70AE: jz      short loc_5E70DD
0x5E70B0: mov     eax, [ecx]
0x5E70B2: mov     edx, [eax+33Ch]
0x5E70B8: push    0
0x5E70BA: call    edx
0x5E70BC: mov     ecx, [esp+8+arg_4]
0x5E70C0: mov     edx, [esp+8+arg_0]
0x5E70C4: mov     [esp+8+var_4], eax
0x5E70C8: mov     eax, [esp+8+arg_8]
0x5E70CC: push    eax
0x5E70CD: push    ecx
0x5E70CE: push    edx
0x5E70CF: lea     eax, [esp+14h+var_4]
0x5E70D3: push    esi
0x5E70D4: push    eax
0x5E70D5: call    sub_616530
0x5E70DA: add     esp, 14h
0x5E70DD: pop     esi
0x5E70DE: pop     ecx
0x5E70DF: retn    0Ch
