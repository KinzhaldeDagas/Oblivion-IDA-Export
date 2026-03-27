0x718730: push    esi
0x718731: push    edi
0x718732: mov     edi, [esp+8+arg_0]
0x718736: push    edi
0x718737: mov     esi, ecx
0x718739: call    sub_700AC0
0x71873E: cmp     dword ptr [edi+0D8h], 0A000102h
0x718748: jnb     short loc_71875B
0x71874A: mov     ax, [edi+25Ch]
0x718751: and     ax, 3FFFh
0x718755: mov     [esi+18h], ax
0x718759: jmp     short loc_71877F
0x71875B: mov     eax, [edi+21Ch]
0x718761: push    1
0x718763: lea     ecx, [esp+0Ch+arg_0]
0x718767: push    ecx
0x718768: push    2
0x71876A: lea     edx, [esi+18h]
0x71876D: push    edx
0x71876E: push    eax
0x71876F: mov     eax, [eax+4]
0x718772: mov     [esp+1Ch+arg_0], 2
0x71877A: call    eax
0x71877C: add     esp, 14h
0x71877F: mov     edi, [edi+21Ch]
0x718785: mov     edx, [edi+4]
0x718788: push    1
0x71878A: lea     ecx, [esp+0Ch+arg_0]
0x71878E: push    ecx
0x71878F: push    1
0x718791: add     esi, 1Ah
0x718794: push    esi
0x718795: push    edi
0x718796: mov     [esp+1Ch+arg_0], 1
0x71879E: call    edx
0x7187A0: add     esp, 14h
0x7187A3: pop     edi
0x7187A4: pop     esi
0x7187A5: retn    4
