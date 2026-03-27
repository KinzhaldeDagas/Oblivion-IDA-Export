0x5297C0: push    esi
0x5297C1: lea     esi, [ecx+48h]
0x5297C4: test    esi, esi
0x5297C6: jz      short loc_529816
0x5297C8: push    edi
0x5297C9: lea     esp, [esp+0]
0x5297D0: mov     ecx, esi
0x5297D2: call    BSSimpleList_IsEmpty
0x5297D7: test    al, al
0x5297D9: jnz     short loc_529815
0x5297DB: mov     edi, [esi]
0x5297DD: test    edi, edi
0x5297DF: jz      short loc_5297F1
0x5297E1: mov     ecx, edi
0x5297E3: call    sub_52B330
0x5297E8: push    edi
0x5297E9: call    FormHeapFree
0x5297EE: add     esp, 4
0x5297F1: mov     eax, [esi+4]
0x5297F4: test    eax, eax
0x5297F6: jz      short loc_52980D
0x5297F8: mov     ecx, [eax+4]
0x5297FB: mov     [esi+4], ecx
0x5297FE: mov     edx, [eax]
0x529800: push    eax
0x529801: mov     [esi], edx
0x529803: call    FormHeapFree
0x529808: add     esp, 4
0x52980B: jmp     short loc_5297D0
0x52980D: mov     dword ptr [esi], 0
0x529813: jmp     short loc_5297D0
0x529815: pop     edi
0x529816: pop     esi
0x529817: retn
