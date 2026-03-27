0x41F950: push    ecx
0x41F951: push    ebx
0x41F952: push    esi
0x41F953: push    edi
0x41F954: xor     ebx, ebx
0x41F956: push    2; a2
0x41F958: mov     [esp+14h+var_4], ebx
0x41F95C: call    BaseExtraList_GetExtraData
0x41F961: test    eax, eax
0x41F963: jz      short loc_41F96E
0x41F965: mov     esi, [esp+10h+var_4]
0x41F969: add     eax, 10h
0x41F96C: jmp     short loc_41F97D
0x41F96E: xor     esi, esi
0x41F970: mov     [esp+10h+var_4], esi
0x41F974: lea     eax, [esp+10h+var_4]
0x41F978: mov     ebx, 1
0x41F97D: test    bl, 1
0x41F980: mov     edi, [eax]
0x41F982: jz      short loc_41F9A0
0x41F984: test    esi, esi
0x41F986: jz      short loc_41F9A0
0x41F988: lea     eax, [esi+4]
0x41F98B: push    eax; lpAddend
0x41F98C: call    ds:InterlockedDecrement
0x41F992: test    eax, eax
0x41F994: jnz     short loc_41F9A0
0x41F996: mov     edx, [esi]
0x41F998: mov     eax, [edx]
0x41F99A: push    1
0x41F99C: mov     ecx, esi
0x41F99E: call    eax
0x41F9A0: mov     eax, edi
0x41F9A2: pop     edi
0x41F9A3: pop     esi
0x41F9A4: pop     ebx
0x41F9A5: pop     ecx
0x41F9A6: retn
