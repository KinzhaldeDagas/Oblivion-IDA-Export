0x850B50: push    0FFFFFFFFh
0x850B52: push    offset SEH_852030
0x850B57: mov     eax, large fs:0
0x850B5D: push    eax
0x850B5E: push    ecx
0x850B5F: push    ebx
0x850B60: push    esi
0x850B61: push    edi
0x850B62: mov     eax, ds:0B30AACh
0x850B67: xor     eax, esp
0x850B69: push    eax
0x850B6A: lea     eax, [esp+20h+var_C]
0x850B6E: mov     large fs:0, eax
0x850B74: mov     esi, ecx
0x850B76: mov     edi, ds:0B455C8h
0x850B7C: test    edi, edi
0x850B7E: mov     [esp+20h+var_10], edi
0x850B82: mov     ebx, 1
0x850B87: jz      short loc_850B8C
0x850B89: add     [edi+60h], ebx
0x850B8C: mov     ecx, [esi+38h]
0x850B8F: lea     eax, [esp+20h+var_10]
0x850B93: push    eax
0x850B94: push    ecx
0x850B95: lea     ecx, [esi+40h]
0x850B98: mov     [esp+28h+var_4], 0
0x850BA0: call    sub_76CE40
0x850BA5: or      eax, 0FFFFFFFFh
0x850BA8: test    edi, edi
0x850BAA: mov     [esp+20h+var_4], eax
0x850BAE: jz      short loc_850BBC
0x850BB0: add     [edi+60h], eax
0x850BB3: jnz     short loc_850BBC
0x850BB5: mov     ecx, edi
0x850BB7: call    sub_7604D0
0x850BBC: add     [esi+38h], ebx
0x850BBF: mov     ecx, [esp+20h+var_C]
0x850BC3: mov     large fs:0, ecx
0x850BCA: pop     ecx
0x850BCB: pop     edi
0x850BCC: pop     esi
0x850BCD: pop     ebx
0x850BCE: add     esp, 10h
0x850BD1: retn    10h
