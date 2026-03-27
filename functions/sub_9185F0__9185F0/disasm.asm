0x9185F0: push    ebx
0x9185F1: mov     ebx, [esp+4+arg_0]
0x9185F5: push    esi
0x9185F6: push    edi
0x9185F7: push    ebx
0x9185F8: mov     edi, ecx
0x9185FA: call    sub_8B1860
0x9185FF: mov     esi, eax
0x918601: add     esp, 4
0x918604: cmp     esi, 0FFFFh
0x91860A: jle     short loc_918611
0x91860C: mov     esi, 0FFFFh
0x918611: mov     ecx, [edi+10h]
0x918614: lea     eax, [esi+7]
0x918617: push    eax
0x918618: call    sub_918440
0x91861D: mov     ecx, [edi+10h]
0x918620: push    0C0h ; 'À'
0x918625: call    sub_9181B0
0x91862A: mov     ecx, [esp+0Ch+arg_4]
0x91862E: push    ecx
0x91862F: mov     ecx, [edi+10h]
0x918632: call    sub_918440
0x918637: mov     ecx, [edi+10h]
0x91863A: push    esi
0x91863B: call    sub_918420
0x918640: mov     ecx, [edi+10h]
0x918643: push    esi
0x918644: push    ebx
0x918645: call    sub_918390
0x91864A: pop     edi
0x91864B: pop     esi
0x91864C: xor     eax, eax
0x91864E: pop     ebx
0x91864F: retn    8
