0x45F7A0: mov     eax, ds:0B33398h
0x45F7A5: push    ebx
0x45F7A6: push    esi
0x45F7A7: push    edi
0x45F7A8: mov     edi, [eax+10h]
0x45F7AB: mov     esi, ecx
0x45F7AD: call    dword ptr ds:0A2808Ch
0x45F7B3: cmp     eax, edi
0x45F7B5: jnz     short loc_45F7BC
0x45F7B7: mov     al, [esi+18h]
0x45F7BA: jmp     short loc_45F7C2
0x45F7BC: mov     eax, [esi+18h]
0x45F7BF: shr     eax, 12h
0x45F7C2: and     al, 1
0x45F7C4: test    al, al
0x45F7C6: jz      short loc_45F7DA
0x45F7C8: mov     ecx, ds:0B34D90h
0x45F7CE: mov     edx, [ecx]
0x45F7D0: mov     eax, [edx+18h]
0x45F7D3: push    offset aErrorTessavelo; "Error: TESSaveLoadGame::SaveGameData() "...
0x45F7D8: call    eax
0x45F7DA: mov     ebx, [esp+0Ch+arg_4]
0x45F7DE: shr     ebx, 2
0x45F7E1: mov     edi, 0
0x45F7E6: jz      short loc_45F819
0x45F7E8: push    ebp
0x45F7E9: mov     ebp, [esp+10h+arg_0]
0x45F7ED: lea     ecx, [ecx+0]
0x45F7F0: cmp     byte ptr [esi+7Dh], 0
0x45F7F4: jz      short loc_45F804
0x45F7F6: mov     ecx, [ebp+edi*4+0]
0x45F7FA: push    ecx
0x45F7FB: mov     ecx, esi
0x45F7FD: call    SaveLoad_IRefToFormID?
0x45F802: jmp     short loc_45F808
0x45F804: mov     eax, [ebp+edi*4+0]
0x45F808: mov     edx, [esi+14h]
0x45F80B: mov     [edx], eax
0x45F80D: add     dword ptr [esi+14h], 4
0x45F811: add     edi, 1
0x45F814: cmp     edi, ebx
0x45F816: jb      short loc_45F7F0
0x45F818: pop     ebp
0x45F819: pop     edi
0x45F81A: pop     esi
0x45F81B: pop     ebx
0x45F81C: retn    8
