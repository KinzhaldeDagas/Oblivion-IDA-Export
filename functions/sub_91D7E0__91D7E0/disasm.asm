0x91D7E0: push    ecx
0x91D7E1: mov     eax, [esp+4+arg_0]
0x91D7E5: push    ebp
0x91D7E6: mov     ebp, [eax+0Ch]
0x91D7E9: mov     [esp+8+var_4], ecx
0x91D7ED: mov     ecx, [ebp+0]
0x91D7F0: sub     ecx, ebp
0x91D7F2: sub     ecx, 30h ; '0'
0x91D7F5: mov     eax, 2AAAAAABh
0x91D7FA: imul    ecx
0x91D7FC: sar     edx, 3
0x91D7FF: mov     eax, edx
0x91D801: shr     eax, 1Fh
0x91D804: add     eax, edx
0x91D806: test    eax, eax
0x91D808: jle     short loc_91D84F
0x91D80A: push    ebx
0x91D80B: push    esi
0x91D80C: add     ebp, 30h ; '0'
0x91D80F: mov     [esp+10h+arg_0], eax
0x91D813: push    edi
0x91D814: jmp     short loc_91D820
0x91D816: align 10h
0x91D820: mov     edx, [esp+14h+var_4]
0x91D824: mov     edi, ds:0BA8454h
0x91D82A: mov     esi, [edx-10h]
0x91D82D: lea     ecx, [ebp+10h]
0x91D830: push    ebp
0x91D831: mov     ebx, 0FF008000h
0x91D836: call    sub_91D530
0x91D83B: mov     eax, [esp+18h+arg_0]
0x91D83F: add     esp, 4
0x91D842: add     ebp, 30h ; '0'
0x91D845: dec     eax
0x91D846: mov     [esp+14h+arg_0], eax
0x91D84A: jnz     short loc_91D820
0x91D84C: pop     edi
0x91D84D: pop     esi
0x91D84E: pop     ebx
0x91D84F: pop     ebp
0x91D850: pop     ecx
0x91D851: retn    4
