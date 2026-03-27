0x65D8D0: push    0FFFFFFFFh
0x65D8D2: push    offset SEH_65D8D0
0x65D8D7: mov     eax, large fs:0
0x65D8DD: push    eax
0x65D8DE: sub     esp, 18h
0x65D8E1: push    ebx
0x65D8E2: push    esi
0x65D8E3: push    edi
0x65D8E4: mov     eax, ds:0B30AACh
0x65D8E9: xor     eax, esp
0x65D8EB: push    eax
0x65D8EC: lea     eax, [esp+34h+var_C]
0x65D8F0: mov     large fs:0, eax
0x65D8F6: mov     edi, ecx
0x65D8F8: mov     esi, [esp+34h+arg_0]
0x65D8FC: xor     ebx, ebx
0x65D8FE: cmp     esi, ebx
0x65D900: jz      loc_65D9BC
0x65D906: push    1
0x65D908: mov     ecx, esi
0x65D90A: call    sub_52B440
0x65D90F: test    eax, eax
0x65D911: jz      loc_65D9BC
0x65D917: call    sub_67F0A0
0x65D91C: mov     ecx, esi
0x65D91E: mov     byte ptr [esp+34h+arg_0], al
0x65D922: call    sub_68CA20
0x65D927: push    eax
0x65D928: call    sub_67F0B0
0x65D92D: call    sub_67F0C0
0x65D932: push    ebx
0x65D933: mov     byte ptr [esp+3Ch+var_24], al
0x65D937: call    sub_67F0D0
0x65D93C: add     esp, 8
0x65D93F: lea     ecx, [esp+34h+var_20]
0x65D943: call    sub_68A9F0
0x65D948: push    1
0x65D94A: mov     ecx, esi
0x65D94C: mov     [esp+38h+var_4], ebx
0x65D950: call    sub_52B440
0x65D955: mov     esi, eax
0x65D957: push    esi
0x65D958: lea     eax, [esp+38h+var_20]
0x65D95C: push    eax
0x65D95D: mov     ecx, edi
0x65D95F: call    sub_65D880
0x65D964: test    al, al
0x65D966: jz      short loc_65D97B
0x65D968: lea     ecx, [esp+34h+var_20]
0x65D96C: call    sub_68A1B0
0x65D971: mov     edi, eax
0x65D973: cmp     edi, ebx
0x65D975: jnz     short loc_65D97D
0x65D977: mov     edi, esi
0x65D979: jmp     short loc_65D97D
0x65D97B: xor     edi, edi
0x65D97D: mov     ecx, [esp+34h+arg_0]
0x65D981: push    ecx
0x65D982: call    sub_67F0B0
0x65D987: mov     edx, [esp+38h+var_24]
0x65D98B: push    edx
0x65D98C: call    sub_67F0D0
0x65D991: add     esp, 8
0x65D994: lea     ecx, [esp+34h+var_20]
0x65D998: mov     [esp+34h+var_4], 0FFFFFFFFh
0x65D9A0: call    sub_68AA10
0x65D9A5: mov     eax, edi
0x65D9A7: mov     ecx, [esp+34h+var_C]
0x65D9AB: mov     large fs:0, ecx
0x65D9B2: pop     ecx
0x65D9B3: pop     edi
0x65D9B4: pop     esi
0x65D9B5: pop     ebx
0x65D9B6: add     esp, 24h
0x65D9B9: retn    4
0x65D9BC: mov     eax, ebx
0x65D9BE: mov     ecx, [esp+34h+var_C]
0x65D9C2: mov     large fs:0, ecx
0x65D9C9: pop     ecx
0x65D9CA: pop     edi
0x65D9CB: pop     esi
0x65D9CC: pop     ebx
0x65D9CD: add     esp, 24h
0x65D9D0: retn    4
