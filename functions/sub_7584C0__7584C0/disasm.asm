0x7584C0: push    esi
0x7584C1: mov     esi, ecx
0x7584C3: mov     eax, [esi+1Ch]
0x7584C6: test    eax, eax
0x7584C8: push    edi
0x7584C9: jz      short loc_7584DB
0x7584CB: mov     ecx, [esi+20h]
0x7584CE: mov     edx, ds:0B3D2C8h[ecx*4]
0x7584D5: push    eax
0x7584D6: call    edx ; dword_B3D2C8
0x7584D8: add     esp, 4
0x7584DB: mov     edi, [esp+8+arg_0]
0x7584DF: test    edi, edi
0x7584E1: jz      short loc_758506
0x7584E3: mov     ecx, [esp+8+arg_4]
0x7584E7: test    ecx, ecx
0x7584E9: jz      short loc_758506
0x7584EB: mov     eax, [esp+8+arg_8]
0x7584EF: mov     dl, ds:byte_B3D406[eax]
0x7584F5: mov     [esi+1Ch], edi
0x7584F8: pop     edi
0x7584F9: mov     [esi+24h], dl
0x7584FC: mov     [esi+18h], ecx
0x7584FF: mov     [esi+20h], eax
0x758502: pop     esi
0x758503: retn    0Ch
0x758506: pop     edi
0x758507: mov     dword ptr [esi+18h], 0
0x75850E: mov     dword ptr [esi+1Ch], 0
0x758515: mov     byte ptr [esi+24h], 0
0x758519: pop     esi
0x75851A: retn    0Ch
