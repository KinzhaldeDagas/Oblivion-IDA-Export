0x667520: push    ecx
0x667521: cmp     dword ptr ds:0B3BB48h, 0
0x667528: mov     [esp+4+var_4], ecx
0x66752B: jnz     short loc_667536
0x66752D: cmp     dword ptr ds:0B3BB44h, 0
0x667534: jz      short loc_6675A0
0x667536: push    ebx
0x667537: push    esi
0x667538: push    edi
0x667539: mov     ebx, offset dword_B3BB44
0x66753E: mov     edi, edi
0x667540: mov     edi, [ebx]
0x667542: mov     eax, [edi]
0x667544: mov     edx, [eax+154h]
0x66754A: mov     ecx, edi
0x66754C: call    edx
0x66754E: mov     esi, eax
0x667550: test    esi, esi
0x667552: jz      short loc_667577
0x667554: mov     ecx, [esp+10h+var_4]
0x667558: push    esi
0x667559: call    sub_6670F0
0x66755E: test    al, al
0x667560: jnz     short loc_667596
0x667562: and     word ptr [esi+18h], 0FFFEh
0x667568: push    0
0x66756A: push    1
0x66756C: push    1
0x66756E: push    esi
0x66756F: call    sub_88CF20
0x667574: add     esp, 10h
0x667577: push    edi
0x667578: mov     ecx, offset dword_B3BB44
0x66757D: call    BSSimpleList_Remove
0x667582: cmp     dword ptr ds:0B3BB48h, 0
0x667589: jnz     short loc_667539
0x66758B: cmp     dword ptr ds:0B3BB44h, 0
0x667592: jz      short loc_66759D
0x667594: jmp     short loc_667539
0x667596: mov     ebx, [ebx+4]
0x667599: test    ebx, ebx
0x66759B: jnz     short loc_667540
0x66759D: pop     edi
0x66759E: pop     esi
0x66759F: pop     ebx
0x6675A0: pop     ecx
0x6675A1: retn
