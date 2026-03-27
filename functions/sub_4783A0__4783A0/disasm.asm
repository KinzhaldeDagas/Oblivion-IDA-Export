0x4783A0: push    ecx
0x4783A1: xor     ecx, ecx
0x4783A3: mov     [esp+4+var_4], ecx
0x4783A6: mov     eax, ds:0B39B80h
0x4783AB: test    eax, eax
0x4783AD: push    esi
0x4783AE: push    edi
0x4783AF: jz      short loc_4783BC
0x4783B1: mov     esi, [esp+0Ch+var_4]
0x4783B5: add     eax, 0DB8h
0x4783BA: jmp     short loc_4783CB
0x4783BC: xor     esi, esi
0x4783BE: mov     [esp+0Ch+var_4], esi
0x4783C2: lea     eax, [esp+0Ch+var_4]
0x4783C6: mov     ecx, 1
0x4783CB: test    cl, 1
0x4783CE: mov     edi, [eax]
0x4783D0: jz      short loc_4783EE
0x4783D2: test    esi, esi
0x4783D4: jz      short loc_4783EE
0x4783D6: lea     eax, [esi+4]
0x4783D9: push    eax; lpAddend
0x4783DA: call    dword ptr ds:0A2807Ch
0x4783E0: test    eax, eax
0x4783E2: jnz     short loc_4783EE
0x4783E4: mov     edx, [esi]
0x4783E6: mov     eax, [edx]
0x4783E8: push    1
0x4783EA: mov     ecx, esi
0x4783EC: call    eax
0x4783EE: mov     eax, edi
0x4783F0: pop     edi
0x4783F1: pop     esi
0x4783F2: pop     ecx
0x4783F3: retn
