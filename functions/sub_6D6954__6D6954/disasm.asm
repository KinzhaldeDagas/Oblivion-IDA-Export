0x6D6954: mov     [esi+14h], edx
0x6D6957: mov     eax, ds:0B3CBA4h
0x6D695C: mov     [esi+18h], eax
0x6D695F: mov     ecx, ds:0B3CBA8h
0x6D6965: mov     [esi+1Ch], ecx
0x6D6968: mov     edx, ds:0B3CBACh
0x6D696E: mov     [esi+20h], edx
0x6D6971: mov     eax, ds:0B3CBB0h
0x6D6976: mov     [esi+24h], eax
0x6D6979: fld     dword ptr ds:0A79E10h
0x6D697F: fstp    dword ptr [esi+28h]
0x6D6982: mov     [esi+2Ch], edi
0x6D6985: mov     [esi+30h], di
0x6D6989: mov     [esi+32h], di
0x6D698D: mov     [esi+34h], di
0x6D6991: jmp     short loc_6D6995
0x6D6993: xor     esi, esi
0x6D6995: mov     ecx, [esp+arg_20]
0x6D6999: push    ecx
0x6D699A: push    esi
0x6D699B: mov     ecx, ebx
0x6D699D: mov     [esp+8+arg_18], 0FFFFFFFFh
0x6D69A5: call    sub_6D6660
0x6D69AA: mov     eax, esi
0x6D69AC: mov     ecx, [esp+arg_10]
0x6D69B0: mov     large fs:0, ecx
0x6D69B7: pop     ecx
0x6D69B8: pop     edi
0x6D69B9: pop     esi
0x6D69BA: pop     ebx
0x6D69BB: add     esp, 10h
0x6D69BE: retn    4
