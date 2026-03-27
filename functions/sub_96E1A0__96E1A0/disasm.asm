0x96E1A0: push    esi
0x96E1A1: push    edi
0x96E1A2: mov     edi, [esp+8+arg_0]
0x96E1A6: push    edi
0x96E1A7: mov     esi, ecx
0x96E1A9: call    sub_711C90
0x96E1AE: cmp     dword ptr [edi+0D8h], 0A000106h
0x96E1B8: jb      short loc_96E1D3
0x96E1BA: lea     eax, [esi+24h]
0x96E1BD: push    eax
0x96E1BE: push    edi
0x96E1BF: call    sub_96DE60
0x96E1C4: lea     ecx, [esi+28h]
0x96E1C7: push    ecx
0x96E1C8: push    edi
0x96E1C9: call    sub_96DE60
0x96E1CE: add     esp, 10h
0x96E1D1: jmp     short loc_96E1E0
0x96E1D3: lea     edx, [esi+24h]
0x96E1D6: push    edx
0x96E1D7: push    edi
0x96E1D8: call    sub_96DE60
0x96E1DD: add     esp, 8
0x96E1E0: lea     eax, [esp+8+arg_0]
0x96E1E4: push    eax
0x96E1E5: push    edi
0x96E1E6: call    sub_6BDED0
0x96E1EB: add     esp, 8
0x96E1EE: cmp     byte ptr [esp+8+arg_0], 0
0x96E1F3: jz      short loc_96E20D
0x96E1F5: push    edi
0x96E1F6: call    sub_95DB10
0x96E1FB: mov     [esi+2Ch], eax
0x96E1FE: mov     edx, [eax]
0x96E200: mov     ecx, eax
0x96E202: mov     eax, [edx+18h]
0x96E205: add     esp, 4
0x96E208: call    eax
0x96E20A: mov     [esi+30h], eax
0x96E20D: pop     edi
0x96E20E: pop     esi
0x96E20F: retn    4
