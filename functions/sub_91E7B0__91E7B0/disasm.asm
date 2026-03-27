0x91E7B0: mov     eax, [esp+arg_0]
0x91E7B4: push    ebx
0x91E7B5: push    esi
0x91E7B6: push    edi
0x91E7B7: push    eax
0x91E7B8: mov     esi, ecx
0x91E7BA: call    sub_9491F0
0x91E7BF: mov     dword ptr [esi+28h], offset off_A9D2B4
0x91E7C6: lea     ebx, [esi+28h]
0x91E7C9: xor     edi, edi
0x91E7CB: mov     dword ptr [esi], offset off_A9D8B8
0x91E7D1: mov     dword ptr [esi+8], offset off_A9D8A0
0x91E7D8: mov     dword ptr [esi+20h], offset off_A9D84C
0x91E7DF: mov     dword ptr [ebx], offset off_A9D894
0x91E7E5: mov     [esi+2Ch], edi
0x91E7E8: mov     [esi+30h], edi
0x91E7EB: mov     dword ptr [esi+34h], 80000000h
0x91E7F2: mov     eax, [esi+24h]
0x91E7F5: cmp     eax, edi
0x91E7F7: jz      short loc_91E81A
0x91E7F9: cmp     [eax+60h], edi
0x91E7FC: jle     short loc_91E81A
0x91E7FE: mov     edi, edi
0x91E800: mov     ecx, [esi+24h]
0x91E803: mov     edx, [ecx+5Ch]
0x91E806: mov     ecx, [edx+edi*4]
0x91E809: push    ebx
0x91E80A: call    sub_899D20
0x91E80F: mov     eax, [esi+24h]
0x91E812: mov     ecx, [eax+60h]
0x91E815: inc     edi
0x91E816: cmp     edi, ecx
0x91E818: jl      short loc_91E800
0x91E81A: pop     edi
0x91E81B: mov     eax, esi
0x91E81D: pop     esi
0x91E81E: pop     ebx
0x91E81F: retn    4
